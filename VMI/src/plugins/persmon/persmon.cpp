#include <glib-2.0/glib.h>
#include <libvmi/libvmi.h>
#include <memory>
#include <stdexcept>
#include <map>
#include <vector>
#include <algorithm>

#include <iostream>
#include "plugins/private.h"
#include "persmon.h"
#include "persmon_util.h"

/**
 * @brief faster lookup mechanism for API tracing.
 * Lookup by dll_id_t.
 * Each cell is a pointer to another GHashtable of a particular DLL, which
 * stores pointers to APIs proto in <dll_name>.cpp
 */
static GHashTable* dlls_to_apicalls_lookup;

/**
 * @brief faster lookup mechanism for SYSCALL tracing.
 * Lookup by syscall name.
 * Each cell is a pointer to a syscall_t proto, found in syscalls_persmon.cpp
 */
static GHashTable* syscall_lookup;

/**
 * @brief Callstack management.
 * Lookup by TID.
 * Each cell is a pointer to a tsl_info_t
 */
GHashTable* tlsinfo_lookup;

/**
 * @brief offsets of some Windows internal data structures that need to be
 * scanned for (i) target process monitoring and (ii) dll ranges
 */
addr_t offsets[__OFFSET_MAX];

/**
 * @brief used for target process monitoring.
 * used for storing information about the current monitored processes
 * (main or infected)
 */
extern std::vector<target_process_t> target_processes;

/**
 * @brief flag to determine the type of instrumentation:
 *  - on return address (=false)
 *  - on ret (=true)
 */
bool ret_instrumentation_enabled = 0;

/**
 * @brief root of the DLL binary interval tree
 */
node_t* intervalTree;

/**
 * @brief flag to specify the vebosity level of the printer
 */
extern bool verbose_logging;

namespace
{

    struct gdeleter
    {
        void operator() (gpointer p)
        {
            g_free(p);
        }
    };

    using gchar_ptr = std::unique_ptr<gchar, gdeleter>;

}

//  +----------------------+
//  |    Core functions    |
//  +----------------------+

/**
 * @brief Get the dll id from its name (i.e. info->trap->breakpoint.module)
 *
 * @param dll_name
 * @return dll_id_t
 */
static dll_id_t get_dll_id_from_string(const char* dll_name)
{
    for(int dll_id = 0; dll_id < __DLL_MAX; dll_id++)
    {
        if(!strcmp(dll_name, dlls[dll_id].name))
            return (dll_id_t) dll_id;
    }
    return UNDEFINED;
}

addr_t get_eprocess_by_handle(drakvuf_t drakvuf, drakvuf_trap_info_t* info, addr_t handle)
{
    addr_t eprocess_base = 0;
    addr_t obj = drakvuf_get_obj_by_handle(drakvuf, info->proc_data.base_addr, handle);
    if(obj)
    {
        eprocess_base = obj + offsets[OBJECT_HEADER_BODY];
    }
    return eprocess_base;
}

vmi_pid_t get_ethread_id(drakvuf_t drakvuf, addr_t ethread_base)
{
    addr_t ethread_id;
    vmi_pid_t tid = 0;
    vmi_instance_t vmi;
    status_t status;

    ethread_id = ethread_base + offsets[ETHREAD_CID] + 4;
    vmi = drakvuf_lock_and_get_vmi(drakvuf);
    status = vmi_read_32_va(vmi, ethread_id, 0, (uint32_t*)&tid);
    if(VMI_FAILURE == status)
    {
        VD(printf("[DEBUG-ERROR] Failed to read current tid va\n");)
        drakvuf_release_vmi(drakvuf);
        return 0;
    }
    drakvuf_release_vmi(drakvuf);
    return tid;
}

vmi_pid_t get_ethread_pid(drakvuf_t drakvuf, addr_t ethread_base)
{
    addr_t ethread_pid;
    vmi_pid_t pid = 0;
    vmi_instance_t vmi;
    status_t status;

    ethread_pid = ethread_base + offsets[ETHREAD_CID];
    vmi = drakvuf_lock_and_get_vmi(drakvuf);
    status = vmi_read_32_va(vmi, ethread_pid, 0, (uint32_t*)&pid);
    if(VMI_FAILURE == status)
    {
        VD(printf("[DEBUG-ERROR] Failed to read current pid va\n");)
        drakvuf_release_vmi(drakvuf);
        return 0;
    }
    drakvuf_release_vmi(drakvuf);
    return pid;
}

int get_tids_eprocess(drakvuf_t drakvuf, addr_t eprocess_base, std::vector<vmi_pid_t>& tids)
{
    int skip_eprocess = 1; // first object inside ThreaListHead needs to be skipped (it's _EPROCESS)
    status_t status;
    vmi_instance_t vmi;
    addr_t start_thread_list_entry = eprocess_base + offsets[EPROCESS_THREAD_LIST_HEAD];
    addr_t current_thread_list_entry = start_thread_list_entry;
    addr_t next_thread_list_entry;

    vmi = drakvuf_lock_and_get_vmi(drakvuf);
    status = vmi_read_addr_va(vmi, current_thread_list_entry, 0, &next_thread_list_entry);
    if(VMI_FAILURE == status)
    {
        VD(printf("[DEBUG-ERROR] Unable to scan THREAD_LIST_HEAD\n");)
        goto error;
    }
    drakvuf_release_vmi(drakvuf);

    addr_t current_ethread_base, current_ethread_cid, current_ethread_id;
    vmi_pid_t current_tid;

    TD(printf("<TMON> List of TIDs in infected process... ");)

    do {
        if(skip_eprocess)
        {
            skip_eprocess--;
            goto increment;
        }
        current_ethread_base = current_thread_list_entry - offsets[ETHREAD_THREAD_LIST_ENTRY];
        current_ethread_cid = current_ethread_base + offsets[ETHREAD_CID];
        current_ethread_id = current_ethread_cid + 4; //it's the 2nd pointer in the struct CID

        vmi = drakvuf_lock_and_get_vmi(drakvuf);
        status = vmi_read_32_va(vmi, current_ethread_id, 0, (uint32_t*)&current_tid);
        if(VMI_FAILURE == status)
        {
            VD(printf("[DEBUG-ERROR] Failed to read TID value\n");)
            goto error;
        }
        drakvuf_release_vmi(drakvuf);

        TD(printf("%d ", current_tid);)

        tids.push_back(current_tid);

    increment:
        vmi = drakvuf_lock_and_get_vmi(drakvuf);
        //incrementing list_head
        current_thread_list_entry = next_thread_list_entry;
        status = vmi_read_addr_va(vmi, current_thread_list_entry, 0, &next_thread_list_entry);
        if(VMI_FAILURE == status)
        {
            VD(printf("[DEBUG-ERROR] Unable to scan next THREAD_LIST_HEAD\n");)
            goto error;
        }
        drakvuf_release_vmi(drakvuf);
    } while (current_thread_list_entry != start_thread_list_entry);

    TD(printf("\n");)
    return 1;

error:
    drakvuf_release_vmi(drakvuf);
    return 0;
}

vmi_pid_t get_last_tid_eprocess(drakvuf_t drakvuf, addr_t eprocess_base)
{
    vmi_pid_t last_tid = 0;
    int skip_eprocess = 1; // first object inside ThreaListHead needs to be skipped (it's _EPROCESS)
    status_t status;
    vmi_instance_t vmi;
    addr_t start_thread_list_entry = eprocess_base + offsets[EPROCESS_THREAD_LIST_HEAD];
    addr_t current_thread_list_entry = start_thread_list_entry;
    addr_t next_thread_list_entry;

    vmi = drakvuf_lock_and_get_vmi(drakvuf);
    status = vmi_read_addr_va(vmi, current_thread_list_entry, 0, &next_thread_list_entry);
    if(VMI_FAILURE == status)
    {
        VD(printf("[DEBUG-ERROR] Unable to scan THREAD_LIST_HEAD\n");)
        goto error;
    }
    drakvuf_release_vmi(drakvuf);

    addr_t current_ethread_base, current_ethread_cid, current_ethread_id;
    vmi_pid_t current_tid;

    TD(printf("<TMON> List of TIDs in infected process... ");)

    do {
        if(skip_eprocess)
        {
            skip_eprocess--;
            goto increment;
        }
        current_ethread_base = current_thread_list_entry - offsets[ETHREAD_THREAD_LIST_ENTRY];
        current_ethread_cid = current_ethread_base + offsets[ETHREAD_CID];
        current_ethread_id = current_ethread_cid + 4; //it's the 2nd pointer in the struct CID

        vmi = drakvuf_lock_and_get_vmi(drakvuf);
        status = vmi_read_32_va(vmi, current_ethread_id, 0, (uint32_t*)&current_tid);
        if(VMI_FAILURE == status)
        {
            VD(printf("[DEBUG-ERROR] Failed to read TID value\n");)
            goto error;
        }
        drakvuf_release_vmi(drakvuf);

        TD(printf("%d ", current_tid);)

    increment:
        vmi = drakvuf_lock_and_get_vmi(drakvuf);
        //incrementing list_head
        current_thread_list_entry = next_thread_list_entry;
        status = vmi_read_addr_va(vmi, current_thread_list_entry, 0, &next_thread_list_entry);
        if(VMI_FAILURE == status)
        {
            VD(printf("[DEBUG-ERROR] Unable to scan next THREAD_LIST_HEAD\n");)
            goto error;
        }
        drakvuf_release_vmi(drakvuf);
    } while (current_thread_list_entry != start_thread_list_entry);

    TD(printf("\n");)

    last_tid = current_tid;
    return last_tid;

error:
    drakvuf_release_vmi(drakvuf);
    return last_tid;
}

/**
 * @brief handlers on entry and on exit for apicalls and syscalls.
 * These callbacks are called as soon as a breakpoint on entry or on exit (that can be
 * either on the return address of the hooked function or on one of its ret) is hit
 * 
 * @param drakvuf 
 * @param info 
 * @return event_response_t 
 */
static event_response_t trap_apicall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info);
static event_response_t ret_trap_apicall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info);
static event_response_t trap_syscall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info);
static event_response_t ret_trap_syscall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info);

/**
 * @brief it injects a breakpoint on exit on each ret instruction of the caller apicall
 * Can fail to instrument one or more ret. If it doesn't succeed to instrument at least
 * one ret, it returns 0
 *
 * @param drakvuf
 * @param info
 * @param context
 * @return int, 0 if none bp type 2 was inserted (free context on caller)
 */
static int inject_bp_ret_instruction_apicall(drakvuf_t drakvuf, drakvuf_trap_info_t* info, apicall_context_t context)
{
    apicall_t* current_apicall = (apicall_t*) context->info_apicall;

    const char* current_apicall_name = info->trap->name;
    if(!info->trap->breakpoint.module)
    {
        VD(printf("[DEBUG-ERROR] <RETMON> Unable to retrieve dll name from info->trap->breakpoint.module\n");)
        return 0;
    }
    dll_id_t id_current_dll = get_dll_id_from_string(info->trap->breakpoint.module);

    // if apicall jumps in an other DLL, we need to retrieve info of target apicall (in chain)
    apicall_t* target_apicall = current_apicall;
    while(target_apicall->jump_in != UNDEFINED)
    {
        const char* previous_apicall_name = current_apicall_name;
        id_current_dll = target_apicall->jump_in;
        const char* dll_name = dlls[id_current_dll].name;
        if(!target_apicall->jump_in_api_name)
        {
            VD(printf("[DEBUG-ERROR] CRITICAL. Jump in some unnamed API\n");)
            return 0;
        }
        current_apicall_name = target_apicall->jump_in_api_name;
        PD(printf("Jumping:\t%s \t--->\t%s (%s)\n", previous_apicall_name, current_apicall_name, dll_name);)

        GHashTable* apicalls_lookup = (GHashTable*) g_hash_table_lookup (dlls_to_apicalls_lookup, dll_name);
        if(!apicalls_lookup)
        {
            //maybe we don't have APIs' proto for target DLL.
            VD(printf("[DEBUG-ERROR] <RETMON> Unable to retrieve hashtable of %s\n", dll_name);)
            return 0;
        }

        target_apicall = (apicall_t*) g_hash_table_lookup (apicalls_lookup, current_apicall_name);
        if(!target_apicall)
        {
            // we don't have API in jumped DLL (forward API case, i.e. SetLastError)
            PD(printf("<RETMON> Unable to retrieve %s apicall information from hashtable (forward API?)\n", current_apicall_name);)
            return 0;
        }
    }

    // NOTE: in the current version, base addresses are always present for DLLs if
    // ret instrumentation is enabled (otherwise DRAKVUF doesn't start up)
    if(!dlls[id_current_dll].base_address)
    {
        VD(printf("[DEBUG-ERROR] <RETMON> Base address of %s is %lu\n", dlls[id_current_dll].name, dlls[id_current_dll].base_address);)
        return 0;
    }

    addr_t target_dll_base_address = dlls[id_current_dll].base_address;
    addr_t* current_rets =  target_apicall->rets_rva;
    uint8_t num_successfull_injections = 0;
    uint8_t tot_rets = 0;

    // <=== CS
    vmi_instance_t vmi = drakvuf_lock_and_get_vmi(drakvuf);
    for(int i = 0; i < MAX_HANDLED_RETS; i++)
    {
        addr_t ret_rva = current_rets[i];

        //current apicall doesn't have any ret
        if(!ret_rva && i==0)
        {
            //should never happen if we've a well-defined chain
            VD(printf("[DEBUG] <RETMON> %s doesn't have any rets where place bp type 2\n", current_apicall_name);)
            break;
        } else if(!ret_rva) //end scan
        {
            break;
        }

        tot_rets++;
        addr_t ret_pa = 0;
        addr_t ret_va = target_dll_base_address + ret_rva;
        VD(printf("[DEBUG] <RETMON> ret rva: 0x%lx, ret va: 0x%lx, in %s\n", ret_rva, ret_va, dlls[id_current_dll].name);)
        if ( VMI_FAILURE == vmi_pagetable_lookup(vmi, info->regs->cr3, ret_va, &ret_pa) )
        {
            //NOTE: some bp2 injections die here due to lazy loading and CoW Windows mechanism
            VD(printf("[DEBUG-ERROR] <RETMON> Failed to find PA for breakpoint VA addr 0x%lx in DTB 0x%lx\n", ret_va, info->regs->cr3);)
            continue;
        }

        drakvuf_trap_t* ret_trap = (drakvuf_trap_t*)g_malloc0(sizeof(drakvuf_trap_t));
        ret_trap->type = BREAKPOINT;
        ret_trap->cb = ret_trap_apicall_cb;
        ret_trap->data = context;
        ret_trap->name = current_apicall_name;
        ret_trap->breakpoint.lookup_type = LOOKUP_NONE;
        ret_trap->breakpoint.addr_type = ADDR_PA;
        ret_trap->breakpoint.dtb = info->regs->cr3;
        ret_trap->breakpoint.addr = ret_pa;

        //VD(printf("[DEBUG] <RETMON> translation ret_vaddr to ret_paddr: 0x%lx -> 0x%lx\n", ret_va, ret_trap->breakpoint.addr);)

        if (!drakvuf_add_trap(drakvuf, ret_trap))
        {
            g_free(ret_trap);
            continue;
        }

        num_successfull_injections++;
        context->ret_traps.push_back(ret_trap);
    }

    // ===> CS
    drakvuf_release_vmi(drakvuf);
    PD(printf("<RETMON>\t> Inserted (%d/%d) breakpoints on ret\n", num_successfull_injections, tot_rets);)
    if(!num_successfull_injections)
        return 0;
    return 1;
}

/**
 * @brief it injects a breakpoint on exit on the return address of the caller apicall
 *
 * @param drakvuf
 * @param info
 * @param context,
 * @return int
 */
static int inject_bp_retaddr_apicall(drakvuf_t drakvuf, drakvuf_trap_info_t* info, apicall_context_t context)
{
    /**
     * NOTE: the following code would be the best way to insert the bp if we would have
     * been capable of use inject_trap_breakpoint(drakvuf_t drakvuf, drakvuf_trap_t* trap)
     * function of drakvuf.c. Indeed, using LOOKUP_DTB we can (i) obtain the pa and (ii)
     * inject the bp in one single call.
     * Unfortunately, this wasn't exported so we used the following a workaround:
     *      -> we calculate the physical addr starting from the dtb and the virtual addr
     *      by hand.
     *      -> in a second pass, we call directly inject_trap_pa(...) like if we were in
     *      the case of LOOKUP_NONE
     */
    {
        /* drakvuf_trap_t* ret_trap = (drakvuf_trap_t*)g_malloc0(sizeof(drakvuf_trap_t));
        ret_trap->type = BREAKPOINT;
        ret_trap->cb = ret_trap_apicall_cb;
        ret_trap->data = context;
        ret_trap->name = info->trap->name;
        ret_trap->breakpoint.lookup_type = LOOKUP_DTB;
        ret_trap->breakpoint.dtb = info->regs->cr3;
        ret_trap->breakpoint.addr_type = ADDR_VA;
        ret_trap->breakpoint.addr = context->ret_vaddr;
        if(!inject_trap_breakpoint(drakvuf, ret_trap))
        {
            PRINT_DEBUG("Failed to insert breakpoint on return virtual address 0x%lx for %s\n", context->ret_vaddr, info->trap->name);
            g_free(ret_trap);
            return 0;
        }
        return 1; */
    }

    addr_t ret_pa = 0;
    drakvuf_trap_t* ret_trap = (drakvuf_trap_t*)g_malloc0(sizeof(drakvuf_trap_t));

    ret_trap->type = BREAKPOINT;
    ret_trap->cb = ret_trap_apicall_cb;
    ret_trap->data = context; // now it doesn't contain anymore the persmon_config *but* apicall_context_t
    ret_trap->name = info->trap->name;
    //NOTE: LOOKUP_NONE because we translate the va into pa by hand
    ret_trap->breakpoint.lookup_type = LOOKUP_NONE; //in registration phase was LOOKUP_PID
    ret_trap->breakpoint.addr_type = ADDR_PA;
    //NOTE: we use dtb because we have already information about the process that "holds"
    // the correct info about the vaddr
    ret_trap->breakpoint.dtb = info->regs->cr3;

    // <=== CS
    vmi_instance_t vmi = drakvuf_lock_and_get_vmi(drakvuf);
    if ( VMI_FAILURE == vmi_pagetable_lookup(vmi, info->regs->cr3, context->ret_vaddr, &ret_pa) )
    {
        VD(printf("[DEBUG-ERROR] Failed to find PA for breakpoint VA ([rsp]) addr 0x%lx in DTB 0x%lx\n", ret_pa, info->regs->cr3);)
        drakvuf_release_vmi(drakvuf);
        g_free(ret_trap);
        return 0;
    }
    // ===> CS
    drakvuf_release_vmi(drakvuf);

    ret_trap->breakpoint.addr = ret_pa;

    // VD(printf("[DEBUG] translation ret_vaddr to ret_paddr: 0x%lx -> 0x%lx\n",context->ret_vaddr,ret_trap->breakpoint.addr);)

    if (!drakvuf_add_trap(drakvuf, ret_trap))
    {
        g_free(ret_trap);
        return 0;
    }
    return 1;
}

/**
 * @brief it injects a breakpoint on exit on the return address of the syscall
 *
 * @param drakvuf
 * @param info
 * @param context
 * @return int
 */
static int inject_bp_retaddr_syscall(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context)
{
    // syscall_t* info_syscall = (syscall_t*) context->info_syscall;

    drakvuf_trap_t* ret_trap = (drakvuf_trap_t*)g_malloc0(sizeof(drakvuf_trap_t));
    ret_trap->type = BREAKPOINT;
    ret_trap->data = context;
    // ret_trap->cb = info_syscall->hook_ret_cb;
    ret_trap->cb = ret_trap_syscall_cb;
    ret_trap->breakpoint.lookup_type = LOOKUP_PID; //different from api bp 2 injection
    ret_trap->breakpoint.pid = info->trap->breakpoint.pid;
    ret_trap->breakpoint.addr_type = ADDR_VA;
    ret_trap->breakpoint.addr = context->ret_vaddr;
    ret_trap->breakpoint.module = info->trap->breakpoint.module;
    ret_trap->name = info->trap->name;

    if (!drakvuf_add_trap(drakvuf, &*ret_trap))
    {
        g_free(ret_trap);
        return 0;
    }
    return 1;
}

/**
 * @brief it creates an apicall context for sharing on entry information to on exit callback
 *
 * @param drakvuf
 * @param info
 * @param info_apicall, apicall_t of the current API call that triggers the callback
 * @return apicall_context_t, context to pass from oep_callback to ret_callback
 */
static apicall_context_t create_apicall_context(drakvuf_t drakvuf, drakvuf_trap_info_t* info, apicall_t* info_apicall)
{
    addr_t arg_vaddr = 0;
    addr_t ret_vaddr = 0;
    apicall_context_t context;

    //dereferencing [rsp]
    if(VMI_FAILURE == read_vaddr_32(drakvuf, info, info->regs->rsp, &ret_vaddr))
    {
        VD(printf("[DEBUG-ERROR] Failed to read return address from [rsp] for %s\n", info->trap->name);)
        return NULL;
    }

    context = (apicall_context_t)g_malloc0(sizeof(apicall_context));
    context->ret_vaddr = ret_vaddr;
    context->info_apicall = info_apicall;
    //retrieving virtual addresses of args from stack pointer
    //if(!ret_instrumentation_enabled)
    //{
    for(uint8_t j=0; j<info_apicall->nargs; j++)
    {
        //[rsp+n], the responsability of managing type/retvalues is given to the specific ret_callback
        arg_vaddr = drakvuf_get_function_argument(drakvuf, info, j+1);
        context->monitored_args[j] = arg_vaddr;
    }
    //}

    //NOTE: following information is needed to check if we're querying the correct ret_callback, in the correct place
    context->target_thread = drakvuf_get_current_thread(drakvuf, info->vcpu);
    context->target_pid = info->proc_data.pid;
    context->target_cr3 = info->regs->cr3;

    return context;
}

/**
 * @brief it creates a syscall context for sharing on entry information to on exit callback
 *
 * @param drakvuf
 * @param info
 * @param info_syscall
 * @return syscall_context_t
 */
static syscall_context_t create_syscall_context(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_t* info_syscall)
{
    addr_t ret_vaddr = 0;
    addr_t arg_vaddr = 0;
    syscall_context_t context;

    //dereferencing [rsp]
    if(VMI_FAILURE == read_vaddr_32(drakvuf, info, info->regs->rsp, &ret_vaddr))
    {
        VD(printf("[DEBUG-ERROR] Failed to read return address from [rsp] for %s\n", info->trap->name);)
        return NULL;
    }

    context = (syscall_context_t)g_malloc0(sizeof(syscall_context));
    context->ret_vaddr = ret_vaddr;
    context->info_syscall = info_syscall;
    //retrieving virtual addresses of args from stack pointer
    for(uint8_t j=0; j<info_syscall->nargs; j++)
    {
        //[rsp+n], the responsability of managing type/retvalues is given to the specific ret_callback
        arg_vaddr = drakvuf_get_function_argument(drakvuf, info, j+1);
        context->monitored_args[j] = arg_vaddr;
    }
    //NOTE: following information is needed to check if we're querying the correct ret_callback, in the correct place
    context->target_cr3 = info->regs->cr3;
    context->target_thread = drakvuf_get_current_thread(drakvuf, info->vcpu);
    context->target_rsp = info->regs->rsp;

    return context;
}

/**
 * @brief it checks on exit whether the caller apicall that raises the breakpoint 
 * is the one that we were looking for or someone else just hit it before the target
 * 
 * @param drakvuf
 * @param info
 * @param context
 * @return int
 */
static int verify_apicall(drakvuf_t drakvuf, drakvuf_trap_info_t* info, apicall_context_t context)
{
    addr_t thread = drakvuf_get_current_thread(drakvuf, info->vcpu);
    if(info->regs->cr3 != context->target_cr3 || !thread ||
        thread != context->target_thread || info->proc_data.pid != context->target_pid)
    {
        #if V_DEBUG
            printf("[DEBUG] verification failed for %s ->\n\tcurrent/target cr3: 0x%lx, 0x%lx\n\tcurrent/target thread: %lu, %lu\n\tcurrent/target pid: %d, %d\n",
                info->trap->name, info->regs->cr3, context->target_cr3, thread, context->target_thread, info->proc_data.pid, context->target_pid);
        #endif
        return 0;
    } else
    {
        VD(printf("[DEBUG] verification passed for %s\n", info->trap->name);)
        return 1;
    }
    return 0;
}

/**
 * @brief it checks on exit whether the caller syscall that raises the breakpoint 
 * is the one that we were looking for or someone else just hit it before the target
 *
 * @param drakvuf
 * @param info
 * @param context
 * @return int
 */
static int verify_syscall(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context)
{
    bool light_verification = false;
    // NOTE: NtTerminateThread needs a *light verification* scheme
    if(!strcmp("NtTerminateThread", info->trap->name))
        light_verification = true;

    addr_t thread = drakvuf_get_current_thread(drakvuf, info->vcpu);
    if(!light_verification)
    {
        if(info->regs->cr3 != context->target_cr3 || !thread ||
        thread != context->target_thread || info->regs->rsp <= context->target_rsp)
        {
            #if V_DEBUG
                printf("[DEBUG] verification failed for %s ->\n\tcurrent/target cr3: 0x%lx, 0x%lx\n\tcurrent/target thread: %lu, %lu\n\tcurrent/target rsp: 0x%lx, 0x%lx (<=?)\n",
                    info->trap->name, info->regs->cr3, context->target_cr3, thread, context->target_thread, info->regs->rsp, context->target_rsp);
            #endif
            return 0;
        } else
        {
            VD(printf("[DEBUG] verification passed for %s\n", info->trap->name);)
            return 1;
        }
    } else
    {
        if(info->regs->cr3 != context->target_cr3 || !thread ||
        thread != context->target_thread)
        {
            #if V_DEBUG
            printf("[DEBUG] *light* verification failed for %s ->\n\tcurrent/target cr3: 0x%lx, 0x%lx\n\tcurrent/target thread: %lu, %lu\n",
                    info->trap->name, info->regs->cr3, context->target_cr3, thread, context->target_thread);
            #endif
            return 0;
        } else
        {
            VD(printf("[DEBUG] *light* verification passed for %s\n", info->trap->name);)
            return 1;
        }
    }
}

//  +-----------------------------------------+
//  |     List of callbacks for syscalls      |
//  +-----------------------------------------+

/**
 * @brief necessary for target process monitoring. It determines which is the new TID created by
 * a target process, either (i) local or (ii) remote, and stores it in the monitored pool
 *
 * @param drakvuf
 * @param info
 * @param context
 */
void proc_NtCreateThreadEx(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context)
{
    if(!info->regs->rax)
    {
        PD(printf("[PERSMON NtCreateThreadEx ret_callback] Additional procedure\n");)
        //reading PHANDLE ThreadHandle
        addr_t new_thread_handle = 0;
        if(VMI_FAILURE == read_vaddr_32(drakvuf, info, context->monitored_args[0], &new_thread_handle))
        {
            VD(printf("[DEBUG-ERROR] Failed to read PHANDLE in %s\n", info->trap->name);)
            g_free(context);
            return;
        }

        //reading HANDLE ThreadHandle
        addr_t ethread_base_tp = get_eprocess_by_handle(drakvuf, info, new_thread_handle);
        vmi_pid_t tp_new_tid = get_ethread_id(drakvuf, ethread_base_tp);
        vmi_pid_t tp_pid = get_ethread_pid(drakvuf, ethread_base_tp);
        addr_t eprocess_base_tp;
        drakvuf_find_process(drakvuf, tp_pid, nullptr, &eprocess_base_tp);
        char* tp_name = drakvuf_get_process_name(drakvuf, eprocess_base_tp, 0);
        if(!tp_name)
        {
            VD(printf("[DEBUG-ERROR] Failed to read name of the target process in %s\n", info->trap->name);)
            g_free(context);
            return;
        }
        PD(printf("\t> target info:\tname: %s, PID: %d, new TID: %d\n\t> Type creation:\t", tp_name, tp_pid, tp_new_tid);)

        if(context->monitored_args[3] == 0xFFFFFFFF)
        {
            PD(printf("inside caller\n");)
            //if target process monitoring is enabled, then update caller thread pool with the new tid
            if(!target_processes.empty())
                add_tid_target_process(drakvuf, info, tp_new_tid, tp_pid, tp_name);
        } else {
            PD(printf("inside remote\n");)
            //if target process monitoring is enabled, then either (i) add a new infected target process
            //with the injected TID or (ii) update already present infected target process with the new TID
            if(!target_processes.empty())
                add_tid_target_process(drakvuf, info, tp_new_tid, tp_pid, tp_name, 1);
        }
    }
}

// TODO: this can be removed since it just prints something for countercheck
void proc_NtResumeThread(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context)
{
    #if P_DEBUG
        if(!info->regs->rax)
        {
            printf("[PERSMON NtResumeThread ret_callback] Additional procedure\n");
            addr_t ethread_base = get_eprocess_by_handle(drakvuf, info, context->monitored_args[0]);
            addr_t resumed_tid = get_ethread_id(drakvuf, ethread_base);
            vmi_pid_t pid = get_ethread_pid(drakvuf, ethread_base);
            printf("\t> resumed TID %lu of PID %d\n", resumed_tid, pid);
        }
    #endif
}

/**
 * @brief necessary for target process monitoring. It determines which is the TID that exits and updates
 * the pool of target processes to monitor
 *
 * @param drakvuf
 * @param info
 * @param context
 */
void proc_NtTerminateThread(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context)
{
    if(!info->regs->rax)
    {
        PD(printf("[PERSMON NtTerminateThread ret_callback] Additional procedure\n");)
        vmi_pid_t tp_pid;
        vmi_pid_t tp_tid;
        uint32_t tid = 0;
        drakvuf_get_current_thread_id(drakvuf, info->vcpu, &tid);

        if(context->monitored_args[0] != 0x0)
        {
            //reading THANDLE
            addr_t ethread_base_tp = get_eprocess_by_handle(drakvuf, info, context->monitored_args[0]);
            tp_tid = get_ethread_id(drakvuf, ethread_base_tp);
            tp_pid = get_ethread_pid(drakvuf, ethread_base_tp);
            PD(printf("\t> remote TID %d of PID %d has been terminated\n", tp_tid, tp_pid);)
        } else
        {
            PD(printf("\t> caller TID (%d) exited\n", tid);)
            tp_tid = tid;
            tp_pid = info->proc_data.pid;
        }
        if(!target_processes.empty())
            delete_tid_in_target_process(drakvuf, info, tp_tid, tp_pid);

        // updating tlsinfo hashtable
        remove_tlsinfo(tp_tid);
    }
}

/**
 * @brief syscall callback on exit. It also acts as a dispatcher for specific procedures
 * for a particular syscall, if any
 * 
 * @param drakvuf 
 * @param info 
 * @return event_response_t 
 */
static event_response_t ret_trap_syscall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info)
{
    syscall_context_t context = (syscall_context_t) info->trap->data;

    if(!verify_syscall(drakvuf, info, context))
        return VMI_EVENT_RESPONSE_NONE;

    drakvuf_remove_trap(drakvuf, info->trap, NULL);

    syscall_t* info_syscall = (syscall_t*) context->info_syscall;
    uint32_t tid = 0;
    drakvuf_get_current_thread_id(drakvuf, info->vcpu, &tid);

    printf("[PERSMON %s ret_callback] PID: %d, TID: %u, TIME:" FORMAT_TIMEVAL " VCPU:%" PRIu32 " CR3:0x%" PRIx64 ",\"%s\":%s\n",
            info->trap->name, info->proc_data.pid, tid, UNPACK_TIMEVAL(info->timestamp), info->vcpu, info->regs->cr3,
            info->proc_data.name, info->trap->name);

    print_arguments(drakvuf, info, (void*)context, false, true);

    // calling a specific extra procedure, if any
    if(info_syscall->specific_ret_proc)
        info_syscall->specific_ret_proc(drakvuf, info, context);

    VD(print_regs(drakvuf, info);)

    g_free(context);

    return VMI_EVENT_RESPONSE_NONE;
}


/**
 * @brief syscall callback on entry
 *
 * @param drakvuf
 * @param info
 * @return event_response_t
 */
static event_response_t trap_syscall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info)
{
    if(!target_processes.empty() && !is_target_process(drakvuf, info))
        return VMI_EVENT_RESPONSE_NONE;

    syscall_t* retrieved_syscall = (syscall_t*) g_hash_table_lookup(syscall_lookup, info->trap->name);
    if(!retrieved_syscall)
    {
        VD(printf("[DEBUG-ERROR] Unable to retrieve %s syscall information from hashtable\n", info->trap->name);)
        return VMI_EVENT_RESPONSE_NONE;
    }

    syscall_context_t context = create_syscall_context(drakvuf, info, retrieved_syscall);
    if(!context)
    {
        VD(printf("[DEBUG-ERROR] Unable to create context for %s syscall\n", info->trap->name);)
        return VMI_EVENT_RESPONSE_NONE;
    }

    uint32_t tid = 0;
    drakvuf_get_current_thread_id(drakvuf, info->vcpu, &tid);

    // NOTE: DRAKVUF original code discerns how print the args (DEFAULT, CSVA, and so on) but we're not interested
    printf("[PERSMON %s oep_callback] PID: %d, TID: %u, TIME:" FORMAT_TIMEVAL " VCPU:%" PRIu32 " CR3:0x%" PRIx64 ",\"%s\":%s\n",
            info->trap->name, info->proc_data.pid, tid, UNPACK_TIMEVAL(info->timestamp), info->vcpu, info->regs->cr3,
            info->proc_data.name, info->trap->name);


    print_arguments(drakvuf, info, (void*)context, false, false);

    // injecting breakpoint on exit on return address
    if(!inject_bp_retaddr_syscall(drakvuf, info, context))
    {
        g_free(context);
        VD(printf("[DEBUG-ERROR] Unable to set breakpoint on return address for %s\n", info->trap->name);)
    }

    TD(print_status_target_processes();)

    VD(print_regs(drakvuf, info);)

    return VMI_EVENT_RESPONSE_NONE;
}

//  +-----------------------------------------+
//  |     List of callbacks for apicalls      |
//  +-----------------------------------------+

/**
 * TODO: can be removed since it doesn't add extra information. For now, it's used for counter-check
 */
static void proc_CreateRemoteThreadEx(drakvuf_t drakvuf, drakvuf_trap_info_t* info, apicall_context_t context)
{
    if(info->regs->rax)
    {
        PD(printf("[PERSMON CreateRemoteThreadEx ret_callback] Additional procedure\n");)
        //reading new thread ID
        addr_t new_tid = 0;
        read_vaddr_32(drakvuf, info, context->monitored_args[7], &new_tid);
        printf("\t> Type creation:\t");
        if(context->monitored_args[0] != 0xFFFFFFFF)
        {
            printf("inside remote\n");
            //retrieving name, PID of the victim
            addr_t eprocess_base_tp = get_eprocess_by_handle(drakvuf, info, context->monitored_args[0]);
            char* tp_name = drakvuf_get_process_name(drakvuf, eprocess_base_tp, 0);
            vmi_pid_t tp_pid;
            if (VMI_FAILURE == drakvuf_get_process_pid(drakvuf, eprocess_base_tp, &tp_pid))
            {
                VD(printf("[DEBUG-ERROR] Unable to retrieve PID of the victim\n");)
                return;
            }

            if(new_tid)
                printf("\t> victim info: %s, PID %d, injected TID %lu\n", tp_name, tp_pid, new_tid);
            else
            {
                printf("\t> *silent* injection detected!\n");
                //retrieving TID of the victim
                vmi_pid_t injected_tid = get_last_tid_eprocess(drakvuf, eprocess_base_tp);

                if(!injected_tid)
                {
                    VD(printf("[DEBUG-ERROR] Unable to retrieve any TID\n");)
                    return;
                }
                printf("\t> victim info: %s, PID %d, *silent* TID %d\n", tp_name, tp_pid, injected_tid);
            }
        } else
        {
            printf("inside caller\n");
            if(new_tid)
                printf("\t> new TID: %lu\n", new_tid);
            else
            {
                printf("\t> *silent* creation detected!\n");
                addr_t eprocess_base_cp = drakvuf_get_current_process(drakvuf, info->vcpu);
                vmi_pid_t silent_tid = get_last_tid_eprocess(drakvuf, eprocess_base_cp);

                if(!silent_tid)
                {
                    VD(printf("[DEBUG-ERROR] Unable to retrieve any TID\n");)
                    return;
                }
                printf("\t> *silent* TID: %d\n", silent_tid);
            }
        }
    }
}

/**
 * TODO: can be removed since it doesn't add extra information. For now, it's used for counter-check
 */
static void proc_TerminateThread(drakvuf_t drakvuf, drakvuf_trap_info_t* info, apicall_context_t context)
{
    if(info->regs->rax)
    {
        PD(printf("[PERSMON TerminateThread ret_callback] Additional procedure\n");)
        addr_t ethread_base_tp = get_eprocess_by_handle(drakvuf, info, context->monitored_args[0]);
        vmi_pid_t tp_pid = get_ethread_pid(drakvuf, ethread_base_tp);
        if(!tp_pid)
        {
            VD(printf("[DEBUG-ERROR] Unable to retrieve PID of the victim\n");)
            return;
        }
        vmi_pid_t tp_tid = get_ethread_id(drakvuf, ethread_base_tp);
        if(!tp_tid)
        {
            VD(printf("[DEBUG-ERROR] Unable to retrieve TID of the victim\n");)
            return;
        }
        printf("\t> TID %d of PID %d exited\n", tp_tid, tp_pid);
    }
}

/**
 * @brief apicall callback on exit
 *
 * @param drakvuf
 * @param info
 * @return event_response_t
 */
static event_response_t ret_trap_apicall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info)
{
    apicall_context_t context = (apicall_context_t) info->trap->data;
    uint32_t tid = 0;
    drakvuf_get_current_thread_id(drakvuf, info->vcpu, &tid);

    if(!verify_apicall(drakvuf, info, context))
        return VMI_EVENT_RESPONSE_NONE;

    //remove trap (in [rsp] procedure) or traps (in ret instrumentation)
    if(ret_instrumentation_enabled)
    {
        uint8_t num_removed_traps = 0;
        for (drakvuf_trap_t* t : context->ret_traps)
        {
            drakvuf_remove_trap(drakvuf, t, NULL);
            num_removed_traps++;
        }
        PD(printf("<RETMON>\t> Removed %hhd traps\n", num_removed_traps);)
    } else
        drakvuf_remove_trap(drakvuf, info->trap, NULL);

    CD(print_status_callstack(tid);)

    tlsinfo_t* tls = (tlsinfo_t*) g_hash_table_lookup(tlsinfo_lookup, &tid);
    if(!tls)
    {
        CD(printf("<CALLSTACK RET> Something went wrong! missing tls associated to %d on ret\n", tid);)
        return VMI_EVENT_RESPONSE_NONE;
    }
    // updating callstack
    callstack &cstack = tls->cstack;
    update_stack_on_exit(drakvuf, info, cstack);

    apicall_t* info_apicall = (apicall_t*)context->info_apicall;

    printf("[PERSMON %s ret_callback] PID: %d, TID: %u, TIME:" FORMAT_TIMEVAL " VCPU:%" PRIu32 " CR3:0x%" PRIx64 ",\"%s\":%s\n",
                    info->trap->name, info->proc_data.pid, tid, UNPACK_TIMEVAL(info->timestamp), info->vcpu, info->regs->cr3,
                    info->proc_data.name, info->trap->name);

    print_arguments(drakvuf, info, (void*)context, true, true);

    //TODO: they can be removed (they are used as countercheck)
    #if P_DEBUG
        const char* name = info_apicall->name;
        if(!strcmp(name, "CreateRemoteThreadEx"))
            proc_CreateRemoteThreadEx(drakvuf, info, context);
        else if(!strcmp(name, "TerminateThread"))
            proc_TerminateThread(drakvuf, info, context);
    #endif

    VD(print_regs(drakvuf, info);)

    g_free(context);

    return VMI_EVENT_RESPONSE_NONE;
}

/**
 * @brief apicall callback on entry
 *
 * @param drakvuf
 * @param info
 * @return event_response_t
 */
static event_response_t trap_apicall_cb(drakvuf_t drakvuf, drakvuf_trap_info_t* info)
{
    // if target monitoring is enabled, the hook is followed iff the caller is allowed
    // (is main or infected target process)
    if(!target_processes.empty() && !is_target_process(drakvuf, info))
        return VMI_EVENT_RESPONSE_NONE;

    uint32_t tid = 0;
    drakvuf_get_current_thread_id(drakvuf, info->vcpu, &tid);

    addr_t dereferenced_rsp = 0;
    if(VMI_FAILURE == read_vaddr_32(drakvuf, info, info->regs->rsp, &dereferenced_rsp))
    {
        PD(printf("[DEBUG] Unable to read [rsp]\n");)
    }

    //if we've a call such that its return address falls in some loaded dlls, avoid that
    node_t* node = bintree_search(intervalTree, dereferenced_rsp);
	if(node){
        #if B_DEBUG
            printf("________________<BINTREE> STATUS________________\n");
            print_bintree_status(intervalTree, 0);
            printf("______________________________________________\n");
            printf("<BINTREE> Ignoring call to %s at rip 0x%lx with [rsp] 0x%lx (module is %s)\n", info->trap->name, info->regs->rip, dereferenced_rsp, node->dll_name);
        #endif
        return VMI_EVENT_RESPONSE_NONE;
    }

    CD(print_status_callstack(tid);)

    //if we're in an internal call, prune it (i.e. FlsGetValue@kernel32.dll calls FlsGetValue@kernelbase.dll then skip 2nd on entry hit)
    tlsinfo_t* tls = (tlsinfo_t*) g_hash_table_lookup(tlsinfo_lookup, &tid);
    if(tls)
    {
        callstack &cstack = tls->cstack;
        if(!cstack.empty() && dereferenced_rsp)
        {
            callinfo_t &top = cstack.back();
            if(top.dereferenced_rsp == dereferenced_rsp && top.rsp == info->regs->rsp)
            {
                CD(printf("<CALLSTACK OEP> Discarding internal call to %s at 0x%lx\n", info->trap->name, info->regs->rip);)
                return VMI_EVENT_RESPONSE_NONE;
            }
            CD(printf("<CALLSTACK OEP> We're not in inner calls (top.*rsp: 0x%lx, *rsp: 0x%lx, top.rsp: 0x%lx, rsp: 0x%lx)\n", top.dereferenced_rsp, dereferenced_rsp, top.rsp, info->regs->rsp);)
        }
    } else
    {
        uint32_t *key = g_new0(guint, 1);
        *key = tid;
        tls = (tlsinfo_t*)g_malloc0(sizeof(tlsinfo_t));
        tls->tid = tid;
        g_hash_table_insert(tlsinfo_lookup, key, (void*) tls);
        #if C_DEBUG
            uint32_t size = g_hash_table_size(tlsinfo_lookup);
            printf("<CALLSTACK OEP> Created a new callstack associated to TID %d (new size: %d)\n", tid, size);
        #endif
    }

    if(!info->trap->breakpoint.module)
    {
        //NOTE: change to VD as soon as we see that the mechanism is solid enough
        printf("[DEBUG-ERROR] Unable to retrieve name dll from info->trap->breakpoint.module. Leaving oep_callback\n");
        return VMI_EVENT_RESPONSE_NONE;
    }
    GHashTable* apicalls_lookup = (GHashTable*) g_hash_table_lookup (dlls_to_apicalls_lookup, info->trap->breakpoint.module);

    apicall_t* retrieved_apicall = (apicall_t*) g_hash_table_lookup (apicalls_lookup, info->trap->name);
    if(!retrieved_apicall)
    {
        VD(printf("[DEBUG-ERROR] Unable to retrieve %s apicall information from hashtable\n", info->trap->name);)
        return VMI_EVENT_RESPONSE_NONE;
    }

    apicall_context_t context = create_apicall_context(drakvuf, info, retrieved_apicall);
    if(!context)
    {
        VD(printf("[DEBUG-ERROR] Unable to create context for %s apicall\n", info->trap->name);)
        return VMI_EVENT_RESPONSE_NONE;
    }

    // NOTE: DRAKVUF original code discerns how print the args (DEFAULT, CSVA, and so on) but we're not interested
    printf("[PERSMON %s oep_callback] PID: %d, TID: %u, TIME:" FORMAT_TIMEVAL " VCPU:%" PRIu32 " CR3:0x%" PRIx64 ",\"%s\":%s @ %s\n",
                info->trap->name, info->proc_data.pid, tid, UNPACK_TIMEVAL(info->timestamp), info->vcpu, info->regs->cr3,
                info->proc_data.name, info->trap->name, info->trap->breakpoint.module);

    print_arguments(drakvuf, info, (void*)context, true, false);

    // if ret instrumentation is enabled, breakpoint 2 is put in the ret
    if(ret_instrumentation_enabled)
    {
        if(!inject_bp_ret_instruction_apicall(drakvuf, info, context))
        {
            g_free(context);
            PD(printf("[DEBUG-ERROR] <RETMON> Unable to set breakpoint on ret instruction for %s\n", info->trap->name);)
            return VMI_EVENT_RESPONSE_NONE;
        }
    }
    else // otherwise, breakpoint 2 is put on [rsp], return address
    {
        if (!inject_bp_retaddr_apicall(drakvuf, info, context))
        {
            g_free(context);
            PD(printf("[DEBUG-ERROR] Unable to set breakpoint on return address for %s\n", info->trap->name);)
            return VMI_EVENT_RESPONSE_NONE;
        }
    }

    // updating callstack if at least one bp was successfully injected
    callinfo_t cinfo = { dereferenced_rsp, info->regs->rsp, (void*)&*retrieved_apicall };
    callstack &cstack = tls->cstack;
    update_stack_on_entry(cstack, cinfo);

    TD(print_status_target_processes();)

    VD(print_regs(drakvuf,info);)

    return VMI_EVENT_RESPONSE_NONE;
}

//  +----------------------------------+
//  |    PersMon startup management    |
//  +----------------------------------+

/**
 * @brief it calculates base address and max address of the target DLL using a support process.
 * This one must have loaded the target DLL, otherwise it fails
 *
 * @param drakvuf
 * @param support_process_name
 * @param target_dll
 * @return true
 * @return false
 */
static bool insert_ranges_dll(drakvuf_t drakvuf, const char* support_process_name, dll_t* target_dll)
{
    const char* target_dll_name = target_dll->name;

    // retrieving base address DLL
    addr_t eprocess_base;
    if(!drakvuf_find_process(drakvuf, ~0, support_process_name, &eprocess_base))
        return 0;

    vmi_pid_t target_pid;
    if (VMI_FAILURE == drakvuf_get_process_pid(drakvuf, eprocess_base, &target_pid))
        return 0;

    addr_t module_list_head;
    if(!drakvuf_get_module_list(drakvuf, eprocess_base, &module_list_head))
        return 0;

    access_context_t ctx = {
            .translate_mechanism = VMI_TM_PROCESS_PID,
            .pid = target_pid
    };

    addr_t dll_base_address = 0;
    if(!drakvuf_get_module_base_addr_ctx(drakvuf, module_list_head, &ctx, target_dll_name, &dll_base_address))
            return 0;

    target_dll->base_address = dll_base_address;

    // retrieving max address DLL
    // <=== CS
    vmi_instance_t vmi = drakvuf_lock_and_get_vmi(drakvuf);
    uint32_t e_ilfanew_val = 0;
    // + 0x3c http://terminus.rewolf.pl/terminus/structures/ntdll/_IMAGE_DOS_HEADER_x86.html
    ctx.addr = dll_base_address + offsets[IMAGE_DOS_HEADER_E_ILFANEW];
    if(VMI_FAILURE == vmi_read_32(vmi, &ctx, &e_ilfanew_val))
    {
        VD(printf("[DEBUG-ERROR] Failed reading e_ilfanew value\n");)
        drakvuf_release_vmi(drakvuf);
        return 0;
    }
    // base + e_ilf_anew to obtain PE_IMAGE_NT_HEADER base address
    addr_t pe_header_base_address = dll_base_address + e_ilfanew_val;
    // + 0x18 http://terminus.rewolf.pl/terminus/structures/ntdll/_IMAGE_NT_HEADERS_x86.html
    addr_t optional_header_base_address = pe_header_base_address + offsets[IMAGE_NT_HEADERS_OPTIONAL_HEADER];
    // + 0x38 http://terminus.rewolf.pl/terminus/structures/ntdll/_IMAGE_OPTIONAL_HEADER_x86.html
    addr_t size_image_address = optional_header_base_address + offsets[IMAGE_OPTIONAL_HEADER_SIZE_IMAGE];

    uint32_t size_image = 0;
    ctx.addr = size_image_address;
    if(VMI_FAILURE == vmi_read_32(vmi, &ctx, &size_image))
    {
        VD(printf("[DEBUG-ERROR] Failed reading size_image value\n");)
        drakvuf_release_vmi(drakvuf);
        return 0;
    }
    target_dll->max_address = dll_base_address + size_image - 1; //align to xxxxffff

    // ===> CS
    drakvuf_release_vmi(drakvuf);
    return 1;
}

/**
 * @brief it retrieves some offsets of Windows data structure, from Rekall profile. These are necessary
 * for inner procedures like (i) target process monitoring (in particular for retrieving TID from HANDLE) and
 * (ii) bintree (in particular for retrieving max address of loaded DLLs)
 *
 * @param drakvuf
 * @return true
 * @return false
 */
static bool insert_win_offsets(drakvuf_t drakvuf)
{
    if (!drakvuf_get_struct_member_rva(drakvuf, "_OBJECT_HEADER", "Body", &offsets[OBJECT_HEADER_BODY]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_EPROCESS", "ThreadListHead", &offsets[EPROCESS_THREAD_LIST_HEAD]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_ETHREAD", "ThreadListEntry", &offsets[ETHREAD_THREAD_LIST_ENTRY]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_ETHREAD", "Cid", &offsets[ETHREAD_CID]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_EPROCESS", "ThreadListHead", &offsets[EPROCESS_THREAD_LIST_HEAD]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_IMAGE_DOS_HEADER", "e_lfanew", &offsets[IMAGE_DOS_HEADER_E_ILFANEW]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_IMAGE_NT_HEADERS", "OptionalHeader", &offsets[IMAGE_NT_HEADERS_OPTIONAL_HEADER]))
        return 0;
    if (!drakvuf_get_struct_member_rva(drakvuf, "_IMAGE_OPTIONAL_HEADER", "SizeOfImage", &offsets[IMAGE_OPTIONAL_HEADER_SIZE_IMAGE]))
        return 0;
    return 1;
}

persmon::persmon(drakvuf_t drakvuf, const persmon_config* c, output_format_t output)
    : pluginex(drakvuf, output)
{

    PD(printf("[PERSMON PHASE 0] Init base information (json profiles, Windows offsets)\n");)
    // kernel32.dll
    if (!c->kernel32_profile)
    {
        VD(printf("[DEBUG-ERROR] persmon plugin requires the Rekall profile for kernel32.dll!\n");)
        return;
    }

    json_object* kernel32_profile = json_object_from_file(c->kernel32_profile);
    if (!kernel32_profile)
    {
        VD(printf("[DEBUG-ERROR] persmon plugin fails to load Rekall profile for kernel32.dll\n");)
        throw -1;
    }

    // kernelbase.dll
    if (!c->kernelbase_profile)
    {
        VD(printf("[DEBUG-ERROR] persmon plugin requires the Rekall profile for kernelbase.dll!\n");)
        return;
    }

    json_object* kernelbase_profile = json_object_from_file(c->kernelbase_profile);
    if (!kernelbase_profile)
    {
        VD(printf("[DEBUG-ERROR] persmon plugin fails to load Rekall profile for kernelbase.dll\n");)
        throw -1;
    }

    // iphlpapi.dll
    if (!c->iphlpapi_profile)
    {
        VD(printf("[DEBUG-ERROR] persmon plugin requires the Rekall profile for iphlpapi.dll\n");)
        return;
    }

    json_object* iphlpapi_profile = json_object_from_file(c->iphlpapi_profile);
    if (!iphlpapi_profile)
    {
        VD(printf("[DEBUG-ERROR] persmon plugin fails to load Rekall profile for iphalpapi.dll\n");)
        throw -1;
    }

    if(c->verbose_logging)
        verbose_logging = true;

    //retrieving some Windows internal structures offsets
    if(!insert_win_offsets(drakvuf))
        throw -1;

    if(c->ret_instrumentation)
    {
        PD(printf("[PERSMON] (OPTIONAL) ret instrumentation enabled! <RETMON>\n");)
        ret_instrumentation_enabled = 1;
    }

    if (c->target_process)
    {
        PD(printf("[PERSMON] (OPTIONAL) target process monitoring enabled on %s! <TMON>\n", c->target_process);)
        target_process_t tp = (target_process_t)g_malloc0(sizeof(target_process));
        tp->name = c->target_process; //"<name>.exe", truncated for LibVMI
        tp->is_main_target = 1;
        target_processes.push_back(tp);
    }

    //registering a global hashtable for callstack
    tlsinfo_lookup = g_hash_table_new_full (g_int_hash, g_int_equal, g_free, NULL);

    PD(printf("[PERSMON PHASE 1] Registering APICALL hooks (support process %s)\n", c->support_process != NULL ? c->support_process : SUPPORT_PROCESS);)
    {
        //registering a static global hashtable to avoid O(n) in callback lookup
        dlls_to_apicalls_lookup = g_hash_table_new_full(g_str_hash, g_str_equal, free, NULL);

        int succeeded_hooks = 0;
        int tot_apicalls = 0;
        for(int dll_id = 0; dll_id < __DLL_MAX; dll_id++)
        {
            json_object* target_dll_profile;
            dll_t* current_dll = &dlls[dll_id];
            const char* dll_name = current_dll->name;

            // updating DLLs info with base and max address
            if( (c->support_process && !insert_ranges_dll(drakvuf, c->support_process, &*current_dll)) ||
                !insert_ranges_dll(drakvuf, SUPPORT_PROCESS, &*current_dll))
            {
                VD(printf("[DEBUG-ERROR] Unable to calculate addresses of %s from %s\n", dll_name, SUPPORT_PROCESS);)
                //NOTE: throw required for inner mechanisms (i.e. miscalculation ret addresses)
                throw -1;
            }
            PD(printf("[PERSMON] %s base address: 0x%lx, max address: 0x%lx\n", dll_name, current_dll->base_address, current_dll->max_address);)
            add_interval_tree(current_dll->base_address, current_dll->max_address, dll_name);

            switch (dll_id)
            {
                case KERNEL32:
                    target_dll_profile = kernel32_profile;
                    break;
                case KERNELBASE:
                    target_dll_profile = kernelbase_profile;
                    break;
                case IPHLPAPI:
                    target_dll_profile = iphlpapi_profile;
                    break;
                default:
                    VD(printf("[DEBUG-ERROR] Missing Rekall profile for %s\n", dll_name);)
                    continue;
            }

            //checking if we have .cpp file with API proto for that DLL
            if(!current_dll->apicalls)
            {
                VD(printf("[DEBUG-ERROR] Missing API prototypes for %s\n", dll_name);)
                throw -1;
            }

            //creating apicalls hashtable for current DLL
            GHashTable* apicalls_lookup = g_hash_table_new_full(g_str_hash, g_str_equal, free, NULL);

            tot_apicalls = current_dll->apicalls_size;
            succeeded_hooks = tot_apicalls;
            PD(printf("Registering %d APICALL hooks for %s\n", tot_apicalls, dll_name);)
            for(int j = 0; j < tot_apicalls; j++)
            {
                apicall_t* current_apicall = &current_dll->apicalls[j];
                PRINT_DEBUG("persmon attempt to setup a trap for \"%s\" of %s\n", current_apicall->name, dll_name);
                {
                    breakpoint_in_dll_module_searcher bp(target_dll_profile, dll_name);
                    if (!register_trap(drakvuf, nullptr, this, trap_apicall_cb, bp.for_syscall_name(current_apicall->name)))
                    {
                        PD(printf("Failed to trap %s on %s\n", current_apicall->name, dll_name);)
                        succeeded_hooks--;
                        continue;
                    }
                }
                g_hash_table_insert(apicalls_lookup, (void*)current_apicall->name, current_apicall);
            }
            PD(printf("\t> Hooked (%d/%d) APICALL of %s\n", succeeded_hooks, tot_apicalls, dll_name);)
            g_hash_table_insert(dlls_to_apicalls_lookup, (void*)current_dll->name, apicalls_lookup);
        }
    }

    BD(print_bintree_status(intervalTree, 0);)

    // NOTE: since 403 syscalls are too many, we can using just the needed ones for dry runs
    #if S_DEBUG
        printf("[DEBUG] Enabled dry run for syscall hooking\n");
        const char* focused_syscalls[] = {"NtTerminateThread", "NtResumeThread", "NtCreateThreadEx", "NtProtectVirtualMemory", "NtMapViewOfSection"};
        int size_focused_syscalls = (sizeof(focused_syscalls) / sizeof(focused_syscalls[0]));
    #endif

    PD(printf("[PERSMON PHASE 2] Registering (#%d) SYSCALL hooks\n", syscalls_size);)
    {
        syscall_lookup = g_hash_table_new_full(g_str_hash, g_str_equal, free, NULL);
        int succeeded_hooks = 0;
        for(int j=0; j < syscalls_size; j++)
        {
            syscall_t* current_syscall = &syscalls[j];
            g_hash_table_insert(syscall_lookup, (void*)current_syscall->name, current_syscall);
            PRINT_DEBUG("persmon attempt to setup a trap for \"%s\"\n", current_syscall->name);
            {
                #if S_DEBUG
                    bool skip = true;
                    for(int k=0; k<size_focused_syscalls; k++)
                    {
                        if(!strcmp(focused_syscalls[k],current_syscall->name))
                        {
                            skip = false;
                            break;
                        }
                    }
                    if(skip)
                        continue;
                    printf("[DEBUG] %s\n", current_syscall->name);
                #endif
                breakpoint_in_system_process_searcher bp;
                if (!register_trap<persmon>(drakvuf, nullptr, this, trap_syscall_cb, bp.for_syscall_name(current_syscall->name)))
                {
                    PD(printf("Failed to trap %s\n", current_syscall->name);)
                    continue;
                }
                succeeded_hooks++;
            }
        }
        PD(printf("\t> Hooked (%d/%d) syscalls\n", succeeded_hooks, syscalls_size);)
    }

    //DEBUG: check similar SetLastError (i.e. jumps from k32 in kbase but there is not proto in kbase)
    // I guess that we can disable these since are forwarded into ntdll.dll
    //For now (30/08/2019) QueryPerformanceCounter, SetLastError, QueryPerformanceFrequency
    #if V_DEBUG
    {
        printf("[DEBUG] Checking similar cases of SetLastError\n");
        for(int i=0; i < kernel32_apicalls_size; i++)
        {
            apicall_t api_k32 = kernel32_apicalls[i];
            if(api_k32.jump_in == KERNELBASE)
            {
                bool found = false;
                //searching the same api in kernelbase.cpp
                for(int j = 0; j < kernelbase_apicalls_size; j++)
                {
                    apicall_t api_kbase = kernelbase_apicalls[j];
                    if(!strcmp(api_k32.jump_in_api_name, api_kbase.name))
                    {
                        found = true;
                        break;
                    }
                }
                if(!found)
                    printf("\t%s\n", api_k32.name);
            }
        }
    }
    #endif

    json_object_put(kernel32_profile);

    json_object_put(kernelbase_profile);

    json_object_put(iphlpapi_profile);
}


