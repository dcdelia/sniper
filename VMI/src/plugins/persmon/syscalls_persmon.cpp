#include "private.h"

/**
 * @brief specific procedures to be called on during exit handler. They are defined in persmon.cpp file
 */
extern void proc_NtTerminateThread(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context);
extern void proc_NtResumeThread(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context);
extern void proc_NtCreateThreadEx(drakvuf_t drakvuf, drakvuf_trap_info_t* info, syscall_context_t context);

/**
 * @brief prototypes for Syscalls.
 * Some rules that are followed:
 * 		-	considering args, if size = 999 means that it is UNKNOWN
 * 		-	considering args, if size<=0 means that the size of that parameter
 * 			depends on the value of another parameter that is in position <size>
 * 			(i.e. size = -3 means that the size is the value stored by the parameter 3)
 * 
 */
syscall_t syscalls[] = 
{
	{ .name = "NtFlushProcessWriteBuffers", .return_type = NTSTATUS, .nargs = 0 }, 
	{ .name = "NtGetCurrentProcessorNumber", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtGetEnvironmentVariableEx", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Missing", .size = 999, .type = MISSING, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
		}
	},
	{
		 .name = "NtIsSystemResumeAutomatic", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Missing", .size = 999, .type = MISSING, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
		}
	},
	{
		 .name = "NtQueryEnvironmentVariableInfoEx", .return_type = MISSING, .nargs = 1, .args =
		{
			{.name = "Missing", .size = 999, .type = MISSING, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
		}
	},
	{
		 .name = "NtAcceptConnectPort", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PortContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ConnectionRequest", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "AcceptConnection", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ServerView", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_VIEW, .arg_dir = INOUT},
			{.name = "ClientView", .size = 12, .type = STRUCT | POINTER, .struct_type = REMOTE_PORT_VIEW, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheckAndAuditAlarm", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "GenericMapping", .size = 16, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheckByTypeAndAuditAlarm", .return_type = NTSTATUS, .nargs = 16, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "AuditType", .size = 4, .type = STRUCT | POINTER, .struct_type = AUDIT_EVENT_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .size = 8, .type = STRUCT | POINTER, .struct_type = OBJECT_TYPE_LIST, .arg_dir = IN},
			{.name = "ObjectTypeListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .size = 16, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheckByType", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectTypeList", .size = 8, .type = STRUCT | POINTER, .struct_type = OBJECT_TYPE_LIST, .arg_dir = IN},
			{.name = "ObjectTypeListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .size = 16, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "PrivilegeSet", .size = 20, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = OUT},
			{.name = "PrivilegeSetLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheckByTypeResultListAndAuditAlarmByHandle", .return_type = NTSTATUS, .nargs = 17, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "AuditType", .size = 4, .type = STRUCT | POINTER, .struct_type = AUDIT_EVENT_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .size = 8, .type = STRUCT | POINTER, .struct_type = OBJECT_TYPE_LIST, .arg_dir = IN},
			{.name = "ObjectTypeListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .size = 16, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheckByTypeResultListAndAuditAlarm", .return_type = NTSTATUS, .nargs = 16, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "AuditType", .size = 4, .type = STRUCT | POINTER, .struct_type = AUDIT_EVENT_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .size = 8, .type = STRUCT | POINTER, .struct_type = OBJECT_TYPE_LIST, .arg_dir = IN},
			{.name = "ObjectTypeListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .size = 16, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheckByTypeResultList", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectTypeList", .size = 8, .type = STRUCT | POINTER, .struct_type = OBJECT_TYPE_LIST, .arg_dir = IN},
			{.name = "ObjectTypeListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .size = 16, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "PrivilegeSet", .size = 20, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = OUT},
			{.name = "PrivilegeSetLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAccessCheck", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "SecurityDescriptor", .size = 4, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "GenericMapping", .size = 4, .type = STRUCT | POINTER, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "PrivilegeSet", .size = 4, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = OUT},
			{.name = "PrivilegeSetLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT | POINTER, .struct_type = ACCESS_MASK, .arg_dir = OUT},
			{.name = "AccessStatus", .size = 4, .type = NTSTATUS | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAddAtom", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "AtomName", .size = -1, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Atom", .size = 2, .type = STRUCT | POINTER, .struct_type = RTL_ATOM, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAddBootEntry", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "BootEntry", .size = 8, .type = STRUCT | POINTER, .struct_type = BOOT_ENTRY, .arg_dir = IN},
			{.name = "Id", .size = 8, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAddDriverEntry", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "DriverEntry", .size = 8, .type = STRUCT | POINTER, .struct_type = EFI_DRIVER_ENTRY, .arg_dir = IN},
			{.name = "Id", .size = 8, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAdjustGroupsToken", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResetToDefault", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewState", .size = 12, .type = STRUCT | POINTER, .struct_type = TOKEN_GROUPS, .arg_dir = IN},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .size = -3, .type = STRUCT | POINTER, .struct_type = TOKEN_GROUPS, .arg_dir = OUT},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAdjustPrivilegesToken", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DisableAllPrivileges", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewState", .size = 16, .type = STRUCT | POINTER, .struct_type = TOKEN_PRIVILEGES, .arg_dir = IN},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .size = -3, .type = STRUCT | POINTER, .struct_type = TOKEN_PRIVILEGES, .arg_dir = OUT},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAlertResumeThread", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousSuspendCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAlertThread", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAllocateLocallyUniqueId", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Luid", .size = 8, .type = STRUCT | POINTER, .struct_type = LUID, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAllocateReserveObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "MemoryReserveHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Type", .size = 999, .type = STRUCT, .struct_type = MEMORY_RESERVE_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAllocateUserPhysicalPages", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "UserPfnArra;", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAllocateUuids", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "Time", .size = 8, .type = UNSIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Range", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Sequence", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Seed", .size = 1, .type = ANSI_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAllocateVirtualMemory", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ZeroBits", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AllocationType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Protect", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcAcceptConnectPort", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ConnectionPortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "PortAttributes", .size = 44, .type = STRUCT | POINTER, .struct_type = ALPC_PORT_ATTRIBUTES, .arg_dir = IN},
			{.name = "PortContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ConnectionRequest", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "ConnectionMessageAttributes", .size = 8, .type = STRUCT | POINTER, .struct_type = ALPC_MESSAGE_ATTRIBUTES, .arg_dir = INOUT},
			{.name = "AcceptConnection", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcCancelMessage", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MessageContext", .size = 20, .type = STRUCT | POINTER, .struct_type = ALPC_CONTEXT_ATTR, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcConnectPort", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PortName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "PortAttributes", .size = 44, .type = STRUCT | POINTER, .struct_type = ALPC_PORT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequiredServerSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "ConnectionMessage", .size = -7, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = INOUT},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "OutMessageAttributes", .size = 8, .type = STRUCT | POINTER, .struct_type = ALPC_MESSAGE_ATTRIBUTES, .arg_dir = INOUT},
			{.name = "InMessageAttributes", .size = 8, .type = STRUCT | POINTER, .struct_type = ALPC_MESSAGE_ATTRIBUTES, .arg_dir = INOUT},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcCreatePort", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "PortAttributes", .size = 44, .type = STRUCT | POINTER, .struct_type = ALPC_PORT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcCreatePortSection", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AlpcSectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = ALPC_HANDLE, .arg_dir = OUT},
			{.name = "ActualSectionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAlpcCreateResourceReserve", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "MessageSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResourceId", .size = 4, .type = STRUCT | POINTER, .struct_type = ALPC_HANDLE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAlpcCreateSectionView", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "ViewAttributes", .size = 16, .type = STRUCT | POINTER, .struct_type = ALPC_DATA_VIEW_ATTR, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtAlpcCreateSecurityContext", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "SecurityAttribute", .size = 20, .type = STRUCT | POINTER, .struct_type = ALPC_SECURITY_ATTR, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtAlpcDeletePortSection", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "SectionHandle", .size = 4, .type = STRUCT, .struct_type = ALPC_HANDLE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcDeleteResourceReserve", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "ResourceId", .size = 4, .type = STRUCT, .struct_type = ALPC_HANDLE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcDeleteSectionView", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "ViewBase", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcDeleteSecurityContext", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "ContextHandle", .size = 4, .type = STRUCT, .struct_type = ALPC_HANDLE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcDisconnectPort", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcImpersonateClientOfPort", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "Reserved", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
		}
	},
	{
		 .name = "NtAlpcOpenSenderProcess", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcOpenSenderThread", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcQueryInformation", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortInformationClass", .size = 999, .type = STRUCT, .struct_type = ALPC_PORT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "PortInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAlpcQueryInformationMessage", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "MessageInformationClass", .size = 999, .type = STRUCT, .struct_type = ALPC_MESSAGE_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "MessageInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtAlpcRevokeSecurityContext", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "ContextHandle", .size = 4, .type = STRUCT, .struct_type = ALPC_HANDLE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcSendWaitReceivePort", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SendMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "SendMessageAttributes", .size = 8, .type = STRUCT | POINTER, .struct_type = ALPC_MESSAGE_ATTRIBUTES, .arg_dir = IN},
			{.name = "ReceiveMessage", .size = -5, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = INOUT},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReceiveMessageAttributes", .size = 8, .type = STRUCT | POINTER, .struct_type = ALPC_MESSAGE_ATTRIBUTES, .arg_dir = INOUT},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAlpcSetInformation", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortInformationClass", .size = 999, .type = STRUCT, .struct_type = ALPC_PORT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "PortInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtApphelpCacheControl", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "type", .size = 4, .type = STRUCT, .struct_type = APPHELPCOMMAND, .arg_dir = IN},
			{.name = "buf", .size = 8, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAreMappedFilesTheSame", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "File1MappedAsAnImage", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "File2MappedAsFile", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtAssignProcessToJobObject", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCallbackReturn", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "OutputBuffer", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutputLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Status", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCancelIoFileEx", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoRequestToCancel", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtCancelIoFile", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtCancelSynchronousIoFile", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoRequestToCancel", .size = 4, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 4, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtCancelTimer", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TimerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CurrentState", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtClearEvent", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtClose", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCloseObjectAuditAlarm", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCommitComplete", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCommitEnlistment", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCommitTransaction", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Wait", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCompactKeys", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyArray[;", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCompareTokens", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "FirstTokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecondTokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Equal", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtCompleteConnectPort", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCompressKey", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtConnectPort", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PortName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityQos", .size = 12, .type = STRUCT | POINTER, .struct_type = SECURITY_QUALITY_OF_SERVICE, .arg_dir = IN},
			{.name = "ClientView", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_VIEW, .arg_dir = INOUT},
			{.name = "ServerView", .size = 12, .type = STRUCT | POINTER, .struct_type = REMOTE_PORT_VIEW, .arg_dir = INOUT},
			{.name = "MaxMessageLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ConnectionInformation", .size = -7, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ConnectionInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtContinue", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ContextRecord", .size = 716, .type = STRUCT | POINTER, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "TestAlert", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateDebugObject", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "DebugObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "KillProcessOnExit", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateDirectoryObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "DirectoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateEnlistment", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NotificationMask", .size = 4, .type = NOTIFICATION_MASK, .arg_dir = IN},
			{.name = "EnlistmentKey", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateEvent", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "EventType", .size = 4, .type = STRUCT, .struct_type = EVENT_TYPE, .arg_dir = IN},
			{.name = "InitialState", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateEventPair", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateFile", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "AllocationSize", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ShareAccess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateDisposition", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EaBuffer", .size = -10, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EaLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateIoCompletion", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateJobObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateJobSet", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "NumJob", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "UserJobSet", .size = 12, .type = STRUCT | POINTER, .struct_type = JOB_SET_ARRAY, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateKeyedEvent", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "KeyedEventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateKey", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "TitleIndex", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "Class", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Disposition", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtCreateKeyTransacted", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "TitleIndex", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = UNK},
			{.name = "Class", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Disposition", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtCreateMailslotFile", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MailslotQuota", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaximumMessageSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReadTimeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateMutant", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "MutantHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "InitialOwner", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateNamedPipeFile", .return_type = NTSTATUS, .nargs = 14, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "ShareAccess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateDisposition", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NamedPipeType", .size = 1, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReadMode", .size = 1, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionMode", .size = 1, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaximumInstances", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InboundQuota", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutboundQuota", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DefaultTimeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreatePagingFile", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "PageFileName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MinimumSize", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaximumSize", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Priority", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreatePort", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "MaxConnectionInfoLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaxMessageLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaxPoolUsage", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreatePrivateNamespace", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "NamespaceHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "BoundaryDescriptor", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateProcessEx", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ParentProcess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DebugPort", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExceptionPort", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobMemberLevel", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateProcess", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ParentProcess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InheritObjectTable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DebugPort", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExceptionPort", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateProfileEx", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "ProfileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Process", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProfileBase", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProfileSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BucketSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -6, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProfileSource", .size = 4, .type = STRUCT, .struct_type = KPROFILE_SOURCE, .arg_dir = IN},
			{.name = "GroupAffinityCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GroupAffinity", .size = 12, .type = STRUCT | POINTER, .struct_type = GROUP_AFFINITY, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateProfile", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "ProfileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Process", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RangeBase", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RangeSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BucketSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = 4, .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProfileSource", .size = 4, .type = STRUCT, .struct_type = KPROFILE_SOURCE, .arg_dir = IN},
			{.name = "Affinity", .size = 4, .type = STRUCT, .struct_type = KAFFINITY, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateResourceManager", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "TmHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RmGuid", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Description", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateSection", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "MaximumSize", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionPageProtection", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AllocationAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateSemaphore", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "SemaphoreHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "InitialCount", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaximumCount", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateSymbolicLinkObject", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "LinkHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "LinkTarget", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateThreadEx", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StartRoutine", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Argument", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateFlags", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ZeroBits", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StackSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaximumStackSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AttributeList", .size = 999, .type = STRUCT | POINTER, .struct_type = PS_ATTRIBUTE_LIST, .arg_dir = IN},
		}, .specific_ret_proc = proc_NtCreateThreadEx
	},
	{
		 .name = "NtCreateThread", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientId", .size = 8, .type = STRUCT | POINTER, .struct_type = CLIENT_ID, .arg_dir = OUT},
			{.name = "ThreadContext", .size = 716, .type = STRUCT | POINTER, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "InitialTeb", .size = 20, .type = STRUCT | POINTER, .struct_type = INITIAL_TEB, .arg_dir = IN},
			{.name = "CreateSuspended", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateTimer", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TimerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "TimerType", .size = 4, .type = STRUCT, .struct_type = TIMER_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateToken", .return_type = NTSTATUS, .nargs = 13, .args =
		{
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "TokenType", .size = 4, .type = STRUCT, .struct_type = TOKEN_TYPE, .arg_dir = IN},
			{.name = "AuthenticationId", .size = 8, .type = STRUCT | POINTER, .struct_type = LUID, .arg_dir = IN},
			{.name = "ExpirationTime", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "User", .size = 8, .type = STRUCT | POINTER, .struct_type = TOKEN_USER, .arg_dir = IN},
			{.name = "Groups", .size = 12, .type = STRUCT | POINTER, .struct_type = TOKEN_GROUPS, .arg_dir = IN},
			{.name = "Privileges", .size = 16, .type = STRUCT | POINTER, .struct_type = TOKEN_PRIVILEGES, .arg_dir = IN},
			{.name = "Owner", .size = 4, .type = STRUCT | POINTER, .struct_type = TOKEN_OWNER, .arg_dir = IN},
			{.name = "PrimaryGroup", .size = 4, .type = STRUCT | POINTER, .struct_type = TOKEN_PRIMARY_GROUP, .arg_dir = IN},
			{.name = "DefaultDacl", .size = 4, .type = STRUCT | POINTER, .struct_type = TOKEN_DEFAULT_DACL, .arg_dir = IN},
			{.name = "TokenSource", .size = 16, .type = STRUCT | POINTER, .struct_type = TOKEN_SOURCE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateTransactionManager", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "TmHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "LogFileName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CommitStrength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateTransaction", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Uow", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "TmHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IsolationLevel", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IsolationFlags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Description", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateUserProcess", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ProcessDesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ThreadDesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ProcessObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ThreadObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ProcessFlags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadFlags", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessParameters", .size = 144, .type = STRUCT | POINTER, .struct_type = RTL_USER_PROCESS_PARAMETERS, .arg_dir = IN},
			{.name = "CreateInfo", .size = 999, .type = STRUCT | POINTER, .struct_type = PROCESS_CREATE_INFO, .arg_dir = IN},
			{.name = "AttributeList", .size = 52, .type = STRUCT | POINTER, .struct_type = PROCESS_ATTRIBUTE_LIST, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateWaitablePort", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "MaxConnectionInfoLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaxMessageLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaxPoolUsage", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtCreateWorkerFactory", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "WorkerFactoryHandleReturn", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "CompletionPortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WorkerProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StartRoutine", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StartParameter", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaxThreadCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StackReserve", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StackCommit", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDebugActiveProcess", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DebugObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtDebugContinue", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "DebugObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ClientId", .size = 8, .type = STRUCT | POINTER, .struct_type = CLIENT_ID, .arg_dir = OUT},
			{.name = "ContinueStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtDelayExecution", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DelayInterval", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteAtom", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Atom", .size = 2, .type = STRUCT, .struct_type = RTL_ATOM, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteBootEntry", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Id", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteDriverEntry", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Id", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteFile", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteKey", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteObjectAuditAlarm", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeletePrivateNamespace", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "NamespaceHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeleteValueKey", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValueName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDeviceIoControlFile", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "IoControlCode", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InputBuffer", .size = 999, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutputBuffer", .size = -9, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "OutputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{ .name = "NtDisableLastKnownGood", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtDisplayString", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "String", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDrawText", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Text", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDuplicateObject", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "SourceProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SourceHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "HandleAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Options", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtDuplicateToken", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ExistingTokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "EffectiveOnly", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenType", .size = 4, .type = STRUCT, .struct_type = TOKEN_TYPE, .arg_dir = IN},
			{.name = "NewTokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{ .name = "NtEnableLastKnownGood", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtEnumerateBootEntries", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Buffer", .size = -1, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtEnumerateDriverEntries", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Buffer", .size = -1, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtEnumerateKey", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Index", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyInformationClass", .size = 999, .type = STRUCT, .struct_type = KEY_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "KeyInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResultLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtEnumerateSystemEnvironmentValuesEx", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "InformationClass", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtEnumerateTransactionObject", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "RootObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "QueryType", .size = 4, .type = STRUCT, .struct_type = KTMOBJECT_TYPE, .arg_dir = IN},
			{.name = "ObjectCursor", .size = -3, .type = STRUCT | POINTER, .struct_type = KTMOBJECT_CURSOR, .arg_dir = INOUT},
			{.name = "ObjectCursorLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtEnumerateValueKey", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Index", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyValueInformationClass", .size = 999, .type = STRUCT, .struct_type = KEY_VALUE_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "KeyValueInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResultLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtExtendSection", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewSectionSize", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtFilterToken", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ExistingTokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SidsToDisable", .size = 12, .type = STRUCT | POINTER, .struct_type = TOKEN_GROUPS, .arg_dir = IN},
			{.name = "PrivilegesToDelete", .size = 16, .type = STRUCT | POINTER, .struct_type = TOKEN_PRIVILEGES, .arg_dir = IN},
			{.name = "RestrictedSids", .size = 12, .type = STRUCT | POINTER, .struct_type = TOKEN_GROUPS, .arg_dir = IN},
			{.name = "NewTokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtFindAtom", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "AtomName", .size = -1, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Atom", .size = 2, .type = STRUCT | POINTER, .struct_type = RTL_ATOM, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtFlushBuffersFile", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtFlushInstallUILanguage", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "InstallUILanguage", .size = 2, .type = STRUCT, .struct_type = LANGID, .arg_dir = IN},
			{.name = "SetComittedFlag", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFlushInstructionCache", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFlushKey", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFlushVirtualMemory", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "IoStatus", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
		}
	},
	{ .name = "NtFlushWriteBuffer", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtFreeUserPhysicalPages", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "UserPfnArra;", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFreeVirtualMemory", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "FreeType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFreezeRegistry", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "TimeOutInSeconds", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFreezeTransactions", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "FreezeTimeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThawTimeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtFsControlFile", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "IoControlCode", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InputBuffer", .size = -7, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutputBuffer", .size = -9, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "OutputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtGetContextThread", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadContext", .size = 716, .type = STRUCT | POINTER, .struct_type = CONTEXT, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtGetDevicePowerState", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Device", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*State", .size = 4, .type = STRUCT, .struct_type = DEVICE_POWER_STATE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtGetMUIRegistryInfo", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DataSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Data", .size = -1, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtGetNextProcess", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "HandleAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtGetNextThread", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "HandleAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtGetNlsSectionPtr", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "SectionType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionData", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ContextData", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*SectionPointer", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "SectionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtGetNotificationResourceManager", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionNotification", .size = -2, .type = STRUCT | POINTER, .struct_type = TRANSACTION_NOTIFICATION, .arg_dir = OUT},
			{.name = "NotificationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Asynchronous", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AsynchronousContext", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtGetPlugPlayEvent", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Context", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EventBlock", .size = -3, .type = STRUCT | POINTER, .struct_type = PLUGPLAY_EVENT_BLOCK, .arg_dir = OUT},
			{.name = "EventBufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtGetWriteWatch", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*UserAddressArray", .size = -5, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "EntriesInUserAddressArray", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Granularity", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtImpersonateAnonymousToken", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtImpersonateClientOfPort", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Message", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtImpersonateThread", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ServerThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityQos", .size = 12, .type = STRUCT | POINTER, .struct_type = SECURITY_QUALITY_OF_SERVICE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtInitializeNlsFiles", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DefaultLocaleId", .size = 4, .type = STRUCT | POINTER, .struct_type = LCID, .arg_dir = OUT},
			{.name = "DefaultCasingTableSize", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtInitializeRegistry", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "BootCondition", .size = 2, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtInitiatePowerAction", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "SystemAction", .size = 4, .type = STRUCT, .struct_type = POWER_ACTION, .arg_dir = IN},
			{.name = "MinSystemState", .size = 4, .type = STRUCT, .struct_type = SYSTEM_POWER_STATE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Asynchronous", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtIsProcessInJob", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{ .name = "NtIsUILanguageComitted", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtListenPort", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ConnectionRequest", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtLoadDriver", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "DriverServiceName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtLoadKey2", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "SourceFile", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtLoadKeyEx", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "SourceFile", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TrustClassKey", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtLoadKey", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "SourceFile", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtLockFile", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "ByteOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FailImmediately", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExclusiveLock", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtLockProductActivationKeys", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "*pPrivateVer", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "*pSafeMode", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtLockRegistryKey", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtLockVirtualMemory", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "MapType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtMakePermanentObject", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtMakeTemporaryObject", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtMapCMFModule", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "What", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Index", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CacheIndexOut", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "CacheFlagsOut", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ViewSizeOut", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtMapUserPhysicalPages", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "VirtualAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "UserPfnArra;", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtMapUserPhysicalPagesScatter", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "*VirtualAddresses", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "UserPfnArray", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtMapViewOfSection", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ZeroBits", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CommitSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ViewSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "InheritDisposition", .size = 4, .type = STRUCT, .struct_type = SECTION_INHERIT, .arg_dir = IN},
			{.name = "AllocationType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Win32Protect", .size = 4, .type = STRUCT, .struct_type = WIN32_PROTECTION_MASK, .arg_dir = IN},
		}
	},
	{
		 .name = "NtModifyBootEntry", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "BootEntry", .size = 8, .type = STRUCT | POINTER, .struct_type = BOOT_ENTRY, .arg_dir = IN},
		}
	},
	{
		 .name = "NtModifyDriverEntry", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "DriverEntry", .size = 8, .type = STRUCT | POINTER, .struct_type = EFI_DRIVER_ENTRY, .arg_dir = IN},
		}
	},
	{
		 .name = "NtNotifyChangeDirectoryFile", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = 16, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionFilter", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WatchTree", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtNotifyChangeKey", .return_type = NTSTATUS, .nargs = 10, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "CompletionFilter", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WatchTree", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -8, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Asynchronous", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtNotifyChangeMultipleKeys", .return_type = NTSTATUS, .nargs = 12, .args =
		{
			{.name = "MasterKeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SlaveObjects[]", .size = 24, .type = STRUCT, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "CompletionFilter", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WatchTree", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -10, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Asynchronous", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtNotifyChangeSession", .return_type = NTSTATUS, .nargs = 8, .args =
		{
			{.name = "Session", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStateSequence", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Action", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoState", .size = 4, .type = STRUCT, .struct_type = IO_SESSION_STATE, .arg_dir = IN},
			{.name = "IoState2", .size = 4, .type = STRUCT, .struct_type = IO_SESSION_STATE, .arg_dir = IN},
			{.name = "Buffer", .size = -7, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenDirectoryObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "DirectoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenEnlistment", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EnlistmentGuid", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenEvent", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenEventPair", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenFile", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "ShareAccess", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OpenOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenIoCompletion", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenJobObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenKeyedEvent", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "KeyedEventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenKeyEx", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "OpenOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenKey", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenKeyTransactedEx", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "OpenOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenKeyTransacted", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenMutant", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "MutantHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenObjectAuditAlarm", .return_type = NTSTATUS, .nargs = 12, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "GrantedAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "Privileges", .size = 20, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = IN},
			{.name = "ObjectCreation", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessGranted", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenerateOnClose", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtOpenPrivateNamespace", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "NamespaceHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "BoundaryDescriptor", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenProcess", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ClientId", .size = 8, .type = STRUCT | POINTER, .struct_type = CLIENT_ID, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenProcessTokenEx", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "HandleAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtOpenProcessToken", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtOpenResourceManager", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "TmHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResourceManagerGuid", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenSection", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenSemaphore", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SemaphoreHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenSession", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SessionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenSymbolicLinkObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "LinkHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenThread", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "ClientId", .size = 8, .type = STRUCT | POINTER, .struct_type = CLIENT_ID, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenThreadTokenEx", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "OpenAsSelf", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtOpenThreadToken", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "OpenAsSelf", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtOpenTimer", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "TimerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenTransactionManager", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "TmHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "LogFileName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmIdentity", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "OpenOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtOpenTransaction", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Uow", .size = 8, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "TmHandle", .size = 16, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPlugPlayControl", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PnPControlClass", .size = 4, .type = STRUCT, .struct_type = PLUGPLAY_CONTROL_CLASS, .arg_dir = IN},
			{.name = "PnPControlData", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "PnPControlDataLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPowerInformation", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "InformationLevel", .size = 4, .type = STRUCT, .struct_type = POWER_INFORMATION_LEVEL, .arg_dir = IN},
			{.name = "InputBuffer", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutputBuffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "OutputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPrepareComplete", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPrepareEnlistment", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPrePrepareComplete", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPrePrepareEnlistment", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPrivilegeCheck", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequiredPrivileges", .size = 20, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = INOUT},
			{.name = "Result", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtPrivilegedServiceAuditAlarm", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ServiceName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Privileges", .size = 20, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = IN},
			{.name = "AccessGranted", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPrivilegeObjectAuditAlarm", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "SubsystemName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .size = 4, .type = STRUCT, .struct_type = ACCESS_MASK, .arg_dir = IN},
			{.name = "Privileges", .size = 20, .type = STRUCT | POINTER, .struct_type = PRIVILEGE_SET, .arg_dir = IN},
			{.name = "AccessGranted", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPropagationComplete", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestCookie", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtPropagationFailed", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestCookie", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PropStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtProtectVirtualMemory", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "NewProtectWin32", .size = 4, .type = STRUCT, .struct_type = WIN32_PROTECTION_MASK, .arg_dir = IN},
			{.name = "OldProtect", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtPulseEvent", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryAttributesFile", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "FileInformation", .size = 40, .type = STRUCT | POINTER, .struct_type = FILE_BASIC_INFORMATION, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryBootEntryOrder", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Ids", .size = -1, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtQueryBootOptions", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "BootOptions", .size = -1, .type = STRUCT | POINTER, .struct_type = BOOT_OPTIONS, .arg_dir = OUT},
			{.name = "BootOptionsLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtQueryDebugFilterState", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ComponentId", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Level", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQueryDefaultLocale", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "UserProfile", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DefaultLocaleId", .size = 4, .type = STRUCT | POINTER, .struct_type = LCID, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryDefaultUILanguage", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "*DefaultUILanguageId", .size = 2, .type = STRUCT, .struct_type = LANGID, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryDirectoryFile", .return_type = NTSTATUS, .nargs = 11, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "FileInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileInformationClass", .size = 4, .type = STRUCT, .struct_type = FILE_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "ReturnSingleEntry", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RestartScan", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQueryDirectoryObject", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "DirectoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnSingleEntry", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RestartScan", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Context", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryDriverEntryOrder", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Ids", .size = -1, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtQueryEaFile", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = 12, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnSingleEntry", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EaList", .size = 8, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EaListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EaIndex", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RestartScan", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQueryEvent", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EventInformationClass", .size = 4, .type = STRUCT, .struct_type = EVENT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "EventInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "EventInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryFullAttributesFile", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ObjectAttributes", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "FileInformation", .size = 56, .type = STRUCT | POINTER, .struct_type = FILE_NETWORK_OPEN_INFORMATION, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationAtom", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "Atom", .size = 2, .type = STRUCT, .struct_type = RTL_ATOM, .arg_dir = IN},
			{.name = "InformationClass", .size = 999, .type = STRUCT, .struct_type = ATOM_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "AtomInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "AtomInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationEnlistment", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EnlistmentInformationClass", .size = 999, .type = STRUCT, .struct_type = ENLISTMENT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "EnlistmentInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "EnlistmentInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationFile", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 4, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "FileInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileInformationClass", .size = 4, .type = STRUCT, .struct_type = FILE_INFORMATION_CLASS, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQueryInformationJobObject", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobObjectInformationClass", .size = 4, .type = STRUCT, .struct_type = JOBOBJECTINFOCLASS, .arg_dir = IN},
			{.name = "JobObjectInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "JobObjectInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationPort", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PortInformationClass", .size = 4, .type = STRUCT, .struct_type = PORT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "PortInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationProcess", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessInformationClass", .size = 4, .type = STRUCT, .struct_type = PROCESSINFOCLASS, .arg_dir = IN},
			{.name = "ProcessInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ProcessInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationResourceManager", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResourceManagerInformationClass", .size = 999, .type = STRUCT, .struct_type = RESOURCEMANAGER_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "ResourceManagerInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ResourceManagerInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationThread", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadInformationClass", .size = 4, .type = STRUCT, .struct_type = THREADINFOCLASS, .arg_dir = IN},
			{.name = "ThreadInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ThreadInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationToken", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenInformationClass", .size = 4, .type = STRUCT, .struct_type = TOKEN_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TokenInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "TokenInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationTransaction", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionInformationClass", .size = 999, .type = STRUCT, .struct_type = TRANSACTION_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TransactionInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "TransactionInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationTransactionManager", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "TransactionManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionManagerInformationClass", .size = 999, .type = STRUCT, .struct_type = TRANSACTIONMANAGER_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TransactionManagerInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "TransactionManagerInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInformationWorkerFactory", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "WorkerFactoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WorkerFactoryInformationClass", .size = 4, .type = STRUCT, .struct_type = WORKERFACTORYINFOCLASS, .arg_dir = IN},
			{.name = "WorkerFactoryInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "WorkerFactoryInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryInstallUILanguage", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "*InstallUILanguageId", .size = 2, .type = STRUCT, .struct_type = LANGID, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryIntervalProfile", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ProfileSource", .size = 4, .type = STRUCT, .struct_type = KPROFILE_SOURCE, .arg_dir = IN},
			{.name = "Interval", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryIoCompletion", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoCompletionInformationClass", .size = 4, .type = STRUCT, .struct_type = IO_COMPLETION_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "IoCompletionInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "IoCompletionInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryKey", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyInformationClass", .size = 999, .type = STRUCT, .struct_type = KEY_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "KeyInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResultLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryLicenseValue", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "Name", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Type", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Buffer", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnedLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryMultipleValueKey", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValueEntries", .size = 16, .type = STRUCT | POINTER, .struct_type = KEY_VALUE_ENTRY, .arg_dir = INOUT},
			{.name = "EntryCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValueBuffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RequiredBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryMutant", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "MutantHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MutantInformationClass", .size = 4, .type = STRUCT, .struct_type = MUTANT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "MutantInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "MutantInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryObject", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectInformationClass", .size = 4, .type = STRUCT, .struct_type = OBJECT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "ObjectInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ObjectInformationLength", .size = -4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryOpenSubKeysEx", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "BufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "RequiredSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryOpenSubKeys", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "HandleCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryPerformanceCounter", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PerformanceCounter", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PerformanceFrequency", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{ .name = "NtQueryPortInformationProcess", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtQueryQuotaInformationFile", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = 56, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnSingleEntry", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SidList", .size = 20, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SidListLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StartSid", .size = 12, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RestartScan", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQuerySection", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "SectionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SectionInformationClass", .size = 4, .type = STRUCT, .struct_type = SECTION_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "SectionInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "SectionInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySecurityAttributesToken", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Attributes", .size = -2, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfAttributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySecurityObject", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .size = 4, .type = STRUCT, .struct_type = SECURITY_INFORMATION, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = -3, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LengthNeeded", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySemaphore", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "SemaphoreHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SemaphoreInformationClass", .size = 4, .type = STRUCT, .struct_type = SEMAPHORE_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "SemaphoreInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "SemaphoreInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySymbolicLinkObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "LinkHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LinkTarget", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ReturnedLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySystemEnvironmentValueEx", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "VariableName", .size = 4, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "VendorGuid", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "Value", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ValueLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Attributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySystemEnvironmentValue", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "VariableName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "VariableValue", .size = -2, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ValueLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySystemInformationEx", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "SystemInformationClass", .size = 4, .type = STRUCT, .struct_type = SYSTEM_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "QueryInformation", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "QueryInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SystemInformation", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "SystemInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySystemInformation", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "SystemInformationClass", .size = 4, .type = STRUCT, .struct_type = SYSTEM_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "SystemInformation", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "SystemInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQuerySystemTime", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "SystemTime", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryTimer", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "TimerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TimerInformationClass", .size = 4, .type = STRUCT, .struct_type = TIMER_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TimerInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "TimerInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryTimerResolution", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "MaximumTime", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "MinimumTime", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "CurrentTime", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryValueKey", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValueName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyValueInformationClass", .size = 4, .type = STRUCT, .struct_type = KEY_VALUE_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "KeyValueInformation", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResultLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryVirtualMemory", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MemoryInformationClass", .size = 4, .type = STRUCT, .struct_type = MEMORY_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "MemoryInformation", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "MemoryInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtQueryVolumeInformationFile", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "FsInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FsInformationClass", .size = 999, .type = STRUCT, .struct_type = FS_INFORMATION_CLASS, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQueueApcThreadEx", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "UserApcReserveHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type = STRUCT | POINTER, .struct_type = PS_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcArgument1", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcArgument2", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcArgument3", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtQueueApcThread", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type = STRUCT | POINTER, .struct_type = PS_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcArgument1", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcArgument2", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcArgument3", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRaiseException", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ExceptionRecord", .size = 80, .type = STRUCT | POINTER, .struct_type = EXCEPTION_RECORD, .arg_dir = OUT},
			{.name = "ContextRecord", .size = 716, .type = STRUCT | POINTER, .struct_type = CONTEXT, .arg_dir = OUT},
			{.name = "FirstChance", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtRaiseHardError", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "ErrorStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfParameters", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "UnicodeStringParameterMask", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Parameters", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER_POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValidResponseOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Response", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtReadFile", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = -6, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ByteOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReadFileScatter", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "SegmentArray", .size = 8, .type = STRUCT | POINTER, .struct_type = FILE_SEGMENT_ELEMENT, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ByteOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReadOnlyEnlistment", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReadRequestData", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Message", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "DataEntryIndex", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfBytesRead", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtReadVirtualMemory", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfBytesRead", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtRecoverEnlistment", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EnlistmentKey", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRecoverResourceManager", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRecoverTransactionManager", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "TransactionManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRegisterProtocolAddressInformation", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ResourceManager", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProtocolId", .size = 16, .type = STRUCT, .struct_type = PCRM_PROTOCOL_ID, .arg_dir = IN},
			{.name = "ProtocolInformationSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProtocolInformation", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreateOptions", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRegisterThreadTerminatePort", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReleaseKeyedEvent", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "KeyedEventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyValue", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReleaseMutant", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "MutantHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousCount", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtReleaseSemaphore", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SemaphoreHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReleaseCount", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousCount", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtReleaseWorkerFactoryWorker", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "WorkerFactoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRemoveIoCompletionEx", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoCompletionInformation", .size = -2, .type = STRUCT | POINTER, .struct_type = FILE_IO_COMPLETION_INFORMATION, .arg_dir = OUT},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumEntriesRemoved", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRemoveIoCompletion", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*KeyContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "*ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRemoveProcessDebug", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DebugObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtRenameKey", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRenameTransactionManager", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "LogFileName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExistingTransactionManagerGuid", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReplaceKey", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "NewFile", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "TargetHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OldFile", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReplacePartitionUnit", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "TargetInstancePath", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SpareInstancePath", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReplyPort", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReplyMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReplyWaitReceivePortEx", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*PortContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ReplyMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "ReceiveMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = OUT},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtReplyWaitReceivePort", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*PortContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ReplyMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "ReceiveMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtReplyWaitReplyPort", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReplyMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtRequestPort", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRequestWaitReplyPort", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestMessage", .size = 8, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "ReplyMessage", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtResetEvent", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtResetWriteWatch", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRestoreKey", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtResumeProcess", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtResumeThread", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousSuspendCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}, .specific_ret_proc = proc_NtResumeThread
	},
	{
		 .name = "NtRollbackComplete", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRollbackEnlistment", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRollbackTransaction", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Wait", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtRollforwardTransactionManager", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TransactionManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSaveKeyEx", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Format", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSaveKey", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSaveMergedKeys", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "HighPrecedenceKeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LowPrecedenceKeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSecureConnectPort", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "PortName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityQos", .size = 12, .type = STRUCT | POINTER, .struct_type = SECURITY_QUALITY_OF_SERVICE, .arg_dir = IN},
			{.name = "ClientView", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_VIEW, .arg_dir = INOUT},
			{.name = "RequiredServerSid", .size = 12, .type = STRUCT | POINTER, .struct_type = SID, .arg_dir = IN},
			{.name = "ServerView", .size = 12, .type = STRUCT | POINTER, .struct_type = REMOTE_PORT_VIEW, .arg_dir = INOUT},
			{.name = "MaxMessageLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ConnectionInformation", .size = -8, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ConnectionInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{ .name = "NtSerializeBoot", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtSetBootEntryOrder", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Ids", .size = -1, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetBootOptions", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "BootOptions", .size = 24, .type = STRUCT | POINTER, .struct_type = BOOT_OPTIONS, .arg_dir = IN},
			{.name = "FieldsToChange", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetContextThread", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadContext", .size = 716, .type = STRUCT | POINTER, .struct_type = CONTEXT, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetDebugFilterState", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "ComponentId", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Level", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "State", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetDefaultHardErrorPort", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "DefaultHardErrorPort", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetDefaultLocale", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "UserProfile", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DefaultLocaleId", .size = 4, .type = STRUCT, .struct_type = LCID, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetDefaultUILanguage", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "DefaultUILanguageId", .size = 2, .type = STRUCT, .struct_type = LANGID, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetDriverEntryOrder", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Ids", .size = -1, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetEaFile", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetEventBoostPriority", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetEvent", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSetHighEventPair", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetHighWaitLowEventPair", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationDebugObject", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "DebugObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DebugObjectInformationClass", .size = 4, .type = STRUCT, .struct_type = DEBUGOBJECTINFOCLASS, .arg_dir = OUT},
			{.name = "DebugInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "DebugInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSetInformationEnlistment", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EnlistmentInformationClass", .size = 4, .type = STRUCT, .struct_type = ENLISTMENT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "EnlistmentInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "EnlistmentInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationFile", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "FileInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileInformationClass", .size = 4, .type = STRUCT, .struct_type = FILE_INFORMATION_CLASS, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationJobObject", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobObjectInformationClass", .size = 4, .type = STRUCT, .struct_type = JOBOBJECTINFOCLASS, .arg_dir = IN},
			{.name = "JobObjectInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobObjectInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationKey", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeySetInformationClass", .size = 999, .type = STRUCT, .struct_type = KEY_SET_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "KeySetInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeySetInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationObject", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectInformationClass", .size = 4, .type = STRUCT, .struct_type = OBJECT_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "ObjectInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationProcess", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessInformationClass", .size = 4, .type = STRUCT, .struct_type = PROCESSINFOCLASS, .arg_dir = IN},
			{.name = "ProcessInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationResourceManager", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ResourceManagerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResourceManagerInformationClass", .size = 4, .type = STRUCT, .struct_type = RESOURCEMANAGER_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "ResourceManagerInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResourceManagerInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationThread", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadInformationClass", .size = 4, .type = STRUCT, .struct_type = THREADINFOCLASS, .arg_dir = IN},
			{.name = "ThreadInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ThreadInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationToken", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TokenHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenInformationClass", .size = 4, .type = STRUCT, .struct_type = TOKEN_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TokenInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationTransaction", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TransactionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionInformationClass", .size = 4, .type = STRUCT, .struct_type = TRANSACTION_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TransactionInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationTransactionManager", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TmHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionManagerInformationClass", .size = 999, .type = STRUCT, .struct_type = TRANSACTIONMANAGER_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TransactionManagerInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TransactionManagerInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetInformationWorkerFactory", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "WorkerFactoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WorkerFactoryInformationClass", .size = 4, .type = STRUCT, .struct_type = WORKERFACTORYINFOCLASS, .arg_dir = IN},
			{.name = "WorkerFactoryInformation", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WorkerFactoryInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetIntervalProfile", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Interval", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Source", .size = 4, .type = STRUCT, .struct_type = KPROFILE_SOURCE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetIoCompletionEx", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoCompletionReserveHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusInformation", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetIoCompletion", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "IoCompletionHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusInformation", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetLdtEntries", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "Selector0", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Entry0Low", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Entry0Hi", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Selector1", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Entry1Low", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Entry1Hi", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetLowEventPair", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetLowWaitHighEventPair", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetQuotaInformationFile", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = 56, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetSecurityObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .size = 4, .type = STRUCT, .struct_type = SECURITY_INFORMATION, .arg_dir = IN},
			{.name = "SecurityDescriptor", .size = 20, .type = STRUCT | POINTER, .struct_type = SECURITY_DESCRIPTOR, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetSystemEnvironmentValueEx", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "VariableName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "VendorGuid", .size = 16, .type = STRUCT | POINTER, .struct_type = GUID, .arg_dir = IN},
			{.name = "Value", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValueLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Attributes", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetSystemEnvironmentValue", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "VariableName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "VariableValue", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetSystemInformation", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SystemInformationClass", .size = 4, .type = STRUCT, .struct_type = SYSTEM_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "SystemInformation", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SystemInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetSystemPowerState", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "SystemAction", .size = 4, .type = STRUCT, .struct_type = POWER_ACTION, .arg_dir = IN},
			{.name = "MinSystemState", .size = 4, .type = STRUCT, .struct_type = SYSTEM_POWER_STATE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetSystemTime", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "SystemTime", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousTime", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSetThreadExecutionState", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "esFlags", .size = 4, .type = STRUCT, .struct_type = EXECUTION_STATE, .arg_dir = IN},
			{.name = "*PreviousFlags", .size = 4, .type = STRUCT, .struct_type = EXECUTION_STATE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSetTimerEx", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TimerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TimerSetInformationClass", .size = 999, .type = STRUCT, .struct_type = TIMER_SET_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TimerSetInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "TimerSetInformationLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetTimer", .return_type = NTSTATUS, .nargs = 7, .args =
		{
			{.name = "TimerHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DueTime", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TimerApcRoutine", .size = 4, .type = STRUCT | POINTER, .struct_type = TIMER_APC_ROUTINE, .arg_dir = IN},
			{.name = "TimerContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WakeTimer", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Period", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .size = 4, .type = SIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSetTimerResolution", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "DesiredTime", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SetResolution", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ActualTime", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSetUuidSeed", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Seed", .size = 1, .type = ANSI_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetValueKey", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "KeyHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValueName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TitleIndex", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Type", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Data", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DataSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSetVolumeInformationFile", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "FsInformation", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FsInformationClass", .size = 999, .type = STRUCT, .struct_type = FS_INFORMATION_CLASS, .arg_dir = IN},
		}
	},
	{
		 .name = "NtShutdownSystem", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Action", .size = 4, .type = STRUCT, .struct_type = SHUTDOWN_ACTION, .arg_dir = IN},
		}
	},
	{
		 .name = "NtShutdownWorkerFactory", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "WorkerFactoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*PendingWorkerCount", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtSignalAndWaitForSingleObject", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "SignalHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WaitHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSinglePhaseReject", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "EnlistmentHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TmVirtualClock", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtStartProfile", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ProfileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtStopProfile", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ProfileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSuspendProcess", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtSuspendThread", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousSuspendCount", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtSystemDebugControl", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "Command", .size = 4, .type = STRUCT, .struct_type = SYSDBG_COMMAND, .arg_dir = IN},
			{.name = "InputBuffer", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "InputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutputBuffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "OutputBufferLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtTerminateJobObject", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "JobHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExitStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtTerminateProcess", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExitStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtTerminateThread", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ThreadHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExitStatus", .size = 4, .type = NTSTATUS, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .specific_ret_proc = proc_NtTerminateThread
	},
	{ .name = "NtTestAlert", .return_type = NTSTATUS, .nargs = 0 }, 
	{ .name = "NtThawRegistry", .return_type = NTSTATUS, .nargs = 0 }, 
	{ .name = "NtThawTransactions", .return_type = NTSTATUS, .nargs = 0 }, 
	{
		 .name = "NtTraceControl", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "FunctionCode", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InBuffer", .size = -2, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InBufferLen", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutBuffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "OutBufferLen", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtTraceEvent", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "TraceHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FieldSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Fields", .size = 48, .type = STRUCT, .struct_type = EVENT_TRACE_HEADER, .arg_dir = IN},
		}
	},
	{
		 .name = "NtTranslateFilePath", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "InputFilePath", .size = 16, .type = STRUCT | POINTER, .struct_type = FILE_PATH, .arg_dir = IN},
			{.name = "OutputType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OutputFilePath", .size = 16, .type = STRUCT | POINTER, .struct_type = FILE_PATH, .arg_dir = OUT},
			{.name = "OutputFilePathLength", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{ 
		.name = "NtUmsThreadYield", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "Scheduler Param", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	}, 
	{
		 .name = "NtUnloadDriver", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "DriverServiceName", .size = 8, .type = WIDE_CHAR | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtUnloadKey2", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .size = 1, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtUnloadKeyEx", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtUnloadKey", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "TargetKey", .size = 24, .type = STRUCT | POINTER, .struct_type = OBJECT_ATTRIBUTES, .arg_dir = IN},
		}
	},
	{
		 .name = "NtUnlockFile", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "ByteOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtUnlockVirtualMemory", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "*BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RegionSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "MapType", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtUnmapViewOfSection", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtVdmControl", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "Service", .size = 4, .type = STRUCT, .struct_type = VDMSERVICECLASS, .arg_dir = IN},
			{.name = "ServiceData", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}
	},
	{
		 .name = "NtWaitForDebugEvent", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "DebugObjectHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "WaitStateChange", .size = 96, .type = STRUCT | POINTER, .struct_type = DBGUI_WAIT_STATE_CHANGE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtWaitForKeyedEvent", .return_type = NTSTATUS, .nargs = 4, .args =
		{
			{.name = "KeyedEventHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "KeyValue", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWaitForMultipleObjects32", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Handles[]", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WaitType", .size = 4, .type = STRUCT, .struct_type = WAIT_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWaitForMultipleObjects", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "Count", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Handles[]", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WaitType", .size = 4, .type = STRUCT, .struct_type = WAIT_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 4, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWaitForSingleObject", .return_type = NTSTATUS, .nargs = 3, .args =
		{
			{.name = "Handle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Alertable", .size = 4, .type = SIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timeout", .size = 4, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWaitForWorkViaWorkerFactory", .return_type = NTSTATUS, .nargs = 2, .args =
		{
			{.name = "WorkerFactoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MiniPacket", .size = 16, .type = STRUCT | POINTER, .struct_type = FILE_IO_COMPLETION_INFORMATION, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtWaitHighEventPair", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWaitLowEventPair", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "EventPairHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWorkerFactoryWorkerReady", .return_type = NTSTATUS, .nargs = 1, .args =
		{
			{.name = "WorkerFactoryHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWriteFileGather", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "SegmentArray", .size = 8, .type = STRUCT | POINTER, .struct_type = FILE_SEGMENT_ELEMENT, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ByteOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWriteFile", .return_type = NTSTATUS, .nargs = 9, .args =
		{
			{.name = "FileHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Event", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ApcRoutine", .size = 4, .type =  STRUCT | POINTER, .struct_type = IO_APC_ROUTINE, .arg_dir = IN},
			{.name = "ApcContext", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IoStatusBlock", .size = 8, .type = STRUCT | POINTER, .struct_type = IO_STATUS_BLOCK, .arg_dir = OUT},
			{.name = "Buffer", .size = -6, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ByteOffset", .size = 8, .type = SIGNED_QUAD_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Key", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}
	},
	{
		 .name = "NtWriteRequestData", .return_type = NTSTATUS, .nargs = 6, .args =
		{
			{.name = "PortHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Message", .size = 24, .type = STRUCT | POINTER, .struct_type = PORT_MESSAGE, .arg_dir = IN},
			{.name = "DataEntryIndex", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfBytesWritten", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{
		 .name = "NtWriteVirtualMemory", .return_type = NTSTATUS, .nargs = 5, .args =
		{
			{.name = "ProcessHandle", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BaseAddress", .size = 4, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .size = -3, .type = VOID | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferSize", .size = 4, .type = UNSIGNED_DOUBLE_WORD, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfBytesWritten", .size = 4, .type = UNSIGNED_DOUBLE_WORD | POINTER, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
		}
	},
	{ .name = "NtYieldExecution", .return_type = NTSTATUS, .nargs = 0 }, 
};

int syscalls_size = (sizeof(syscalls) / sizeof(syscalls[0]));