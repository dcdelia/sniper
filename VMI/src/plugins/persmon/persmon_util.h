#ifndef PERSMON_UTIL_H
#define PERSMON_UTIL_H

#include <libvmi/libvmi.h>

#include "private.h"
// needed for NTSTATUS value/name mapping
#include "../procmon/ntstatus.h"


//  +----------------------------+
//  |      Generic Utilities     |
//  +----------------------------+

/**
 * @brief it dereferences 32-bit vaddr and stores it inside dereferenced_vaddr
 *
 * @param[in] drakvuf
 * @param[in] info
 * @param[in] vaddr, 32-bit virtual address that has to be read (i.e. rsp)
 * @param[out] dereferenced_vaddr, 32-bit dereferenced address (i.e. [rsp])
 * @return status_t
 */
status_t read_vaddr_32(drakvuf_t drakvuf,
                        drakvuf_trap_info_t* info,
                        addr_t vaddr,
                        addr_t* dereferenced_vaddr);

/**
 * @brief it prints some regs (cr3, rip, rsp, rax) for debugging purposes
 *
 * @param drakvuf, needed if we want to read memory from registers (i.e. [rsp])
 * @param info
 *
 */
void print_regs(drakvuf_t drakvuf,
                drakvuf_trap_info_t* info);

//  +------------------------------------------+
//  |     Utilities for parsing parameters     |
//  +------------------------------------------+

#define MAX_SIZE_STRING 256
#define CLASS_POINTER_BITMASK 0xFF00
#define CLASS_TYPE_BITMASK 0x00FF

typedef int (*op1)(addr_t val1);                                                            // for addresses/ntstatus
typedef int (*op2)(addr_t val1, type_t type);                                               // for numbers
typedef int (*op3)(drakvuf_t drakvuf, drakvuf_trap_info_t *info, addr_t val, bool is_api);  // for unicode/ansi decoding

typedef void (*generic_parser)(void);                                                       // generic template for parsing functions

/**
 * @brief it dereferences a 32-bit addr
 *
 * @param drakvuf
 * @param info
 * @param addr
 * @return addr_t,  the value stored at addr or 0 if (i) addr is 0 or (ii) if LibVMI fails
 */
addr_t read_pointer(drakvuf_t drakvuf, drakvuf_trap_info_t *info, addr_t addr);

/**
 * @brief it prints address
 *
 * @param addr
 * @return int
 */
int print_addr(addr_t addr);

/**
 * @brief if verbose logging is enabled, it prints (i) the value of the NTSTATUS and
 * (ii) the name of the NTSTATUS associated to that value. Otherwise, it just prints
 * the value
 *
 * @param nstatus_value
 * @return int
 */
int print_ntstatus(addr_t nstatus_value);

/**
 * @brief it reads the unicode string starting from addr and it prints it.
 * The address is printed if (i) the size of the read string is > MAX_SIZE_STRING
 * or (ii) if LibVMI fails
 *
 * @param drakvuf
 * @param info
 * @param str
 * @param is_api
 * @return int
 */
int print_str_unicode(drakvuf_t drakvuf, drakvuf_trap_info_t* info, addr_t str, bool is_api);

/**
 * @brief see print_str_unicode, but for ascii strings
 *
 * @param drakvuf
 * @param info
 * @param str
 * @return int
 */
int print_str_ansi(drakvuf_t drakvuf, drakvuf_trap_info_t* info, addr_t str, bool is_api);

/**
 * @brief is prints the value stored at num according to current_type.
 * In case of UNISGNED_DOUBLE_WORD, it just prints the address
 *
 * @param num
 * @param current_type
 * @return int
 */
int print_number_ex(addr_t num, type_t current_type);

/**
 * @brief core printer function.
 * It prints all the arguments/retun value of the passed syscall/apicall
 *
 * @param drakvuf
 * @param info
 * @param context, can be either a syscall_t or an apicall_t
 * @param is_api, necessary to understand if context is a syscall_t or an apicall_t
 * @param is_ret_callback, necessary to understand which parameters read (IN, INOUT, OUT, UNK)
 *                          and if return value should be read
 */
void print_arguments(drakvuf_t drakvuf,
                    drakvuf_trap_info_t* info,
                    void* context,
                    bool is_api,
                    bool is_ret_callback);

/**
 * @brief array of parsing functions per super type
 *
 */
const generic_parser parsing_function_table[__TYPE_MAX] =
{
    [SIGNED_BYTE] = (generic_parser) print_number_ex,
    [UNSIGNED_BYTE] = (generic_parser) print_number_ex,
    [SIGNED_WORD] = (generic_parser) print_number_ex,
    [UNSIGNED_WORD] = (generic_parser) print_number_ex,
    [SIGNED_DOUBLE_WORD] = (generic_parser) print_number_ex,
    [UNSIGNED_DOUBLE_WORD] = (generic_parser) print_number_ex,
    [SIGNED_QUAD_WORD] = (generic_parser) print_number_ex,
    [UNSIGNED_QUAD_WORD] = (generic_parser) print_number_ex,
    [FLOAT] = (generic_parser) print_number_ex,
    [DOUBLE] = (generic_parser) print_number_ex,
    [LONG_DOUBLE] = (generic_parser) print_number_ex,
    [VOID] = (generic_parser) print_addr,
    [ANSI_CHAR] = (generic_parser) print_str_ansi,
    [WIDE_CHAR] = (generic_parser) print_str_unicode,
    [NTSTATUS] = (generic_parser) print_ntstatus,
    [STRUCT] = (generic_parser) print_addr,
    [UNION] = (generic_parser) print_addr,
    [TYPEDEF] = (generic_parser) print_addr,
    [ARRAY] = (generic_parser) print_addr,
    [REFERENCE] = (generic_parser) print_addr,
    [ENUMERATION] = (generic_parser) print_addr,
    [MISSING] = (generic_parser) print_addr,
};

//  +-----------------------------------------------+
//  |    Utilities for target process monitoring    |
//  +-----------------------------------------------+

/**
 * @brief used for target process monitoring. It shows the current state of
 * of the monitored target processes
 */
void print_status_target_processes();

/**
 * @brief used for target process monitoring. It checks whether the target pid
 * is one of the target process to monitor. If it is so, it returns the position
 * of the target process associated to that pid or -1
 *
 * @param target_pid, pid to search inside target_processes
 * @return int, position of the target process or -1
 */
int is_pid_present(vmi_pid_t target_pid);

/**
 * @brief used for target process monitoring. It checks whether the target tid
 * is present in monitored tids in the passed target process. If it is so, it
 * returns the position of the tid inside the vector or -1
 *
 * @param tp
 * @param target_tid, tid to search inside tp->tids
 * @return int, position of the tid or -1
 */
int is_tid_present(target_process_t tp,
                    vmi_pid_t target_tid);

/**
 * @brief it adds the new TID in the monitored threads for a target process.
 * If the PID associated with is not present, this means that a new target
 * process is entered in the system so we have to create it
 *          -> if remote: target process (tp) is remote process
 *          -> if not remote: target process (tp) is the caller
 *
 * @param drakvuf
 * @param info
 * @param new_tid
 * @param tp_pid
 * @param tp_name
 * @param is_remote, by default is 0
 * @return int
 */
int add_tid_target_process(drakvuf_t drakvuf,
                            drakvuf_trap_info_t* info,
                            vmi_pid_t new_tid,
                            vmi_pid_t tp_pid,
                            char* tp_name,
                            int is_remote = 0);

/**
 * @brief it removes the TID from the target process PID, and inserts it
 * in eixted TID pool
 *
 * @param drakvuf
 * @param info
 * @param tp_pid, PID of the target process that has the TID to be removed
 * @param tp_tid, TID to be removed
 * @return int true or false
 */
int delete_tid_in_target_process(drakvuf_t drakvuf,
                                drakvuf_trap_info_t* info,
                                vmi_pid_t tp_pid,
                                vmi_pid_t tp_tid);

/**
 * @brief used for target process monitoring. It checks whether the current process
 * (PID/TID) is a target process (main or infected). For main target processes,
 * we're interested in *all* their TIDs. For infected target processes, we're
 * interested *only* on their injected TIDs: if another TID does something, hook
 * is skipped and monitoring continues. Additionally, if during the scan of
 * target_processes it realizes that some target processes exits, it cleans the
 * element (if target process is main) or it completely removes it
 * (if target process is infected)
 *
 * @param drakvuf
 * @param info
 * @return int, true or false
 */
int is_target_process(drakvuf_t drakvuf,
                        drakvuf_trap_info_t* info);


//  +-------------------------------------------------+
//  |    Utilities for shadow callstack management    |
//  +-------------------------------------------------+

extern GHashTable* tlsinfo_lookup;

extern bool ret_instrumentation_enabled;

/**
 * @brief it prints the status of the callstack associated to passed TID
 *
 * @param tid
 */
void print_status_callstack(uint32_t tid);

/**
 * @brief on entry, it updates the callstack associated to the caller TID.
 * if the callstack is empty, it pushs back the passed callinfo; otherwise
 * it cleans the callstack from pending calls
 *
 * @param cstack
 * @param cinfo
 */
void update_stack_on_entry(callstack &cstack, callinfo_t cinfo);

/**
 * @brief on exit, it updates the callstack by removing the entry associated
 * to the that call; if any. It also resizes the callstack if some apicall exits
 * were missed for some reasons
 *
 * @param drakvuf
 * @param info
 * @param cstack
 */
void update_stack_on_exit(drakvuf_t drakvuf, drakvuf_trap_info_t* info, callstack &cstack);

/**
 * @brief it removes the tlsinfo associated to that TID from the hashtable
 *
 * @param tid
 */
void remove_tlsinfo(uint32_t tid);

//  +----------------------------------------------+
//  |    Utilities for DLL binary interval tree    |
//  +----------------------------------------------+

extern node_t* intervalTree;

/**
 * @brief it initializes the binary interval tree with a DLL node.
 *
 * @param start_address
 * @param end_address
 * @param dll_name
 * @return node_t*
 */
node_t* bintree_init(addr_t start_address, addr_t end_address, const char* dll_name);

/**
 * @brief it inserts, recursively, a new DLL node inside binary interval tree.
 * Use add_interval_tree instead of calling directly this function.
 *
 * @param tree
 * @param start_address
 * @param end_address
 * @param dll_name
 * @return true
 * @return false
 */
bool bintree_insert(node_t* tree, addr_t start_address, addr_t end_address, const char* dll_name);

/**
 * @brief it returns a DLL node from the binary interval tree such that val
 * is contained in [start_address, end_address]; or null. Use add_interval_tree
 * instead of calling directly this function.
 *
 * @param tree
 * @param val
 * @return node_t*
 */
node_t* bintree_search(node_t *tree, addr_t val);

/**
 * @brief if the binary interval tree already exists, it inserts the new DLL node
 * otherwise it creates it.
 *
 * @param start_address
 * @param end_address
 * @param dll_name
 */
void add_interval_tree(addr_t start_address, addr_t end_address, const char* dll_name);

/**
 * @brief it deallocates, recursively, the binary interval tree.
 *
 * @param tree
 * @return true
 * @return false
 */
bool bintree_dealloc(node_t* tree);

/**
 * @brief it prints the status of the binary interval tree.
 *
 * @param node
 * @param lvl
 */
void print_bintree_status(node_t *node, uint32_t lvl);

#endif