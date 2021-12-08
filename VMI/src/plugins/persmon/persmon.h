#ifndef PERSMON_H
#define PERSMON_H

#include <glib.h>
#include "plugins/plugins_ex.h"

/**
 * @brief process to exploit for finding DLLs ranges. It is required that the support
 * process has been laoded the needed DLLs, otherwise the plugin fails at startup
 */
#define SUPPORT_PROCESS "explorer.exe"

struct persmon_config
{
    const char* kernel32_profile;
    const char* kernelbase_profile;
    const char* iphlpapi_profile;
    const char* target_process;                 // enabled with --target-process option. By defualt it works system-wide
    const char* support_process;                // enabled with --support-process option. By defualt it uses explorer.exe
    bool        ret_instrumentation;            // enabled with -R option
    bool        verbose_logging = false;        // enabled with --verbose-log option
};

class persmon: public pluginex
{

public:
    persmon(drakvuf_t drakvuf, const persmon_config* config, output_format_t output);
};

/**
 * @brief some Windows internal data structures required for target process monitoring
 * and DLL binary interval tree
 */
enum offset : uint8_t
{
    OBJECT_HEADER_BODY,
    EPROCESS_THREAD_LIST_HEAD,
    EPROCESS_FORK_IN_PROGRESS,
    ETHREAD_THREAD_LIST_ENTRY,
    ETHREAD_CID,
    IMAGE_DOS_HEADER_E_ILFANEW,
    IMAGE_NT_HEADERS_OPTIONAL_HEADER,
    IMAGE_OPTIONAL_HEADER_SIZE_IMAGE,
    __OFFSET_MAX
};

/**
 * @brief it retrieves the _EPROCESS base address from the handle of a process
 *
 * https://www.nirsoft.net/kernel_struct/vista/EPROCESS.html
 * http://terminus.rewolf.pl/terminus/structures/ntdll/_EPROCESS_x86.html
 *
 * @param drakvuf
 * @param info
 * @param handle
 * @return addr_t
 */
addr_t get_eprocess_by_handle(drakvuf_t drakvuf,
                                drakvuf_trap_info_t* info,
                                addr_t handle);

/**
 * @brief it retrieves the TID from _ETHREAD base address
 *
 * @param drakvuf
 * @param ethread_base
 * @return vmi_pid_t
 */
vmi_pid_t get_ethread_id(drakvuf_t drakvuf,
                        addr_t ethread_base);

/**
 * @brief it retrieves the PID from _ETHREAD base address
 *
 * @param drakvuf
 * @param ethread_base
 * @return vmi_pid_t
 */
vmi_pid_t get_ethread_pid(drakvuf_t drakvuf,
                        addr_t ethread_base);

/**
 * @brief It retrieves *all* the TIDs of a process
 * https://www.nirsoft.net/kernel_struct/vista/ETHREAD.html
 * http://terminus.rewolf.pl/terminus/structures/ntdll/_ETHREAD_x86.html
 *
 * @param drakvuf
 * @param eprocess_base
 * @param[out] tids
 * @return int
 */
int get_tids_eprocess(drakvuf_t drakvuf,
                        addr_t eprocess_base,
                        std::vector<vmi_pid_t>& tids);

/**
 * @brief it retrieves the newest TID of a process
 * (that is the last one in ThreadListHead)
 * https://www.nirsoft.net/kernel_struct/vista/ETHREAD.html
 * http://terminus.rewolf.pl/terminus/structures/ntdll/_ETHREAD_x86.html
 *
 * @param drakvuf
 * @param eprocess_base
 * @return vmi_pid_t
 */
vmi_pid_t get_last_tid_eprocess(drakvuf_t drakvuf,
                                addr_t eprocess_base);


//**************************DEBUG:******************************

/**
 * @brief debugging procedure for testing bp type 1 injection
 *
 * @param drakvuf
 * @param info
 * @return event_response_t
 */
event_response_t debugging_oep_callback(drakvuf_t drakvuf, drakvuf_trap_info_t* info);

#endif