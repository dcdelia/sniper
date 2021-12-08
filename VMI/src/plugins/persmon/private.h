#ifndef PERSMON_PRIVATE
#define PERSMON_PRIVATE

#include <vector>
#include <algorithm>
#include <libvmi/libvmi.h>

#include "plugins/plugins_ex.h"

//  +----------------------------+
//  |       Debugging Macros     |
//  +----------------------------+

#define P_DEBUG 1
#define V_DEBUG 0
#define T_DEBUG 1
#define S_DEBUG 0
#define C_DEBUG 1
#define B_DEBUG 1

#if P_DEBUG //used for debugging general information
#define PD(x) x
#else
#define PD(x)
#endif

#if V_DEBUG //used for debugging *verbosely* inner mechanisms
#define VD(x) x
#else
#define VD(x)
#endif

#if T_DEBUG //used for debugging target process monitoring mechanism
#define TD(x) x
#else
#define TD(x)
#endif

#if C_DEBUG //used for debugging shadow callstack mechanism
#define CD(x) x
#else
#define CD(x)
#endif

#if S_DEBUG //used for debugging syscall hooking mechanism
#define SD(x) x
#else
#define SD(x)
#endif

#if B_DEBUG //used for debugging bintree management
#define BD(x) x
#else
#define BD(x)
#endif

//  +---------------------------------------+
//  |     Common structures for tracing     |
//  +---------------------------------------+

#define MAX_HANDLED_ARGS 17
#define MAX_HANDLED_RETS 11
#define MAX_SYS_HANDLED_ARGS 17

/**
 * @brief list of structures found across all handled DLLs and syscalls.
 */
typedef enum : uint32_t
{
	FUNDAMENTAL_TYPE, // used for saying that an argument is not a structure, but a simple type (i.e. unsigned dword)
	MIB_UDPSTATS,
	MIB_IPNET_TABLE2,
	MIB_TCPROW_LH,
	TCP_ESTATS_TYPE,
	MIB_UNICASTIPADDRESS_ROW,
	MIB_IPNETROW_LH,
	IP_ADAPTER_INDEX_MAP,
	MIB_IPFORWARDTABLE,
	OVERLAPPED,
	IP_PER_ADAPTER_INFO_W2KSP1,
	MIB_UNICASTIPADDRESS_TABLE,
	FIXED_INFO_W2KSP1,
	UDP_TABLE_CLASS,
	MIB_IF_TABLE_LEVEL,
	MIB_IF_TABLE2,
	TCPIP_OWNER_MODULE_INFO_CLASS,
	MIB_IPFORWARDROW,
	IP_OPTION_INFORMATION,
	MIB_IPNET_ROW2,
	MIB_IPPATH_ROW,
	NET_LUID_LH,
	SOCKADDR_INET,
	MIB_IPFORWARD_ROW2,
	MIB_TCPSTATS_LH,
	GUID,
	MIB_MULTICASTIPADDRESS_TABLE,
	MIB_IPINTERFACE_TABLE,
	IP_ADAPTER_INFO,
	MIB_IPPATH_TABLE,
	MIB_ANYCASTIPADDRESS_ROW,
	IP_INTERFACE_INFO,
	MIB_TCPTABLE,
	MIB_TCP6TABLE,
	MIB_MULTICASTIPADDRESS_ROW,
	MIB_IPINTERFACE_ROW,
	IP_INTERFACE_NAME_INFO_W2KSP1,
	MIB_IPSTATS_LH,
	MIB_TCPTABLE2,
	TCP_TABLE_CLASS,
	MIB_ICMP_EX_XPSP1,
	MIB_UDP6ROW_OWNER_MODULE,
	SOCKADDR,
	MIB_IPNETTABLE,
	MIB_UDPROW_OWNER_MODULE,
	MIB_ICMP,
	MIB_INVERTEDIFSTACK_TABLE,
	MIB_IPFORWARD_TABLE2,
	MIB_TCP6ROW,
	MIB_IPADDRTABLE,
	MIB_TCP6TABLE2,
	IP_ADAPTER_ADDRESSES_LH,
	MIB_IFTABLE,
	MIB_ANYCASTIPADDRESS_TABLE,
	MIB_IFROW,
	MIB_TCP6ROW_OWNER_MODULE,
	MIB_IF_ROW2,
	MIB_TCPROW_OWNER_MODULE,
	IP_UNIDIRECTIONAL_ADAPTER_ADDRESS,
	SOCKADDR_IN6,
	MIB_IFSTACK_TABLE,
	MIB_UDP6TABLE,
	SOCKADDR_IN6_PAIR,
	MIB_UDPTABLE,
	SECURITY_ATTRIBUTES,
	INPUT_RECORD,
	NLSVERSIONINFO,
	SMALL_RECT,
	COORD,
	CHAR_INFO,
	FILETIME,
	TIME_DYNAMIC_ZONE_INFORMATION,
	CONTEXT,
	RTL_CRITICAL_SECTION,
	PROCESSOR_NUMBER,
	COMPUTER_NAME_FORMAT,
	TAGHEAPLIST32,
	NLSVERSIONINFOEX,
	SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION,
	TAGACTCTX_SECTION_KEYED_DATA,
	HEAP_INFORMATION_CLASS,
	TAGMODULEENTRY32,
	TAGPROCESSENTRY32,
	CONSOLE_READCONSOLE_CONTROL,
	TP_CALLBACK_ENVIRON_V3,
	CONSOLE_CURSOR_INFO,
	GROUP_AFFINITY,
	RTL_SRWLOCK,
	WOW64_LDT_ENTRY,
	FINDEX_INFO_LEVELS,
	FINDEX_SEARCH_OPS,
	COMSTAT,
	NORM_FORM,
	EXCEPTION_RECORD,
	TIME_ZONE_INFORMATION,
	SYSTEMTIME,
	FILEMUIINFO,
	CONSOLE_FONT_INFOEX,
	SYSTEM_INFO,
	COMMTIMEOUTS,
	JOB_SET_ARRAY,
	MEMORYSTATUS,
	PROCESS_HEAP_ENTRY,
	TAGTHREADENTRY32,
	FILE_INFO_BY_HANDLE_CLASS,
	REASON_CONTEXT,
	SLIST_HEADER,
	COMMCONFIG,
	OSVERSIONINFOEXA,
	OSVERSIONINFOEXW,
	OVERLAPPED_ENTRY,
	LOGICAL_PROCESSOR_RELATIONSHIP,
	SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX,
	RTL_CONDITION_VARIABLE,
	CONSOLE_HISTORY_INFO,
	OFSTRUCT,
	MEMORYSTATUSEX,
	CURRENCYFMTW,
	NUMBERFMTW,
	STREAM_INFO_LEVELS,
	FILE_SEGMENT_ELEMENT,
	CONSOLE_FONT_INFO,
	WIN32_FIND_DATAA,
	WIN32_FIND_DATAW,
	LARGE_INTEGER,
	CPINFOEXA,
	CPINFOEXW,
	EXCEPTION_POINTERS,
	JOBOBJECTINFOCLASS,
	DCB,
	PERFORMANCE_INFORMATION,
	STARTUPINFOW,
	PROCESS_INFORMATION,
	RTL_RUN_ONCE,
	STARTUPINFOA,
	CURRENCYFMTA,
	TAGMODULEENTRY32W,
	CONSOLE_SCREEN_BUFFER_INFO,
	CONSOLE_SCREEN_BUFFER_INFOEX,
	ULARGE_INTEGER,
	POWER_REQUEST_TYPE,
	TP_POOL_STACK_INFORMATION,
	MEMORY_BASIC_INFORMATION,
	LATENCY_TIME,
	LDT_ENTRY,
	OSVERSIONINFOA,
	CPINFO,
	GET_FILEEX_INFO_LEVELS,
	PROCESS_MEMORY_COUNTERS,
	CONSOLE_SELECTION_INFO,
	WOW64_CONTEXT,
	SYSTEM_POWER_STATUS,
	OSVERSIONINFOW,
	TAGHEAPENTRY32,
	SINGLE_LIST_ENTRY,
	FILE_ID_DESCRIPTOR,
	MODULEINFO,
	TAGPROCESSENTRY32W,
	PSAPI_WS_WATCH_INFORMATION,
	DEBUG_EVENT,
	NUMBERFMTA,
	SYSTEM_LOGICAL_PROCESSOR_INFORMATION,
	BY_HANDLE_FILE_INFORMATION,
	MEMORY_RESOURCE_NOTIFICATION_TYPE,
	PSAPI_WS_WATCH_INFORMATION_EX,
	PERFORMANCE_DATA,
	IO_COUNTERS,
	COMMPROP,
	TAGACTCTXA,
	TAGACTCTXW,
	WER_REGISTER_FILE_TYPE,
	HEAP_SUMMARY,
	GENERIC_MAPPING,
	ACL,
	WELL_KNOWN_SID_TYPE,
	TOKEN_PRIVILEGES,
	TOKEN_INFORMATION_CLASS,
	SECURITY_IMPERSONATION_LEVEL,
	PRIVILEGE_SET,
	ACL_INFORMATION_CLASS,
	OBJECT_TYPE_LIST,
	LUID,
	TOKEN_TYPE,
	AUDIT_EVENT_TYPE,
	SID_IDENTIFIER_AUTHORITY,
	SID_AND_ATTRIBUTES,
	LUID_AND_ATTRIBUTES,
	TOKEN_GROUPS,
    // Added for syscall management  <-----
    PORT_VIEW,
    WAIT_TYPE,
    SHUTDOWN_ACTION,
    PCRM_PROTOCOL_ID,
    SYSDBG_COMMAND,
    LANGID,
    FILE_IO_COMPLETION_INFORMATION,
    VDMSERVICECLASS,
    TIMER_SET_INFORMATION_CLASS,
    DBGUI_WAIT_STATE_CHANGE,
    MEMORY_INFORMATION_CLASS,
    EVENT_INFORMATION_CLASS,
    BOOT_OPTIONS,
    EVENT_TRACE_HEADER,
    FILE_PATH,
    EXECUTION_STATE,
    TIMER_APC_ROUTINE,
    FS_INFORMATION_CLASS,
    PS_APC_ROUTINE,
    FILE_NETWORK_OPEN_INFORMATION,
    NOTIFICATION_MASK,
    OBJECT_INFORMATION_CLASS,
    DEBUGOBJECTINFOCLASS,
    IO_COMPLETION_INFORMATION_CLASS,
    KEY_SET_INFORMATION_CLASS,
    KEY_INFORMATION_CLASS,
    SECTION_INFORMATION_CLASS,
    SYSTEM_INFORMATION_CLASS,
    SEMAPHORE_INFORMATION_CLASS,
    MUTANT_INFORMATION_CLASS,
    KEY_VALUE_ENTRY,
    RESOURCEMANAGER_INFORMATION_CLASS,
    TIMER_INFORMATION_CLASS,
    SECURITY_INFORMATION,
    THREADINFOCLASS,
    FILE_INFORMATION_CLASS,
    WORKERFACTORYINFOCLASS,
    TRANSACTION_INFORMATION_CLASS,
    TRANSACTIONMANAGER_INFORMATION_CLASS,
    PORT_INFORMATION_CLASS,
    PROCESSINFOCLASS,
    POWER_INFORMATION_LEVEL,
    PORT_MESSAGE,
    ENLISTMENT_INFORMATION_CLASS,
    ATOM_INFORMATION_CLASS,
    EVENT_TYPE,
    FILE_BASIC_INFORMATION,
    PROCESS_CREATE_INFO,
    PLUGPLAY_CONTROL_CLASS,
    RTL_USER_PROCESS_PARAMETERS,
    CLIENT_ID,
    WIN32_PROTECTION_MASK,
    SYSTEM_POWER_STATE,
    POWER_ACTION,
    SECTION_INHERIT,
    IO_SESSION_STATE,
    LCID,
    KTMOBJECT_TYPE,
    TRANSACTION_NOTIFICATION,
    TOKEN_OWNER,
    DEVICE_POWER_STATE,
    TOKEN_DEFAULT_DACL,
    KPROFILE_SOURCE,
    PLUGPLAY_EVENT_BLOCK,
    KEY_VALUE_INFORMATION_CLASS,
    PROCESS_ATTRIBUTE_LIST,
    APPHELPCOMMAND,
    KTMOBJECT_CURSOR,
    TIMER_TYPE,
    IO_APC_ROUTINE,
    TOKEN_SOURCE,
    TOKEN_PRIMARY_GROUP,
    REMOTE_PORT_VIEW,
    INITIAL_TEB,
    KAFFINITY,
    PS_ATTRIBUTE_LIST,
    TOKEN_USER,
    SECURITY_DESCRIPTOR,
    ACCESS_MASK,
    SECURITY_QUALITY_OF_SERVICE,
    SID,
    ALPC_SECURITY_ATTR,
    BOOT_ENTRY,
    IO_STATUS_BLOCK,
    RTL_ATOM,
    EFI_DRIVER_ENTRY,
    ALPC_DATA_VIEW_ATTR,
    ALPC_MESSAGE_INFORMATION_CLASS,
    ALPC_MESSAGE_ATTRIBUTES,
    ALPC_PORT_INFORMATION_CLASS,
    ALPC_HANDLE,
    OBJECT_ATTRIBUTES,
    ALPC_CONTEXT_ATTR,
    MEMORY_RESERVE_TYPE,
    ALPC_PORT_ATTRIBUTES,
	__STRUCT_TYPE_MAX
} struct_type_t;

/**
 * @brief names of the structures found across all handled DLLs and syscalls
 */
static const char* struct_names[__STRUCT_TYPE_MAX]
{
	[FUNDAMENTAL_TYPE] = "",
	[MIB_UDPSTATS] = "_MIB_UDPSTATS",
	[MIB_IPNET_TABLE2] = "_MIB_IPNET_TABLE2",
	[MIB_TCPROW_LH] = "_MIB_TCPROW_LH",
	[TCP_ESTATS_TYPE] = "TCP_ESTATS_TYPE",
	[MIB_UNICASTIPADDRESS_ROW] = "_MIB_UNICASTIPADDRESS_ROW",
	[MIB_IPNETROW_LH] = "_MIB_IPNETROW_LH",
	[IP_ADAPTER_INDEX_MAP] = "_IP_ADAPTER_INDEX_MAP",
	[MIB_IPFORWARDTABLE] = "_MIB_IPFORWARDTABLE",
	[OVERLAPPED] = "_OVERLAPPED",
	[IP_PER_ADAPTER_INFO_W2KSP1] = "_IP_PER_ADAPTER_INFO_W2KSP1",
	[MIB_UNICASTIPADDRESS_TABLE] = "_MIB_UNICASTIPADDRESS_TABLE",
	[FIXED_INFO_W2KSP1] = "FIXED_INFO_W2KSP1",
	[UDP_TABLE_CLASS] = "_UDP_TABLE_CLASS",
	[MIB_IF_TABLE_LEVEL] = "_MIB_IF_TABLE_LEVEL",
	[MIB_IF_TABLE2] = "_MIB_IF_TABLE2",
	[TCPIP_OWNER_MODULE_INFO_CLASS] = "_TCPIP_OWNER_MODULE_INFO_CLASS",
	[MIB_IPFORWARDROW] = "_MIB_IPFORWARDROW",
	[IP_OPTION_INFORMATION] = "ip_option_information",
	[MIB_IPNET_ROW2] = "_MIB_IPNET_ROW2",
	[MIB_IPPATH_ROW] = "_MIB_IPPATH_ROW",
	[NET_LUID_LH] = "_NET_LUID_LH",
	[SOCKADDR_INET] = "_SOCKADDR_INET",
	[MIB_IPFORWARD_ROW2] = "_MIB_IPFORWARD_ROW2",
	[MIB_TCPSTATS_LH] = "_MIB_TCPSTATS_LH",
	[GUID] = "_GUID",
	[MIB_MULTICASTIPADDRESS_TABLE] = "_MIB_MULTICASTIPADDRESS_TABLE",
	[MIB_IPINTERFACE_TABLE] = "_MIB_IPINTERFACE_TABLE",
	[IP_ADAPTER_INFO] = "_IP_ADAPTER_INFO",
	[MIB_IPPATH_TABLE] = "_MIB_IPPATH_TABLE",
	[MIB_ANYCASTIPADDRESS_ROW] = "_MIB_ANYCASTIPADDRESS_ROW",
	[IP_INTERFACE_INFO] = "_IP_INTERFACE_INFO",
	[MIB_TCPTABLE] = "_MIB_TCPTABLE",
	[MIB_TCP6TABLE] = "_MIB_TCP6TABLE",
	[MIB_MULTICASTIPADDRESS_ROW] = "_MIB_MULTICASTIPADDRESS_ROW",
	[MIB_IPINTERFACE_ROW] = "_MIB_IPINTERFACE_ROW",
	[IP_INTERFACE_NAME_INFO_W2KSP1] = "ip_interface_name_info_w2ksp1",
	[MIB_IPSTATS_LH] = "_MIB_IPSTATS_LH",
	[MIB_TCPTABLE2] = "_MIB_TCPTABLE2",
	[TCP_TABLE_CLASS] = "_TCP_TABLE_CLASS",
	[MIB_ICMP_EX_XPSP1] = "_MIB_ICMP_EX_XPSP1",
	[MIB_UDP6ROW_OWNER_MODULE] = "_MIB_UDP6ROW_OWNER_MODULE",
	[SOCKADDR] = "sockaddr",
	[MIB_IPNETTABLE] = "_MIB_IPNETTABLE",
	[MIB_UDPROW_OWNER_MODULE] = "_MIB_UDPROW_OWNER_MODULE",
	[MIB_ICMP] = "_MIB_ICMP",
	[MIB_INVERTEDIFSTACK_TABLE] = "_MIB_INVERTEDIFSTACK_TABLE",
	[MIB_IPFORWARD_TABLE2] = "_MIB_IPFORWARD_TABLE2",
	[MIB_TCP6ROW] = "_MIB_TCP6ROW",
	[MIB_IPADDRTABLE] = "_MIB_IPADDRTABLE",
	[MIB_TCP6TABLE2] = "_MIB_TCP6TABLE2",
	[IP_ADAPTER_ADDRESSES_LH] = "_IP_ADAPTER_ADDRESSES_LH",
	[MIB_IFTABLE] = "_MIB_IFTABLE",
	[MIB_ANYCASTIPADDRESS_TABLE] = "_MIB_ANYCASTIPADDRESS_TABLE",
	[MIB_IFROW] = "_MIB_IFROW",
	[MIB_TCP6ROW_OWNER_MODULE] = "_MIB_TCP6ROW_OWNER_MODULE",
	[MIB_IF_ROW2] = "_MIB_IF_ROW2",
	[MIB_TCPROW_OWNER_MODULE] = "_MIB_TCPROW_OWNER_MODULE",
	[IP_UNIDIRECTIONAL_ADAPTER_ADDRESS] = "_IP_UNIDIRECTIONAL_ADAPTER_ADDRESS",
	[SOCKADDR_IN6] = "sockaddr_in6",
	[MIB_IFSTACK_TABLE] = "_MIB_IFSTACK_TABLE",
	[MIB_UDP6TABLE] = "_MIB_UDP6TABLE",
	[SOCKADDR_IN6_PAIR] = "_sockaddr_in6_pair",
	[MIB_UDPTABLE] = "_MIB_UDPTABLE",
	[SECURITY_ATTRIBUTES] = "_SECURITY_ATTRIBUTES",
	[INPUT_RECORD] = "_INPUT_RECORD",
	[NLSVERSIONINFO] = "_nlsversioninfo",
	[SMALL_RECT] = "_SMALL_RECT",
	[COORD] = "_COORD",
	[CHAR_INFO] = "_CHAR_INFO",
	[FILETIME] = "_FILETIME",
	[TIME_DYNAMIC_ZONE_INFORMATION] = "_TIME_DYNAMIC_ZONE_INFORMATION",
	[CONTEXT] = "_CONTEXT",
	[RTL_CRITICAL_SECTION] = "_RTL_CRITICAL_SECTION",
	[PROCESSOR_NUMBER] = "_PROCESSOR_NUMBER",
	[COMPUTER_NAME_FORMAT] = "_COMPUTER_NAME_FORMAT",
	[TAGHEAPLIST32] = "tagHEAPLIST32",
	[NLSVERSIONINFOEX] = "_nlsversioninfoex",
	[SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION] = "_SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION",
	[TAGACTCTX_SECTION_KEYED_DATA] = "tagACTCTX_SECTION_KEYED_DATA",
	[HEAP_INFORMATION_CLASS] = "_HEAP_INFORMATION_CLASS",
	[TAGMODULEENTRY32] = "tagMODULEENTRY32",
	[TAGPROCESSENTRY32] = "tagPROCESSENTRY32",
	[CONSOLE_READCONSOLE_CONTROL] = "_CONSOLE_READCONSOLE_CONTROL",
	[TP_CALLBACK_ENVIRON_V3] = "_TP_CALLBACK_ENVIRON_V3",
	[CONSOLE_CURSOR_INFO] = "_CONSOLE_CURSOR_INFO",
	[GROUP_AFFINITY] = "_GROUP_AFFINITY",
	[RTL_SRWLOCK] = "_RTL_SRWLOCK",
	[WOW64_LDT_ENTRY] = "_WOW64_LDT_ENTRY",
	[FINDEX_INFO_LEVELS] = "_FINDEX_INFO_LEVELS",
	[FINDEX_SEARCH_OPS] = "_FINDEX_SEARCH_OPS",
	[COMSTAT] = "_COMSTAT",
	[NORM_FORM] = "_NORM_FORM",
	[EXCEPTION_RECORD] = "_EXCEPTION_RECORD",
	[TIME_ZONE_INFORMATION] = "_TIME_ZONE_INFORMATION",
	[SYSTEMTIME] = "_SYSTEMTIME",
	[FILEMUIINFO] = "_FILEMUIINFO",
	[CONSOLE_FONT_INFOEX] = "_CONSOLE_FONT_INFOEX",
	[SYSTEM_INFO] = "_SYSTEM_INFO",
	[COMMTIMEOUTS] = "_COMMTIMEOUTS",
	[JOB_SET_ARRAY] = "_JOB_SET_ARRAY",
	[MEMORYSTATUS] = "_MEMORYSTATUS",
	[PROCESS_HEAP_ENTRY] = "_PROCESS_HEAP_ENTRY",
	[TAGTHREADENTRY32] = "tagTHREADENTRY32",
	[FILE_INFO_BY_HANDLE_CLASS] = "_FILE_INFO_BY_HANDLE_CLASS",
	[REASON_CONTEXT] = "_REASON_CONTEXT",
	[SLIST_HEADER] = "_SLIST_HEADER",
	[COMMCONFIG] = "_COMMCONFIG",
	[OSVERSIONINFOEXA] = "_OSVERSIONINFOEXA",
	[OSVERSIONINFOEXW] = "_OSVERSIONINFOEXW",
	[OVERLAPPED_ENTRY] = "_OVERLAPPED_ENTRY",
	[LOGICAL_PROCESSOR_RELATIONSHIP] = "_LOGICAL_PROCESSOR_RELATIONSHIP",
	[SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX] = "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX",
	[RTL_CONDITION_VARIABLE] = "_RTL_CONDITION_VARIABLE",
	[CONSOLE_HISTORY_INFO] = "_CONSOLE_HISTORY_INFO",
	[OFSTRUCT] = "_OFSTRUCT",
	[MEMORYSTATUSEX] = "_MEMORYSTATUSEX",
	[CURRENCYFMTW] = "_currencyfmtW",
	[NUMBERFMTW] = "_numberfmtW",
	[STREAM_INFO_LEVELS] = "_STREAM_INFO_LEVELS",
	[FILE_SEGMENT_ELEMENT] = "_FILE_SEGMENT_ELEMENT",
	[CONSOLE_FONT_INFO] = "_CONSOLE_FONT_INFO",
	[WIN32_FIND_DATAA] = "_WIN32_FIND_DATAA",
	[WIN32_FIND_DATAW] = "_WIN32_FIND_DATAW",
	[LARGE_INTEGER] = "_LARGE_INTEGER",
	[CPINFOEXA] = "_cpinfoexA",
	[CPINFOEXW] = "_cpinfoexW",
	[EXCEPTION_POINTERS] = "_EXCEPTION_POINTERS",
	[JOBOBJECTINFOCLASS] = "_JOBOBJECTINFOCLASS",
	[DCB] = "_DCB",
	[PERFORMANCE_INFORMATION] = "_PERFORMANCE_INFORMATION",
	[STARTUPINFOW] = "_STARTUPINFOW",
	[PROCESS_INFORMATION] = "_PROCESS_INFORMATION",
	[RTL_RUN_ONCE] = "_RTL_RUN_ONCE",
	[STARTUPINFOA] = "_STARTUPINFOA",
	[CURRENCYFMTA] = "_currencyfmtA",
	[TAGMODULEENTRY32W] = "tagMODULEENTRY32W",
	[CONSOLE_SCREEN_BUFFER_INFO] = "_CONSOLE_SCREEN_BUFFER_INFO",
	[CONSOLE_SCREEN_BUFFER_INFOEX] = "_CONSOLE_SCREEN_BUFFER_INFOEX",
	[ULARGE_INTEGER] = "_ULARGE_INTEGER",
	[POWER_REQUEST_TYPE] = "_POWER_REQUEST_TYPE",
	[TP_POOL_STACK_INFORMATION] = "_TP_POOL_STACK_INFORMATION",
	[MEMORY_BASIC_INFORMATION] = "_MEMORY_BASIC_INFORMATION",
	[LATENCY_TIME] = "LATENCY_TIME",
	[LDT_ENTRY] = "_LDT_ENTRY",
	[OSVERSIONINFOA] = "_OSVERSIONINFOA",
	[CPINFO] = "_cpinfo",
	[GET_FILEEX_INFO_LEVELS] = "_GET_FILEEX_INFO_LEVELS",
	[PROCESS_MEMORY_COUNTERS] = "_PROCESS_MEMORY_COUNTERS",
	[CONSOLE_SELECTION_INFO] = "_CONSOLE_SELECTION_INFO",
	[WOW64_CONTEXT] = "_WOW64_CONTEXT",
	[SYSTEM_POWER_STATUS] = "_SYSTEM_POWER_STATUS",
	[OSVERSIONINFOW] = "_OSVERSIONINFOW",
	[TAGHEAPENTRY32] = "tagHEAPENTRY32",
	[SINGLE_LIST_ENTRY] = "_SINGLE_LIST_ENTRY",
	[FILE_ID_DESCRIPTOR] = "FILE_ID_DESCRIPTOR",
	[MODULEINFO] = "_MODULEINFO",
	[TAGPROCESSENTRY32W] = "tagPROCESSENTRY32W",
	[PSAPI_WS_WATCH_INFORMATION] = "_PSAPI_WS_WATCH_INFORMATION",
	[DEBUG_EVENT] = "_DEBUG_EVENT",
	[NUMBERFMTA] = "_numberfmtA",
	[SYSTEM_LOGICAL_PROCESSOR_INFORMATION] = "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION",
	[BY_HANDLE_FILE_INFORMATION] = "_BY_HANDLE_FILE_INFORMATION",
	[MEMORY_RESOURCE_NOTIFICATION_TYPE] = "_MEMORY_RESOURCE_NOTIFICATION_TYPE",
	[PSAPI_WS_WATCH_INFORMATION_EX] = "_PSAPI_WS_WATCH_INFORMATION_EX",
	[PERFORMANCE_DATA] = "_PERFORMANCE_DATA",
	[IO_COUNTERS] = "_IO_COUNTERS",
	[COMMPROP] = "_COMMPROP",
	[TAGACTCTXA] = "tagACTCTXA",
	[TAGACTCTXW] = "tagACTCTXW",
	[WER_REGISTER_FILE_TYPE] = "_WER_REGISTER_FILE_TYPE",
	[HEAP_SUMMARY] = "_HEAP_SUMMARY",
	[GENERIC_MAPPING] = "_GENERIC_MAPPING",
	[ACL] = "_ACL",
	[WELL_KNOWN_SID_TYPE] = "WELL_KNOWN_SID_TYPE",
	[TOKEN_PRIVILEGES] = "_TOKEN_PRIVILEGES",
	[TOKEN_INFORMATION_CLASS] = "_TOKEN_INFORMATION_CLASS",
	[SECURITY_IMPERSONATION_LEVEL] = "_SECURITY_IMPERSONATION_LEVEL",
	[PRIVILEGE_SET] = "_PRIVILEGE_SET",
	[ACL_INFORMATION_CLASS] = "_ACL_INFORMATION_CLASS",
	[OBJECT_TYPE_LIST] = "_OBJECT_TYPE_LIST",
	[LUID] = "_LUID",
	[TOKEN_TYPE] = "_TOKEN_TYPE",
	[AUDIT_EVENT_TYPE] = "_AUDIT_EVENT_TYPE",
	[SID_IDENTIFIER_AUTHORITY] = "_SID_IDENTIFIER_AUTHORITY",
	[SID_AND_ATTRIBUTES] = "_SID_AND_ATTRIBUTES",
	[LUID_AND_ATTRIBUTES] = "_LUID_AND_ATTRIBUTES",
	[TOKEN_GROUPS] = "_TOKEN_GROUPS",
    // Added for syscall management  <-----
    [PORT_VIEW] = "_PORT_VIEW",
    [WAIT_TYPE] = "_WAIT_TYPE",
    [SHUTDOWN_ACTION] = "_SHUTDOWN_ACTION" ,
    [PCRM_PROTOCOL_ID] = "_PCRM_PROTOCOL_ID",
    [SYSDBG_COMMAND] = "_SYSDBG_COMMAND",
    [LANGID] = "_LANGID",
    [FILE_IO_COMPLETION_INFORMATION] = "_FILE_IO_COMPLETION_INFORMATION",
    [VDMSERVICECLASS] = "_VDMSERVICECLASS",
    [TIMER_SET_INFORMATION_CLASS] = "_TIMER_SET_INFORMATION_CLASS",
    [DBGUI_WAIT_STATE_CHANGE] = "_DBGUI_WAIT_STATE_CHANGE",
    [MEMORY_INFORMATION_CLASS] = "_MEMORY_INFORMATION_CLASS",
    [EVENT_INFORMATION_CLASS] = "_EVENT_INFORMATION_CLASS",
    [BOOT_OPTIONS] = "_BOOT_OPTIONS" ,
    [EVENT_TRACE_HEADER] = "_EVENT_TRACE_HEADER",
    [FILE_PATH] = "_FILE_PATH",
    [EXECUTION_STATE] = "_EXECUTION_STATE",
    [TIMER_APC_ROUTINE] = "_TIMER_APC_ROUTINE",
    [FS_INFORMATION_CLASS] = "_FS_INFORMATION_CLASS",
    [PS_APC_ROUTINE] = "_PS_APC_ROUTINE",
    [FILE_NETWORK_OPEN_INFORMATION] = "_FILE_NETWORK_OPEN_INFORMATION",
    [NOTIFICATION_MASK] = "_NOTIFICATION_MASK",
    [OBJECT_INFORMATION_CLASS] = "_OBJECT_INFORMATION_CLASS",
    [DEBUGOBJECTINFOCLASS] = "_DEBUGOBJECTINFOCLASS",
    [IO_COMPLETION_INFORMATION_CLASS] = "_IO_COMPLETION_INFORMATION_CLASS",
    [KEY_SET_INFORMATION_CLASS] = "_KEY_SET_INFORMATION_CLASS",
    [KEY_INFORMATION_CLASS] = "_KEY_INFORMATION_CLASS",
    [SECTION_INFORMATION_CLASS] = "_SECTION_INFORMATION_CLASS",
    [SYSTEM_INFORMATION_CLASS] = "_SYSTEM_INFORMATION_CLASS",
    [SEMAPHORE_INFORMATION_CLASS] = "_SEMAPHORE_INFORMATION_CLASS",
    [MUTANT_INFORMATION_CLASS] = "_MUTANT_INFORMATION_CLASS",
    [KEY_VALUE_ENTRY] = "_KEY_VALUE_ENTRY",
    [RESOURCEMANAGER_INFORMATION_CLASS] = "_RESOURCEMANAGER_INFORMATION_CLASS",
    [TIMER_INFORMATION_CLASS] = "_TIMER_INFORMATION_CLASS",
    [SECURITY_INFORMATION] = "_SECURITY_INFORMATION",
    [THREADINFOCLASS] = "_THREADINFOCLASS",
    [FILE_INFORMATION_CLASS] = "_FILE_INFORMATION_CLASS",
    [WORKERFACTORYINFOCLASS] = "_WORKERFACTORYINFOCLASS",
    [TRANSACTION_INFORMATION_CLASS] = "_TRANSACTION_INFORMATION_CLASS",
    [TRANSACTIONMANAGER_INFORMATION_CLASS] = "_TRANSACTIONMANAGER_INFORMATION_CLASS",
    [PORT_INFORMATION_CLASS] = "_PORT_INFORMATION_CLASS",
    [PROCESSINFOCLASS] = "_PROCESSINFOCLASS",
    [POWER_INFORMATION_LEVEL] = "_POWER_INFORMATION_LEVEL",
    [PORT_MESSAGE] = "_PORT_MESSAGE",
    [ENLISTMENT_INFORMATION_CLASS] = "_ENLISTMENT_INFORMATION_CLASS",
    [ATOM_INFORMATION_CLASS] = "_ATOM_INFORMATION_CLASS",
    [EVENT_TYPE] = "_EVENT_TYPE",
    [FILE_BASIC_INFORMATION] = "FILE_BASIC_INFORMATION",
    [PROCESS_CREATE_INFO] = "_PROCESS_CREATE_INFO",
    [PLUGPLAY_CONTROL_CLASS] = "_PLUGPLAY_CONTROL_CLASS",
    [RTL_USER_PROCESS_PARAMETERS] = "_RTL_USER_PROCESS_PARAMETERS",
    [CLIENT_ID] = "_CLIENT_ID",
    [WIN32_PROTECTION_MASK] = "_WIN32_PROTECTION_MASK",
    [SYSTEM_POWER_STATE] = "_SYSTEM_POWER_STATE",
    [POWER_ACTION] = "_POWER_ACTION",
    [SECTION_INHERIT] = "_SECTION_INHERIT",
    [IO_SESSION_STATE] = "_IO_SESSION_STATE",
    [LCID] = "_LCID",
    [KTMOBJECT_TYPE] = "_KTMOBJECT_TYPE",
    [TRANSACTION_NOTIFICATION] = "_TRANSACTION_NOTIFICATION",
    [TOKEN_OWNER] = "_TOKEN_OWNER",
    [DEVICE_POWER_STATE] = "_DEVICE_POWER_STATE",
    [TOKEN_DEFAULT_DACL] = "_TOKEN_DEFAULT_DACL",
    [KPROFILE_SOURCE] = "_KPROFILE_SOURCE",
    [PLUGPLAY_EVENT_BLOCK] = "_PLUGPLAY_EVENT_BLOCK",
    [KEY_VALUE_INFORMATION_CLASS] = "_KEY_VALUE_INFORMATION_CLASS",
    [PROCESS_ATTRIBUTE_LIST] = "_PROCESS_ATTRIBUTE_LIST",
    [APPHELPCOMMAND] = "_APPHELPCOMMAND",
    [KTMOBJECT_CURSOR] = "_KTMOBJECT_CURSOR",
    [TIMER_TYPE] = "_TIMER_TYPE",
    [IO_APC_ROUTINE] = "_IO_APC_ROUTINE",
    [TOKEN_SOURCE] = "_TOKEN_SOURCE",
    [TOKEN_PRIMARY_GROUP] = "_TOKEN_PRIMARY_GROUP",
    [REMOTE_PORT_VIEW] = "_REMOTE_PORT_VIEW",
    [INITIAL_TEB] = "_INITIAL_TEB",
    [KAFFINITY] = "_KAFFINITY",
    [PS_ATTRIBUTE_LIST] = "_PS_ATTRIBUTE_LIST",
    [TOKEN_USER]  = "_TOKEN_USER",
    [SECURITY_DESCRIPTOR] = "_SECURITY_DESCRIPTOR",
    [ACCESS_MASK] = "_ACCESS_MASK",
    [SECURITY_QUALITY_OF_SERVICE] = "_SECURITY_QUALITY_OF_SERVICE",
    [SID] = "_SID",
    [ALPC_SECURITY_ATTR] = "_ALPC_SECURITY_ATTR",
    [BOOT_ENTRY] = "_BOOT_ENTRY",
    [IO_STATUS_BLOCK] = "_IO_STATUS_BLOCK",
    [RTL_ATOM] = "_RTL_ATOM",
    [EFI_DRIVER_ENTRY] = " _EFI_DRIVER_ENTRY",
    [ALPC_DATA_VIEW_ATTR] = "_ALPC_DATA_VIEW_ATTR",
    [ALPC_MESSAGE_INFORMATION_CLASS] = "_ALPC_MESSAGE_INFORMATION_CLASS",
    [ALPC_MESSAGE_ATTRIBUTES] = "_ALPC_MESSAGE_ATTRIBUTES",
    [ALPC_PORT_INFORMATION_CLASS] = "_ALPC_PORT_INFORMATION_CLASS",
    [ALPC_HANDLE] = "_ALPC_HANDLE",
    [OBJECT_ATTRIBUTES] = "_OBJECT_ATTRIBUTES",
    [ALPC_CONTEXT_ATTR] = "_ALPC_CONTEXT_ATTR",
    [MEMORY_RESERVE_TYPE] = "_MEMORY_RESERVE_TYPE",
    [ALPC_PORT_ATTRIBUTES] = "_ALPC_PORT_ATTRIBUTES",
};

/**
 * @brief list of fundamental types
 */
typedef enum : uint16_t
{
    SIGNED_BYTE, 			//1 byte
    UNSIGNED_BYTE,			//1 byte
    SIGNED_WORD,			//2 byte
    UNSIGNED_WORD,			//2 byte
    SIGNED_DOUBLE_WORD,		//4 byte
    UNSIGNED_DOUBLE_WORD,	//4 byte
    SIGNED_QUAD_WORD,		//8 byte
    UNSIGNED_QUAD_WORD,		//8 byte
    FLOAT,					//4 bytes
    DOUBLE, 				//8 bytes
    LONG_DOUBLE,			//8 bytes
    VOID,					//address (4bytes)
    ANSI_CHAR,				//1 byte (similar to ascii)
    WIDE_CHAR,				//2 bytes (unicode)

    NTSTATUS,

    STRUCT,
    UNION,
    TYPEDEF,
    ARRAY,
    REFERENCE,
    ENUMERATION,

    MISSING,
    __TYPE_MAX,

    //for bitmask
    POINTER = 0xF000,
    POINTER_POINTER = 0xFF00,
} type_t;

/**
 * @brief list of argument directions
 */
typedef enum : uint8_t
{
    IN,
    OUT,
    INOUT,
    UNK,
    __ARG_DIR_MAX,
} arg_dir_t;

/**
 * @brief  names of the argument directions
 */
static const char* arg_dir_names[__ARG_DIR_MAX] =
{
    [IN] = "(IN)",
    [OUT] = "(OUT)",
    [INOUT] = "(INOUT)",
    [UNK] = "(UNK)",
};

/**
 * @brief it describes an apicall or a syscall argument
 *
 * @member name, name of the argument
 * @member size, size in bytes of the argument
 * @member struct_type, type of the structure if any, otherwise FUNDAMENTAL_TYPE
 * @member type, type of the argument. In order to handle pointers to some types,
 * 				(i.e. POINTER | STRUCT), it is a uint16_t to take advantage of
 * 				multiple bitmasks mechanism
 * @member type, type of the argument
 * @member arg_dir, direction of the argument
 *
 */
typedef struct
{
    const char*     name;
    int             size;
    struct_type_t   struct_type;
    uint16_t        type;
    arg_dir_t       arg_dir;
} arg_t;

//  +---------------------------------------+
//  |      Structures for API tracing       |
//  +---------------------------------------+

/**
 * @brief list of handled DLLs. For each of them we should a <name_dll>.cpp with
 * the protos
 */
typedef enum : uint8_t
{
	NTDLL,
	KERNELBASE,
	KERNEL32,
	IPHLPAPI,
	__DLL_MAX,
	UNDEFINED
} dll_id_t;

/**
 * @brief an apicall information context for sharing information between an on-entry 
 * and an on-exit callback, exploiting [void* drakvuf_trap_t->data] payload mechanism.
 * It is associated to one single apicall. It is created on-entry and destroyed on-exit.
 * 
 * @member target_pid, PID of the caller on-entry. Used for verification mechanism upon 
 * 					entering on-exit callback
 * @member ret_vaddr, return virtual address of the associated apicall ([rsp] @ on-entry)
 * @member target_thread, TID of the caller on-entry. Used for verification mechanism
 * 					upon entering on-exit callback
 * @member target_cr3, physical address of the base address of the page directory table
 * 					of the caller process on-entry. Used for verification mechanism
 * 					upon entering on-exit callback
 * @member monitored_args, an ordered list of virtual addresses associated to each
 * 						apicall's argument. This is filled on-entry.
 * @member info_apicall, is a pointer to an apicall_t (faster lookup)
 * @member ret_traps, a list of ret traps
 * 
 */
struct apicall_context
{
	vmi_pid_t   target_pid;
    addr_t      ret_vaddr;						// useless in ret instrumentation
    addr_t      target_thread;
    reg_t       target_cr3;
    addr_t      monitored_args[MAX_HANDLED_ARGS];
    void*       info_apicall;
	std::vector<drakvuf_trap_t*>	ret_traps;	//useless in [rsp] procedure
};

typedef struct apicall_context* apicall_context_t;

/**
 * @brief an apicall prototype.
 * 
 * @member args, list of argument structures
 * @member rets_rva, list of rets relative virtual addresses. If it isn't present, then
 * 					its body is present in some other DLLs, expressed in "jump_in" field
 * @member name, apicall's name
 * @member jump_in_api_name, name of the apicall in an other DLL towards which current
 * 							apicall jumps. This is present iff jump_in != UNDEFINED
 * @member rva, relative virtual address of the entry point
 * @member return_type, type of the return value
 * @member return_size, size in bytes of the return value
 * @member jump_in, DLL towards which current apicalla jumps in. This is present iff
 * 					there are not rets
 * @member nargs, number of arguments
 */
typedef struct
{
    arg_t               args[MAX_HANDLED_ARGS];
    addr_t              rets_rva[MAX_HANDLED_RETS];
    const char*         name;
    const char*			jump_in_api_name; 	// useless in [rsp] procedure
	addr_t              rva;    			// not used for now, since are taken from Rekall profile
    uint16_t            return_type;
    uint8_t             return_size;
    dll_id_t            jump_in;			// useless in [rsp] procedure
    uint8_t             nargs;
} apicall_t;

/**
 * @brief list of apicalls per DLL.
 * They are defined in specific <dll_name>.cpp files
 */
extern apicall_t iphlpapi_apicalls[];
extern int iphlpapi_apicalls_size;
extern apicall_t kernel32_apicalls[];
extern int kernel32_apicalls_size;
extern apicall_t kernelbase_apicalls[];
extern int kernelbase_apicalls_size;

/**
 * @brief DLL prototypes
 * 
 * @member apicalls, a list of handled apicall prototypes
 * @member name, DLL's name
 * @member base_address, base virtual address of the DLL
 * @member max_address, end virtual address of the DLL
 * @member apicall_size, number of handled apicalls prototypes
 */
typedef struct
{
    apicall_t*      apicalls;
    const char*     name;
    addr_t          base_address = 0;	// filled at runtime
    addr_t          max_address = 0;	// filled at runtime
    int             apicalls_size;
} dll_t;

/**
 * @brief list of handled DLLs.
 * Note that we can have entries not fully filled (this is the case when some apicall
 * jumps into a DLL for which we don't have a <dll_name>.cpp prototype)
 */
static dll_t dlls[__DLL_MAX] =
{
	[IPHLPAPI] =
		{
			.name = "iphlpapi.dll", .apicalls = iphlpapi_apicalls, .apicalls_size = iphlpapi_apicalls_size
		},
	[KERNEL32] =
		{
			.name = "kernel32.dll", .apicalls = kernel32_apicalls, .apicalls_size = kernel32_apicalls_size
		},
	[KERNELBASE] =
		{
			.name = "kernelbase.dll", .apicalls = kernelbase_apicalls, .apicalls_size = kernelbase_apicalls_size
		},
    [NTDLL] =
        {
            .name = "ntdll.dll"
        }
};

//  +---------------------------------------+
//  |     Structures for syscall tracing    |
//  +---------------------------------------+

/**
 * @brief a syscall information context for sharing information between an on-entry 
 * and an on-exit callback, exploiting [void* drakvuf_trap_t->data] payload mechanism.
 * It is associated to one single syscall. It is created on-entry and destroyed on-exit.
 * 
 * @member target_rsp, rsp value of the caller on-entry. Used for verification 
 * 					mechanism upon entering on-exit callback
 * @member ret_vaddr, return virtual address of the associated apicall ([rsp] @ on-entry)
 * @member target_thread, TID of the caller on-entry. Used for verification mechanism
 * 					upon entering on-exit callback
 * @member target_cr3, physical address of the base address of the page directory table
 * 					of the caller process on-entry. Used for verification mechanism
 * 					upon entering on-exit callback
 * @member monitored_args, an ordered list of virtual addresses associated to each
 * 						syscall's argument. This is filled on-entry.
 * @member info_syscall, is a pointer to a syscall_t (faster lookup)
 */
struct syscall_context
{
    addr_t  ret_vaddr;
    addr_t  monitored_args[MAX_SYS_HANDLED_ARGS];
    addr_t  target_thread; // NOTE: they are addresses not uint32_t!
    addr_t  target_rsp;
    reg_t   target_cr3;
    void*   info_syscall;
};

typedef struct syscall_context* syscall_context_t;

/**
 * @brief a syscall prototype.
 * 
 * @member args, list of argument structures
 * @member name, apicall's name
 * @member *specific_ret_proc, a function pointer to a specific procedure to be called on-exit callback
 * @member return_type, type of the return value
 * @member nargs, number of arguments
 */
typedef struct
{
    arg_t			args[MAX_SYS_HANDLED_ARGS];
	const char*		name;
	void(*specific_ret_proc)(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context); // some syscalls requires an extra work in ret callback
	uint16_t        return_type;
    uint8_t         nargs;
} syscall_t;

/**
 * @brief list of syscalls prototypes defined in <dll_name>.cpp
 */
extern syscall_t syscalls[];
extern int syscalls_size;

//  +------------------------------------------------+
//  |    Structures for target process monitoring    |
//  +------------------------------------------------+

/**
 * @brief a process to monitor (main of infected)
 *
 * @member is_main target, used to determine if the target process is a main process 
 * 						(process for which we're interested in all its TIDs) or an 
 * 						infected process (a process for which we're interested only 
 * 						in those TIDs created by a main process through a call to
 *						NtCreateThreadEx or by other injected TIDs)
 * @member name, name of the target process.
 * @member infected_by, name of the process that makes the current process
 *              infected. This value is present iff the target process is not main.
 * @member pid, PID of the target process. For a main process, can happen that 
 * 				(for a certain period) it has no PID because was not found yet
 * @member tids, a vector of TIDs to monitor for the target process.
 *              This is updated in NtCreateThreadEx/NtTerminateThread specific 
 * 				procedures. Note that in case of main processes we're interested in
 *              all TIDs. In case of infected, to a subset (injected ones)
 * @member terminated_tids, a vector of TIDs that were monitored but exited/
 * 							were terminated
 */
struct target_process
{
    uint8_t         is_main_target = 0;
    const char*     name;
    const char*     infected_by; 		// present iff is_main_target = 0
    vmi_pid_t       pid;
    std::vector<vmi_pid_t> tids;
    std::vector<vmi_pid_t> terminated_tids;
};

typedef struct target_process* target_process_t;

//  +---------------------------------------------------+
//  |     Structures for shadow callstack management    |
//  +---------------------------------------------------+

/**
 * @brief entry of the shadow callstack associated to an apicall
 * 
 * @member dereferenced_rsp, [rsp] address
 * @member rsp, rsp address
 * @member data, pointer to an apicall_t
 */
typedef struct {
	addr_t	dereferenced_rsp;
	addr_t	rsp;
	void*	data;
} callinfo_t;

typedef std::vector<callinfo_t> callstack;

/**
 * @brief a shadow thread local storage for a monitored thread
 * 
 * @member cstack, the shadow callstack associated to a particular thread
 * @member tid, TID
 */
typedef struct {
	callstack 	cstack;
	uint32_t	tid;
} tlsinfo_t;

//  +------------------------------------------------+
//  |     Structures for DLL binary interval tree    |
//  +------------------------------------------------+

/**
 * @brief a DLL node of the binary interval tree
 * 
 * @member start_addr, base address of the DLL
 * @member end_addr, end address of the DLL
 * @member dll_name, name of the DLL
 * @member gt, subtree with greater addresses
 * @member lt, subtree with lower addresses
 */
typedef struct node {
	addr_t			start_addr, end_addr;	// range [a, b]
	const char*		dll_name;
	struct node		*gt, *lt;
} node_t;


#endif