#include "persmon_util.h"

//  +----------------------------+
//  |      Generic Utilities     |
//  +----------------------------+

status_t read_vaddr_32(drakvuf_t drakvuf, drakvuf_trap_info_t* info, addr_t vaddr, addr_t* dereferenced_vaddr)
{
    uint8_t reg_size = 4;

    // ===> CS
    vmi_instance_t vmi = drakvuf_lock_and_get_vmi(drakvuf);

    access_context_t ctx;
    ctx.translate_mechanism = VMI_TM_PROCESS_DTB;
    ctx.dtb = info->regs->cr3;
    ctx.addr = vaddr;
    if(VMI_FAILURE == vmi_read(vmi, &ctx, reg_size, dereferenced_vaddr, NULL))
    {
        VD(printf("[DEBUG-ERROR] Failed read value of addr 0x%lx\n", vaddr);)
        drakvuf_release_vmi(drakvuf);
        return VMI_FAILURE;
    }

    VD(printf("[DEBUG] reading value of 0x%lx vaddr: 0x%lx\n", vaddr, *dereferenced_vaddr);)

    // <=== CS
    drakvuf_release_vmi(drakvuf);
    return VMI_SUCCESS;
}

void print_regs(drakvuf_t drakvuf, drakvuf_trap_info_t* info)
{
    printf("[DEBUG] Registers:\n\tcr3: 0x%lx,\n\trip: 0x%lx,\n\trsp: 0x%lx,\n\trax: 0x%lx\n",
            info->regs->cr3,
            info->regs->rip,
            info->regs->rsp,
            info->regs->rax);
}

//  +------------------------------------------+
//  |     Utilities for parsing parameters     |
//  +------------------------------------------+

/**
 * @brief if verbose log is enabled at startup (--verbose-log), printer facility will:
 *  - print the name of the arguments
 *  - print whether an argument is a pointer "(*)" or a double-pointer "(**)"
 *  - print the type of the arguments
 *  - print direction of the arguments
 */
bool verbose_logging;

addr_t read_pointer(drakvuf_t drakvuf, drakvuf_trap_info_t *info, addr_t addr)
{
    if(!addr)
        return addr;

    addr_t derefenced_pointer = 0;
    if(VMI_FAILURE == read_vaddr_32(drakvuf, info, addr, &derefenced_pointer))
    {
        printf("<err> ");
        return addr;
    }
    return derefenced_pointer;
}

int print_addr(addr_t addr)
{
    if(verbose_logging)
        printf("(addr) ");

    printf("0x%lx\n", addr);
    return 1;
}

int print_str_ansi(drakvuf_t drakvuf, drakvuf_trap_info_t* info, addr_t str, bool is_api)
{
    // str is POINTER | ANSI_CHAR
    char* ascii_str = drakvuf_read_ascii_str(drakvuf, info, str);
    bool endstring = false;

    if(!ascii_str)
    {
        printf("<err> 0x%lx\n", str);
        return 0;
    }

    //checking if str is too big
    for(int j=0; j <= MAX_SIZE_STRING; j++)
    {
        if(ascii_str[j] == '\0')
        {
            endstring = true;
            break;
        }
    }

    if(verbose_logging)
        printf("(ansi) ");

    if(!endstring)
        printf("<Unk: 0x%lx>\n", str);
    else
        printf("%s\n", ascii_str);


    return 1;
}

int print_str_unicode(drakvuf_t drakvuf, drakvuf_trap_info_t* info, addr_t str, bool is_api)
{
    // str is POINTER | WIDE_CHAR
    if(verbose_logging)
        printf("(unicode) ");

    if(!str)
    {
        printf("<empty>\n");
        return 1;
    }

    unicode_string_t* unicode_str = nullptr;
    // TODO: idk why version 1 works fine for apicalls but not for syscalls and viceversa for version 2. Investigate
    if(is_api)
    {
        // v1
        access_context_t ctx;
        ctx.translate_mechanism = VMI_TM_PROCESS_DTB;
        ctx.dtb = info->regs->cr3;
        ctx.addr = str;

        {
            vmi_lock_guard vmi_lg(drakvuf);
            size_t strlen = drakvuf_wchar_string_length(vmi_lg.vmi, &ctx);
            if(strlen > MAX_SIZE_STRING)
            {
                printf("<Unk: 0x%lx>\n", str);
                return 1;
            }
            unicode_str = drakvuf_read_wchar_array(vmi_lg.vmi, &ctx, strlen);
        }

        if(unicode_str)
        {
            if(!strcmp("\n",(char*) unicode_str->contents))
                printf("\\n\n");
            else
                printf("%s\n", (char*) unicode_str->contents);
        } else
        {
            printf("<err> (0x%lx)\n", str);
            vmi_free_unicode_str(unicode_str);
            return 0;
        }

        vmi_free_unicode_str(unicode_str);
    } else //v2
    {
        unicode_str = drakvuf_read_unicode(drakvuf, info, str);
        if(unicode_str)
        {
            if(unicode_str->length > MAX_SIZE_STRING)
                printf("<Unk: 0x%lx>\n", str);
            else //if(unicode_str->length > 0 &&  unicode_str->length <= MAX_SIZE_STRING)
                printf("%s\n", (char*) unicode_str->contents);

            vmi_free_unicode_str(unicode_str);
        } else
            printf("<err> 0x%lx\n", str);
    }

    return 1;
}

int print_number_ex(addr_t num, type_t current_type)
{
    switch(current_type)
    {
        case SIGNED_BYTE:
            if(verbose_logging)
                printf("(s_byte) ");
            printf("%hhd\n", (int8_t)num); //???
            break;
        case UNSIGNED_BYTE:
            if(verbose_logging)
                printf("(us_byte) ");
            printf("%u\n", (uint8_t)num);
            break;
        case SIGNED_WORD:
            if(verbose_logging)
                printf("(s_word) ");
            printf("%hd\n", (int16_t)num);
            break;
        case UNSIGNED_WORD:
            if(verbose_logging)
                printf("(us_word) ");
            printf("%hu\n", (uint16_t)num);
            break;
        case SIGNED_DOUBLE_WORD:
            if(verbose_logging)
                printf("(s_dword) ");
            printf("%d\n", (int32_t)num);
            break;
        case UNSIGNED_DOUBLE_WORD:
            if(verbose_logging)
                printf("(us_dword) ");
            // printf("%u\n", (uint32_t)num);
            printf("0x%lx\n", num); // I guess that it is more important to see this as addr (HANDLE)
            break;
        case SIGNED_QUAD_WORD:
            if(verbose_logging)
                printf("(s_qword) ");
            printf("%ld\n", (int64_t)num);
            break;
        case UNSIGNED_QUAD_WORD:
            if(verbose_logging)
                printf("(us_qword) ");
            printf("%lu\n", (uint64_t)num);
            break;
        case FLOAT:
            if(verbose_logging)
                printf("(float) ");
            printf("%g\n", (float)num);
            break;
        case DOUBLE:
            if(verbose_logging)
                printf("(double) ");
            printf("%f\n", (double)num);
            break;
        case LONG_DOUBLE:
            if(verbose_logging)
                printf("(long_double) ");
            printf("%f\n", (double)num);
            break;
        default:
            return 0;
    }
    return 1;
}

int print_ntstatus(addr_t nstatus_value)
{
    if(verbose_logging)
    {
        const char* nstatus_name = ntstatus_to_string((ntstatus_t)nstatus_value);
        if(nstatus_name)
        {
            printf("(0x%lx) %s\n", nstatus_value, nstatus_name);
            return 1;
        } else
            return print_addr(nstatus_value);
    } else
        return print_addr(nstatus_value);
}

void print_arguments(drakvuf_t drakvuf, drakvuf_trap_info_t* info, void* context, bool is_api, bool is_ret_callback)
{
    // these structures are necessaries for discerning hook type (syscall or apicall)
    typedef struct
    {
        addr_t* monitored_args;
    } transient_context_t;
    transient_context_t t_ctx;

    typedef struct
    {
        arg_t* args;
        uint16_t return_type;
        uint8_t nargs;
    } general_proto_t;
    general_proto_t proto;

    if(!is_api)
    {
        syscall_context_t ctx = (syscall_context_t) context;
        t_ctx.monitored_args = ctx->monitored_args;
        syscall_t* sys = (syscall_t*) ctx->info_syscall;
        proto = { sys->args, sys->return_type, sys->nargs };
    } else
    {
        apicall_context_t ctx = (apicall_context_t) context;
        t_ctx.monitored_args = ctx->monitored_args;
        apicall_t* api = (apicall_t*) ctx->info_apicall;
        proto = { api->args, api->return_type, api->nargs};
    }
    general_proto_t* info_proto = &proto;

    uint8_t nargs = info_proto->nargs;
    arg_dir_t current_direction;
    uint16_t current_type;
    addr_t current_value;

    if(verbose_logging)
    {
        printf("Parameters:\n");
        if(!nargs)
            printf("\t<none>\n");
    }

    //up to <= nargs because we've to consider the return value on EAX
    for(int j=0; j <= nargs; j++)
    {
        //premature exit in case we're on entry (since we don't have return value yet)
        if(j == nargs && !is_ret_callback)
            break;

        uint16_t is_pointer = 0;
        if(j != nargs)
        {
            current_type = info_proto->args[j].type;
            current_value = t_ctx.monitored_args[j];
            current_direction = info_proto->args[j].arg_dir;
        } else
        {
            if(verbose_logging)
                printf("Return value:\n");
            current_type = info_proto->return_type;
            current_value = info->regs->rax;
            current_direction = UNK;
        }

        is_pointer = current_type & CLASS_POINTER_BITMASK;
        if(verbose_logging)
        {
            printf("\t");
            if(is_pointer == POINTER)
            {
                printf("(*)");
            } else if(is_pointer == POINTER_POINTER)
                printf("(**)");
            printf("%s\t%s", (j!=nargs) ? info_proto->args[j].name : "", (j!=nargs) ? arg_dir_names[current_direction] : "");
        } else
        {
            printf("[%d] ", j == nargs ? -1 : j);
        }

        if(is_pointer)
        {
            // we don't want to dereference two times, just print it as address
            if(is_pointer == POINTER_POINTER)
            {
                print_addr(current_value);
                continue;
            }

            current_type = current_type & CLASS_TYPE_BITMASK;
            // in case of WIDE_CHAR or ANSI_CHAR we don't need to dereference the value
            if(current_type != WIDE_CHAR && current_type != ANSI_CHAR)
            {
                addr_t old_value = current_value;
                current_value = read_pointer(drakvuf, info, current_value);
                // if we're not able to dereference the value, just print it as address
                if(current_value == old_value)
                {
                    print_addr(current_value);
                    continue;
                }
            }
        }

        // calling specific parsing functions
        if(current_type >= SIGNED_BYTE && current_type <= LONG_DOUBLE)
        {
            if((!is_ret_callback && current_direction != OUT) || (is_ret_callback && current_direction != IN))
            {
                ((op2)parsing_function_table[current_type])(current_value, (type_t)current_type);
            } else
                print_addr(current_value);
        } else if (current_type == WIDE_CHAR || current_type == ANSI_CHAR)
        {
            if((!is_ret_callback && (current_direction == IN || current_direction == UNK)) ||
                (is_ret_callback && (current_direction == OUT || current_direction == UNK))) // INOUT is always printed as address since most of the time is garbage
            {
                ((op3)parsing_function_table[current_type])(drakvuf, info, current_value, is_api);
            } else
                print_addr(current_value);
        } else
        {
            ((op1)parsing_function_table[current_type])(current_value);
        }
    }
}

//  +-----------------------------------------------+
//  |    Utilities for target process monitoring    |
//  +-----------------------------------------------+

/**
 * @brief list of processes (main and infected) to be focused in the monitoring phase.
 * Main target process is always present (at most is cleaned); infected ones are removed
 * if they exit
 */
std::vector<target_process_t> target_processes;

void print_status_target_processes()
{
    int counter = 0;
    printf("\t______________<RETMON> STATUS_______________\n");
    printf("Size: %zu\n", target_processes.size());
    for(target_process_t tp : target_processes)
    {
        printf("[Pos: %d (main: %d)] %s, PID: %d\n\tTIDs: [", counter, tp->is_main_target, tp->name, tp->pid);
        for(vmi_pid_t tid : tp->tids)
        {
            printf("%d ", tid);
        }
        printf("]\n");

        printf("\tterminated TIDs: [");
        for(vmi_pid_t terminated_tid : tp->terminated_tids)
        {
            printf("%d ", terminated_tid);
        }
        printf("]\n");

        if(!tp->is_main_target)
            printf("\tinfected by: %s\n", tp->infected_by);
        counter++;
    }
    printf("\t____________________END____________________\n");
}

int is_pid_present(vmi_pid_t target_pid)
{
    for(auto it = target_processes.begin(); it != target_processes.end(); it++)
    {
        target_process_t tp = *it;
        if(tp->pid == target_pid)
        {
            int pos = it - target_processes.begin();
            // VD(printf("[DEBUG] <TMON> Target PID %d found in position: %d\n", tp->pid, pos);)
            return pos;
        }
    }
    return -1;
}

int is_tid_present(target_process_t tp, vmi_pid_t target_tid)
{
    auto it = std::find(tp->tids.begin(), tp->tids.end(), target_tid);
    if(it != tp->tids.end())
    {
        int pos = it - tp->tids.begin();
        // VD(printf("[DEBUG] <TMON> Target TID %d found in position: %d\n", target_tid, pos);)
        return pos;
    }
    return -1;
}

int add_tid_target_process(drakvuf_t drakvuf,
                            drakvuf_trap_info_t* info,
                            vmi_pid_t new_tid,
                            vmi_pid_t tp_pid,
                            char* tp_name,
                            int is_remote)
{
    char* cp_name;
    addr_t eprocess_base_cp;

    if(is_remote)
    {
        eprocess_base_cp = drakvuf_get_current_process(drakvuf, info->vcpu);
        cp_name = drakvuf_get_process_name(drakvuf, eprocess_base_cp, 0);
    } else
        cp_name = tp_name;

    if(!cp_name)
    {
        VD(printf("[DEBUG-ERROR] <TMON> Unable to retrieve cp_name\n");)
        return 0;
    }

    for(target_process_t tp : target_processes)
    {
        if(tp->pid == tp_pid && !strcmp(tp_name, tp->name))
        {
            if(is_remote)
            {
                TD(printf("<TMON> Target process %s (PID %d) remotely injected with new TID %d. Inserting...\n", tp->name, tp->pid, new_tid);)
                tp->tids.push_back(new_tid);
            } else
            {
                TD(printf("<TMON> Target process %s (PID %d) with new TID %d Inserting...\n", tp->name, tp->pid, new_tid);)
                tp->tids.push_back(new_tid);
            }
            return 1;
        }
    }
    TD(printf("<TMON> Target process %s (PID %d) not found. Inserting new infected target process (TID %d)\n", tp_name, tp_pid, new_tid);)
    //if not found, infected target process has to be created
    target_process_t infected_tp = (target_process_t)g_malloc0(sizeof(target_process));
    infected_tp->name = tp_name;
    infected_tp->infected_by = cp_name;
    infected_tp->pid = tp_pid;
    infected_tp->tids.push_back(new_tid);
    target_processes.push_back(infected_tp);
    return 1;
}

int delete_tid_in_target_process(drakvuf_t drakvuf,
                                drakvuf_trap_info_t* info,
                                vmi_pid_t tp_tid,
                                vmi_pid_t tp_pid)
{
    //NOTE: in case caller terminates itself, tp_name and cp_name are the same
    addr_t eprocess_base_tp;
    drakvuf_find_process(drakvuf, tp_pid, nullptr, &eprocess_base_tp);
    char* tp_name = drakvuf_get_process_name(drakvuf, eprocess_base_tp, 0);
    if(!tp_name)
    {
        VD(printf("[DEBUG-ERROR] <TMON> Failed to read name of the target process (PID: %d)\n", tp_pid);)
        return 0;
    }
    addr_t eprocess_base_cp = drakvuf_get_current_process(drakvuf, info->vcpu);
    char* cp_name = drakvuf_get_process_name(drakvuf, eprocess_base_cp, 0);
    if(!cp_name)
    {
        VD(printf("[DEBUG]-ERROR] <TMON> Failed to read name of the current process (PID: %d)\n", info->proc_data.pid);)
        return 0;
    }

    for(target_process_t tp : target_processes)
    {
        if(tp->pid == tp_pid && !strcmp(tp_name, tp->name))
        {
            for(auto it = tp->tids.begin(); it != tp->tids.end(); it++)
            {
                vmi_pid_t tid = *it;
                if(tid == tp_tid)
                {
                    TD(printf("<TMON> target process %s terminated a thread (TID: %d) inside a process (PID: %d)!\n", cp_name, tp_tid, tp_pid);)
                    tp->tids.erase(it--);
                    tp->terminated_tids.push_back(tp_tid);
                    return 1;
                }
            }
            //caller ends a thread that is not monitored
            TD(printf("<TMON> WARNING, target process %s terminated an *unmonitored* thread (TID: %d) inside a process (PID: %d) not monitored!\n", cp_name, tp_tid, tp_pid);)
            return 0;
        }
    }

    // caller ends a thread of a process that is not monitored
    TD(printf("<TMON> target process %s terminated a thread (TID: %d) inside an *unmonitored* process (PID: %d)\n!", cp_name, tp_tid, tp_pid);)
    return 0;
}

int is_target_process(drakvuf_t drakvuf, drakvuf_trap_info_t* info)
{
    addr_t eprocess_base_cp = drakvuf_get_current_process(drakvuf, info->vcpu);
    char* cp_name = drakvuf_get_process_name(drakvuf, eprocess_base_cp, 0);
    uint32_t cp_tid = 0;
    if(!drakvuf_get_current_thread_id(drakvuf, info->vcpu, &cp_tid))
    {
        VD(printf("[DEBUG-ERROR] <TMON> Unable to retrieve TID of process %d\n", info->proc_data.pid);)
        return 0;
    }

    int counter = -1;// a simple index to clean correctly

    for(auto it = target_processes.begin(); it != target_processes.end(); it++)
    {
        target_process_t tp = *it;
        counter++;
        addr_t eprocess_base_tp = 0;

        //tp (main or infected) already entered the system once, so we can search it (in the system) by its PID
        if(tp->pid)
        {
            //tp is still in the system but some false positives can happen (i.e. tp exits but a new
            //process with the same PID enters the system). This case is filtered out through an inner check
            if(drakvuf_find_process(drakvuf, tp->pid, NULL, &eprocess_base_tp))
            {
                //tp is cp (check by name and PID to avoid false positives)
                if(tp->pid == info->proc_data.pid && !strcmp(cp_name, tp->name))
                {
                    TD(printf("<TMON> Current process is the target process %s! (PID: %d, TID: %d)\n", cp_name, tp->pid, cp_tid);)
                    int pos_tid = is_tid_present(tp, cp_tid);
                    //NOTE: if tp is main and cp TID is *not* present in the pool, then we add it.
                    //this case should never happen if we start monitoring before executing
                    //main target process. *However* if main target process calls NtCreateThreadEx
                    //with this mechanism we can insert the newly spawned thread (delayed insertion)
                    if(tp->is_main_target && pos_tid == -1)
                    {
                        TD(printf("<TMON> An unknown TID of main process %s enters the system. Adding it (maybe monitoring started too late)\n", tp->name);)
                        tp->tids.push_back(cp_tid);
                    } else if(pos_tid == -1) //if tp is infected, cp can proceed only if cp TID is in its pool
                    {
                        TD(printf("<TMON> Not interested in current TID %d of infected target process %s\n", cp_tid, tp->name);)
                        return 0;
                    }
                    return 1;
                }
                //tp is not cp, continue
                //TD(printf("Target process %s is still in the system but it's not the current one (%s)\n", tp->name, cp_name);)
            } else //tp is not anymore in the system, need to clean
            {
                TD(printf("<TMON> Target process %s exited! Cleaning position %d...\n", tp->name, counter);)
                //if tp is not main, we directly remove the current element
                if(!tp->is_main_target)
                {
                    g_free(tp);
                    target_processes.erase(it--);

                    TD(print_status_target_processes();)
                    continue;
                }
                tp->pid = 0;
                tp->tids.clear();
                tp->terminated_tids.clear();

                TD(print_status_target_processes();)
            }
        } else //main tp never entered the monitoring system, so we have to search it (in the system) by name
        {
            //main tp is cp
            if(!strcmp(cp_name, tp->name))
            {
                TD(printf("<TMON> Target process %s enters DRAKVUF for the first time! (PID: %d, TID: %d)\n", cp_name, info->proc_data.pid, cp_tid);)
                tp->pid = info->proc_data.pid;
                tp->tids.push_back(cp_tid);
                return 1;
            }
            //main tp is not cp, continue
            //TD(printf("Main target process %s is not in the system yet or not hooked yet (%s)\n", tp->name, cp_name);)
        }
    }
    return 0;
}

//  +-------------------------------------------------+
//  |    Utilities for shadow callstack management    |
//  +-------------------------------------------------+

void print_status_callstack(uint32_t tid)
{
    printf("_______________STATUS CALLSTACK_______________\n");
    uint32_t size = g_hash_table_size(tlsinfo_lookup);
    printf("size: %d\n", size);
    printf("Current TID: %d\n", tid);
    tlsinfo_t* tls = (tlsinfo_t*) g_hash_table_lookup(tlsinfo_lookup, &tid);
    if(!tls)
    {
        printf("\t<empty>\n");
    } else
    {
        callstack &cstack = tls->cstack;
        if(cstack.empty())
        {
            printf("\t(pos 0) <callstack empty>\n");
        } else
        {
            uint32_t counter = 0;
            for(callinfo_t cinfo : cstack)
            {
                counter++;
                apicall_t* apicall = (apicall_t*) cinfo.data;
                printf("\t(pos %d) %s:\trsp 0x%lx, *rsp 0x%lx\n", counter, apicall->name, cinfo.rsp, cinfo.dereferenced_rsp);
            }
        }
    }
    printf("______________________________________________\n");
}

void update_stack_on_entry(callstack &cstack, callinfo_t cinfo)
{
    addr_t rsp = cinfo.rsp;
    CD(apicall_t* apicall = (apicall_t*) cinfo.data;)
    while(!cstack.empty())
    {
        callinfo_t top = cstack.back();
        if(rsp >= top.rsp) // segfault with <
        {
            #if C_DEBUG
                apicall_t* stored_apicall = (apicall_t*) top.data;
                printf("<CALLSTACK OEP> (%zu) Removing %s entry from callstack (last rsp: 0x%lx, current rsp: 0x%lx)\n", cstack.size(), stored_apicall->name, top.rsp, rsp);
            #endif
            cstack.pop_back();
        }
        else break;
    }
    CD(printf("<CALLSTACK OEP> Inserted %s in callstack (current rsp: 0x%lx, dereferenced rsp: 0x%lx)\n", apicall->name, rsp, cinfo.dereferenced_rsp);)
    cstack.push_back(cinfo);
}

void update_stack_on_exit(drakvuf_t drakvuf, drakvuf_trap_info_t* info, callstack &cstack)
{
    int size = cstack.size();
    int current_position = size;
    addr_t last_callinfo_rsp = 0;
    addr_t dereferenced_rsp = 0;
    bool found = false;

    if(VMI_FAILURE == read_vaddr_32(drakvuf, info, info->regs->rsp, &dereferenced_rsp))
    {
        CD(printf("<CALLSTACK RET> Failed reading *rsp");)
    }

    for (auto it = cstack.rbegin(); it != cstack.rend(); ++it)
    {
        callinfo_t cinfo = *it;
        if((ret_instrumentation_enabled && cinfo.dereferenced_rsp == dereferenced_rsp) ||
            (!ret_instrumentation_enabled && cinfo.dereferenced_rsp == info->regs->rip))
        {
            last_callinfo_rsp = cinfo.rsp;
            found = true;
            break;
        }
        current_position--;
        last_callinfo_rsp = cinfo.rsp;
    }
    CD(printf("<CALLSTACK RET> %s, rip: 0x%lx, rsp: 0x%lx, *rsp: 0x%lx, current_pos: %d\n", found ? "Found" : "Not found", info->regs->rip, info->regs->rsp, dereferenced_rsp, current_position);)

    //the first one is the target
    if(current_position == size)
    {
        if((ret_instrumentation_enabled && info->regs->rsp > last_callinfo_rsp) ||
            (!ret_instrumentation_enabled && info->regs->rsp <= last_callinfo_rsp))
        {
            CD(printf("<CALLSTACK RET> something went wrong ESP 1 (rsp: 0x%lx, last rsp: 0x%lx)\n", info->regs->rsp, last_callinfo_rsp);)
        } else
        {
            //things are OK
            CD(printf("<CALLSTACK RET> Removing last entry on callstack\n");)
            cstack.pop_back();
        }
    } else if(current_position == 0)
    {
        CD(printf("<CALLSTACK RET> Nothing left\n");)
    } else
    {
        if((ret_instrumentation_enabled && info->regs->rsp > last_callinfo_rsp) ||
            (!ret_instrumentation_enabled && info->regs->rsp <= last_callinfo_rsp))
        {
            CD(printf("<CALLSTACK RET> something went wrong ESP 2\n");)
        }
        else
        {
            CD(printf("<CALLSTACK RET> Resizing callstack\n");)
            cstack.resize(current_position-1);
        }
    }
}

void remove_tlsinfo(uint32_t tid)
{
    tlsinfo_t* tls = (tlsinfo_t*) g_hash_table_lookup(tlsinfo_lookup, &tid);
    if(tls)
    {
        if(g_hash_table_remove(tlsinfo_lookup, &tid))
        {
            tls->cstack.clear();
            g_free(tls);
            CD(printf("<CALLSTACK> Erased tlsinfo associated to TID %d\n", tid);)
        }
    }
}

//  +----------------------------------------------+
//  |    Utilities for DLL binary interval tree    |
//  +----------------------------------------------+

node_t* bintree_init(addr_t start_address, addr_t end_address, const char* dll_name)
{
    node_t* tree = (node_t*)g_malloc0(sizeof(node_t));
    tree->start_addr = start_address;
    tree->end_addr = end_address;
    tree->dll_name = dll_name;
    tree->gt = NULL;
    tree->lt = NULL;
    return tree;
}

bool bintree_insert(node_t* tree, addr_t start_address, addr_t end_address, const char* dll_name)
{
    node_t* it_node = tree;

    // duplicate case
    if(it_node->start_addr == start_address && it_node->end_addr == end_address)
        return false;
    // insert in right subtree
    else if(it_node->end_addr < start_address)
    {
        // Right subtree present
        if(it_node->gt)
        {
            return bintree_insert(it_node->gt, start_address, end_address, dll_name);
        }
        // No right subtree
        else
        {
            it_node->gt = bintree_init(start_address, end_address, dll_name);
            return true;
        }
    }
	// Insert in left subtree
    else
    {
        if(it_node->lt)
        {
            return bintree_insert(it_node->lt, start_address, end_address, dll_name);
        }
		// No left subtree
        else
        {
            it_node->lt = bintree_init(start_address, end_address, dll_name);
            return true;
        }
    }
    return false;
}

node_t* bintree_search(node_t *tree, addr_t val)
{
	if (!tree)
		return NULL;
	node_t *it_node = tree;

	// Address found in interval
	if (val >= it_node->start_addr && val <= it_node->end_addr) {
		return it_node;
	}
	// Search right subtree
	else if (it_node->end_addr < val)
		if (it_node->gt)
			return bintree_search(it_node->gt, val);
		else
			return NULL;
	// Search left subtree
	else
		if (it_node->lt)
			return bintree_search(it_node->lt, val);
		else
			return NULL;
	return NULL;
}

void add_interval_tree(addr_t start_address, addr_t end_address, const char* dll_name)
{
    if(intervalTree == NULL)
    {
        intervalTree = bintree_init(start_address, end_address, dll_name);
    } else
    {
        bintree_insert(intervalTree, start_address, end_address, dll_name);
    }
}

bool bintree_dealloc(node_t* tree)
{
	if (!tree)
		return true;

	node_t *gt = tree->gt;
	node_t *lt = tree->lt;
	g_free(tree);

	if (gt)
		bintree_dealloc(gt);
	if (lt)
		bintree_dealloc(lt);
	return true;
}

void print_bintree_status(node_t *node, uint32_t lvl)
{
	if (!node)
		return;

    printf("<BINTREE> Level: %d, Range: [0x%lx, 0x%lx] %s\n", lvl, node->start_addr, node->end_addr, node->dll_name);

    print_bintree_status(node->lt, lvl + 1);
	print_bintree_status(node->gt, lvl + 1);

	return;
}