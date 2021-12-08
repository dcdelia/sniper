#include "../private.h"

apicall_t kernelbase_apicalls[] = 
{
	{
		.name = "CreateThread", .nargs = 6, .rva = 211095, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwStackSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartAddress", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpThreadId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			211128 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileAttributesA", .nargs = 2, .rva = 147069, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			147120 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileAttributesW", .nargs = 2, .rva = 132844, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			133085 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNLSStringEx", .nargs = 10, .rva = 160579, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFindNLSStringFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringSource", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSource", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchValue", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchFound", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "sortHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			160659 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapCompact", .nargs = 2, .rva = 125778, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlCompactHeap"
	},
	{
		.name = "GetOverlappedResult", .nargs = 4, .rva = 39322, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
			{.name = "lpNumberOfBytesTransferred", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bWait", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39426 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessVersion", .nargs = 1, .rva = 38233, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			38299 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentProcess", .nargs = 0, .rva = 26757, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26760 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetStdHandleEx", .nargs = 3, .rva = 208065, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nStdHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phPrevValue", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			208191 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EqualPrefixSid", .nargs = 2, .rva = 130192, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid1", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid2", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			130221 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindStringOrdinal", .nargs = 6, .rva = 225974, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFindStringOrdinalFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringSource", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSource", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchValue", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bIgnoreCase", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			227180 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetEnvironmentStringsW", .nargs = 0, .rva = 50801, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			50927 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileMUIPath", .nargs = 7, .rva = 148662, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcwszFilePath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguage", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguage", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszFileMUIPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchFileMUIPath", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pululEnumerator", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			148706 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetComputerNameExA", .nargs = 3, .rva = 217454, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NameType", .type = ENUMERATION, .size = 32, .struct_type = COMPUTER_NAME_FORMAT, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217734 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetComputerNameExW", .nargs = 3, .rva = 64070, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NameType", .type = ENUMERATION, .size = 32, .struct_type = COMPUTER_NAME_FORMAT, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			64473 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateObjectSecurity", .nargs = 5, .rva = 221939, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ObjectDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResultantDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "DescriptorLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			221983 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserPreferredUILanguages", .nargs = 4, .rva = 148956, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			149006 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ImpersonateAnonymousToken", .nargs = 1, .rva = 85540, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ThreadHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			85566 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUILanguageInfo", .nargs = 5, .rva = 154384, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwmszLanguage", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszFallbackLanguages", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchFallbackLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pAttributes", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			154454 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePrivateObjectSecurityWithMultipleInheritance", .nargs = 9, .rva = 221768, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ParentDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreatorDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ObjectTypes", .type = STRUCT | POINTER_POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "GuidCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IsContainerObject", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AutoInheritFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
		}, .rets_rva = 
		{
			221824 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteAce", .nargs = 2, .rva = 140081, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			140110 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessIdOfThread", .nargs = 1, .rva = 149607, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Thread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			149646 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityDescriptorDacl", .nargs = 4, .rva = 39235, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bDaclPresent", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDacl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = IN},
			{.name = "bDaclDefaulted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39270 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateIoCompletionPort", .nargs = 4, .rva = 141142, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FileHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExistingCompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfConcurrentThreads", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			141211 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateWellKnownSid", .nargs = 4, .rva = 67741, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "WellKnownSidType", .type = ENUMERATION, .size = 32, .struct_type = WELL_KNOWN_SID_TYPE, .arg_dir = IN},
			{.name = "DomainSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbSid", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			68013 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFinalPathNameByHandleA", .nargs = 4, .rva = 209176, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszFilePath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchFilePath", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			209374 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFinalPathNameByHandleW", .nargs = 4, .rva = 103859, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszFilePath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchFilePath", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			104685 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RemoveDirectoryA", .nargs = 1, .rva = 217742, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217790 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DisconnectNamedPipe", .nargs = 1, .rva = 145632, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			145759 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteVolumeMountPointW", .nargs = 1, .rva = 214639, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			215423 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadStringByReference", .nargs = 7, .rva = 89420, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Language", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SourceString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Directory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchBufferOut", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			90019, 203540 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolCleanupGroup", .nargs = 0, .rva = 125176, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
			125204, 205932 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TerminateThread", .nargs = 2, .rva = 49890, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			49996 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FormatMessageA", .nargs = 7, .rva = 125975, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSource", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMessageId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwLanguageId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Arguments", .type = ANSI_CHAR | POINTER_POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			126282 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FormatMessageW", .nargs = 7, .rva = 63419, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSource", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMessageId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwLanguageId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Arguments", .type = ANSI_CHAR | POINTER_POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			63453 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentThread", .nargs = 0, .rva = 26766, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26769 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemPreferredUILanguages", .nargs = 4, .rva = 92098, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			92148 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSecurityDescriptorSacl", .nargs = 4, .rva = 51258, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpbSaclPresent", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pSacl", .type = STRUCT | POINTER_POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "lpbSaclDefaulted", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			51313 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenFileMappingW", .nargs = 3, .rva = 35765, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			35874 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidLanguageGroup", .nargs = 2, .rva = 228423, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "LanguageGroup", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			228636 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteProcThreadAttributeList", .nargs = 1, .rva = 43080, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpAttributeList", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			43080 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapLock", .nargs = 1, .rva = 117429, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			117447 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AdjustTokenPrivileges", .nargs = 6, .rva = 40030, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DisableAllPrivileges", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewState", .type = STRUCT | POINTER, .size = 128, .struct_type = TOKEN_PRIVILEGES, .arg_dir = IN},
			{.name = "BufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .type = STRUCT | POINTER, .size = 128, .struct_type = TOKEN_PRIVILEGES, .arg_dir = INOUT},
			{.name = "ReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			40077 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenProcess", .nargs = 3, .rva = 45913, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			45999 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNLSVersionEx", .nargs = 3, .rva = 261863, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "function", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFOEX, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			261912 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ImpersonateLoggedOnUser", .nargs = 1, .rva = 144729, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			144820 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoExEx", .nargs = 6, .rva = 155278, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pCalInfoEnumProcExEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			155328 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidSid", .nargs = 1, .rva = 39612, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39638 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelIoEx", .nargs = 2, .rva = 80725, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			80766 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateTimerQueue", .nargs = 0, .rva = 131176, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			131204, 168921 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetTokenInformation", .nargs = 4, .rva = 69825, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenInformationClass", .type = ENUMERATION, .size = 32, .struct_type = TOKEN_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TokenInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			69860 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MakeSelfRelativeSD", .nargs = 3, .rva = 60690, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAbsoluteSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSelfRelativeSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwBufferLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			60728 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapSetInformation", .nargs = 4, .rva = 55977, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "HeapHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HeapInformationClass", .type = ENUMERATION, .size = 32, .struct_type = HEAP_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "HeapInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HeapInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			56012 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AreAnyAccessesGranted", .nargs = 2, .rva = 221197, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221218 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapGenericMask", .nargs = 2, .rva = 40927, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlMapGenericMask"
	},
	{
		.name = "EnumDateFormatsExW", .nargs = 3, .rva = 235344, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235381 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsDebuggerPresent", .nargs = 0, .rva = 138798, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			138811 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemTimeAdjustment", .nargs = 3, .rva = 128748, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeAdjustment", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTimeIncrement", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTimeAdjustmentDisabled", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			128809 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolWait", .nargs = 3, .rva = 125210, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "pfnwa", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			125246 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetErrorMode", .nargs = 1, .rva = 31041, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31099 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeProcThreadAttributeList", .nargs = 4, .rva = 81761, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAttributeList", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwAttributeCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			81844 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileMappingW", .nargs = 6, .rva = 56634, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileMappingAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			56839 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResetEvent", .nargs = 1, .rva = 26645, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26671 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCalendarInfoEx", .nargs = 7, .rva = 156413, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			156474 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteFile", .nargs = 5, .rva = 29989, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			30116, 171485 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetErrorMode", .nargs = 0, .rva = 31107, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			31154, 55963, 166578 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenWaitableTimerW", .nargs = 3, .rva = 210609, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			210749 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSecurityDescriptorDacl", .nargs = 4, .rva = 39789, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpbDaclPresent", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pDacl", .type = STRUCT | POINTER_POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "lpbDaclDefaulted", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			39844 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ImpersonateSelf", .nargs = 1, .rva = 146759, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ImpersonationLevel", .type = ENUMERATION, .size = 32, .struct_type = SECURITY_IMPERSONATION_LEVEL, .arg_dir = IN},
		}, .rets_rva = 
		{
			146785 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileExA", .nargs = 6, .rva = 217956, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFindFileData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "fSearchOp", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_SEARCH_OPS, .arg_dir = IN},
			{.name = "lpSearchFilter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAdditionalFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			218278 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileExW", .nargs = 6, .rva = 40957, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFindFileData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "fSearchOp", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_SEARCH_OPS, .arg_dir = IN},
			{.name = "lpSearchFilter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAdditionalFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			41869 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetKernelObjectSecurity", .nargs = 5, .rva = 51123, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Handle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestedInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpnLengthNeeded", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			51162 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TzSpecificLocalTimeToSystemTime", .nargs = 3, .rva = 121412, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = IN},
			{.name = "lpLocalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpUniversalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			121967 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileMUIInfo", .nargs = 4, .rva = 255224, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcwszFilePath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pFileMUIInfo", .type = STRUCT | POINTER, .size = 640, .struct_type = FILEMUIINFO, .arg_dir = IN},
			{.name = "pcbFileMUIInfo", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			256433 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSecurityDescriptorControl", .nargs = 3, .rva = 60746, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pControl", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwRevision", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			60778 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ChangeTimerQueueTimer", .nargs = 4, .rva = 145025, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "DueTime", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Period", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			145065 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringEx", .nargs = 9, .rva = 28702, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCmpFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount1", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount2", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			28779 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalFree", .nargs = 1, .rva = 30283, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30348 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PrivilegedServiceAuditAlarmW", .nargs = 5, .rva = 159088, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ServiceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Privileges", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = IN},
			{.name = "AccessGranted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			159157 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeCriticalSectionEx", .nargs = 3, .rva = 55916, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCriticalSection", .type = STRUCT | POINTER, .size = 192, .struct_type = RTL_CRITICAL_SECTION, .arg_dir = INOUT},
			{.name = "dwSpinCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			55956 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetPriorityClass", .nargs = 2, .rva = 129422, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPriorityClass", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			129551 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTickCount64", .nargs = 0, .rva = 40523, 
		.return_type = UNSIGNED_QUAD_WORD, .return_size = 8, .args = 
		{
		}, .rets_rva = 
		{
			40595 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateDirectoryA", .nargs = 2, .rva = 162650, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			162701 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualProtectEx", .nargs = 5, .rva = 139998, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flNewProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpflOldProtect", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			140046 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateDirectoryW", .nargs = 2, .rva = 62002, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			62230 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadFileEx", .nargs = 5, .rva = 164468, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "lpCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			164597 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessId", .nargs = 1, .rva = 39742, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Process", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39781 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapDestroy", .nargs = 1, .rva = 36364, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36388 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapWalk", .nargs = 2, .rva = 117481, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEntry", .type = STRUCT | POINTER, .size = 224, .struct_type = PROCESS_HEAP_ENTRY, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			117617 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPriorityClass", .nargs = 1, .rva = 154462, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			154525 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextChangeNotification", .nargs = 1, .rva = 93871, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hChangeHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			93922 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UpdateProcThreadAttribute", .nargs = 7, .rva = 81852, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAttributeList", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Attribute", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPreviousValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpReturnSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			82097 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEnvironmentStringsW", .nargs = 1, .rva = 83597, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NewEnvironment", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			83755 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsDBCSLeadByteEx", .nargs = 2, .rva = 149326, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TestChar", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			149384 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlsGetValue", .nargs = 1, .rva = 26775, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "dwFlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26824 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenEventA", .nargs = 3, .rva = 60276, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60342 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenEventW", .nargs = 3, .rva = 44583, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44718 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDynamicTimeZoneInformation", .nargs = 1, .rva = 125625, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pTimeZoneInformation", .type = STRUCT | POINTER, .size = 3456, .struct_type = TIME_DYNAMIC_ZONE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			125641 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAclInformation", .nargs = 4, .rva = 60820, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = IN},
			{.name = "pAclInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nAclInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAclInformationClass", .type = ENUMERATION, .size = 32, .struct_type = ACL_INFORMATION_CLASS, .arg_dir = IN},
		}, .rets_rva = 
		{
			60855 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTimeZoneInformation", .nargs = 1, .rva = 126772, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			126788 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedExchangeAdd", .nargs = 2, .rva = 27488, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Addend", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Value", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27500 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityDescriptorControl", .nargs = 3, .rva = 94102, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ControlBitsOfInterest", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ControlBitsToSet", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			94134 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAccessDeniedAce", .nargs = 4, .rva = 131210, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			131245 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualFree", .nargs = 3, .rva = 31348, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFreeType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31370 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FileTimeToLocalFileTime", .nargs = 2, .rva = 38669, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpLocalFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			38730 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExitCodeThread", .nargs = 2, .rva = 62577, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExitCode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			62624 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadFile", .nargs = 5, .rva = 57363, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			57490, 171354 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityDescriptorGroup", .nargs = 3, .rva = 60863, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pGroup", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bGroupDefaulted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60895 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetAclInformation", .nargs = 4, .rva = 221226, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "pAclInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nAclInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAclInformationClass", .type = ENUMERATION, .size = 32, .struct_type = ACL_INFORMATION_CLASS, .arg_dir = IN},
		}, .rets_rva = 
		{
			221267 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumUILanguagesW", .nargs = 3, .rva = 102803, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpUILanguageEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			102825 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumeInformationW", .nargs = 8, .rva = 79712, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeNameBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nVolumeNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeSerialNumber", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaximumComponentLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFileSystemFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFileSystemNameBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nFileSystemNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			79970 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsProcessInJob", .nargs = 3, .rva = 55837, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Result", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			55886 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheckByTypeResultList", .nargs = 11, .rva = 220424, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .type = STRUCT | POINTER, .size = 64, .struct_type = OBJECT_TYPE_LIST, .arg_dir = INOUT},
			{.name = "ObjectTypeListLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = INOUT},
			{.name = "PrivilegeSet", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = INOUT},
			{.name = "PrivilegeSetLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GrantedAccessList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AccessStatusList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			220526 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemInfo", .nargs = 1, .rva = 38307, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemInfo", .type = STRUCT | POINTER, .size = 288, .struct_type = SYSTEM_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			38372 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultLocaleName", .nargs = 2, .rva = 121998, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchLocaleName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			122089 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapCreate", .nargs = 3, .rva = 50643, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "flOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInitialSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			50742 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAccessDeniedAceEx", .nargs = 5, .rva = 221275, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221339 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetQueuedCompletionStatusEx", .nargs = 6, .rva = 206811, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCompletionPortEntries", .type = STRUCT | POINTER, .size = 128, .struct_type = OVERLAPPED_ENTRY, .arg_dir = INOUT},
			{.name = "ulCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulNumEntriesRemoved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			207031 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpool", .nargs = 1, .rva = 81069, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "reserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			81099 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEvent", .nargs = 1, .rva = 26522, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26550 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DestroyPrivateObjectSecurity", .nargs = 1, .rva = 80636, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ObjectDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			80662 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExitCodeProcess", .nargs = 2, .rva = 57667, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExitCode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			57714 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertToAutoInheritPrivateObjectSecurity", .nargs = 6, .rva = 221713, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ParentDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CurrentSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewSecurityDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ObjectType", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "IsDirectoryObject", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
		}, .rets_rva = 
		{
			221760 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadLocale", .nargs = 1, .rva = 146841, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			146884 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalFree", .nargs = 1, .rva = 30283, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30348 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolWork", .nargs = 3, .rva = 105425, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "pfnwk", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			105461 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SuspendThread", .nargs = 1, .rva = 149057, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			149087 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpA", .nargs = 2, .rva = 141083, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			141134 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumLanguageGroupLocalesW", .nargs = 4, .rva = 235105, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLangGroupLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LanguageGroup", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235130 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileSize", .nargs = 2, .rva = 56971, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSizeHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			57015 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NeedCurrentDirectoryForExePathA", .nargs = 1, .rva = 210036, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			210069 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NeedCurrentDirectoryForExePathW", .nargs = 1, .rva = 80985, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			81013 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64DisableWow64FsRedirection", .nargs = 1, .rva = 140541, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "OldValue", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			140570 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileSecurityW", .nargs = 3, .rva = 115996, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			116192 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessTimes", .nargs = 5, .rva = 62672, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpExitTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpKernelTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpUserTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			62767 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeLibraryAndExitThread", .nargs = 2, .rva = 30224, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hLibModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessShutdownParameters", .nargs = 2, .rva = 73405, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwLevel", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			73493 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLogicalProcessorInformationEx", .nargs = 3, .rva = 128817, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "RelationshipType", .type = ENUMERATION, .size = 32, .struct_type = LOGICAL_PROCESSOR_RELATIONSHIP, .arg_dir = IN},
			{.name = "Buffer", .type = STRUCT | POINTER, .size = 608, .struct_type = SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX, .arg_dir = INOUT},
			{.name = "ReturnedLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			128876 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QuerySecurityAccessMask", .nargs = 2, .rva = 110743, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			110777 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSemaphoreExW", .nargs = 6, .rva = 62360, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSemaphoreAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lInitialCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lMaximumCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			62467 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTempFileNameW", .nargs = 4, .rva = 110795, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPrefixString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uUnique", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTempFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			111272 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileSecurityW", .nargs = 5, .rva = 110508, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestedInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpnLengthNeeded", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			110735 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpiW", .nargs = 2, .rva = 29153, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			29198 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadStringA", .nargs = 4, .rva = 121214, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hInstance", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferMax", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			121309 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadStringW", .nargs = 4, .rva = 60577, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hInstance", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferMax", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60602 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AllocateLocallyUniqueId", .nargs = 1, .rva = 56414, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Luid", .type = STRUCT | POINTER, .size = 64, .struct_type = LUID, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			56440 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalMemoryStatusEx", .nargs = 1, .rva = 65744, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 512, .struct_type = MEMORYSTATUSEX, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			66186 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultUILanguage", .nargs = 0, .rva = 128309, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			128325, 202540 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetHandleInformation", .nargs = 3, .rva = 70253, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			70368 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrencyFormatW", .nargs = 6, .rva = 254901, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = STRUCT | POINTER, .size = 256, .struct_type = CURRENCYFMTW, .arg_dir = IN},
			{.name = "lpCurrencyStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchCurrency", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			254981 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSidIdentifierAuthority", .nargs = 1, .rva = 60552, 
		.return_type = STRUCT | POINTER, .return_size = 48, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlIdentifierAuthoritySid"
	},
	{
		.name = "GetLogicalDriveStringsW", .nargs = 2, .rva = 116617, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			116754 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumberFormatEx", .nargs = 6, .rva = 108118, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = STRUCT | POINTER, .size = 192, .struct_type = NUMBERFMTW, .arg_dir = IN},
			{.name = "lpNumberStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchNumber", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			108185 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrencyFormatEx", .nargs = 6, .rva = 254989, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = STRUCT | POINTER, .size = 256, .struct_type = CURRENCYFMTW, .arg_dir = IN},
			{.name = "lpCurrencyStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCurrency", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			255068 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapValidate", .nargs = 3, .rva = 139523, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMem", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			139547 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteFileGather", .nargs = 5, .rva = 117905, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "aSegmentArray", .type = UNION | POINTER, .size = 64, .struct_type = FILE_SEGMENT_ELEMENT, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			118041 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDirectoryA", .nargs = 2, .rva = 93768, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			93859 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetPrivateObjectSecurityEx", .nargs = 6, .rva = 221884, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ModificationDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectsSecurityDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AutoInheritFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221931 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentDirectoryA", .nargs = 2, .rva = 129783, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			130044 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentDirectoryW", .nargs = 2, .rva = 81273, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			81296 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OutputDebugStringW", .nargs = 1, .rva = 140863, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpOutputString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			140951 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LockResource", .nargs = 1, .rva = 35565, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hResData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			35574 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadResource", .nargs = 2, .rva = 54539, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hResInfo", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			54617, 175857 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileA", .nargs = 2, .rva = 143848, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 2560, .struct_type = WIN32_FIND_DATAA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			144144 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileW", .nargs = 2, .rva = 41877, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 4736, .struct_type = WIN32_FIND_DATAW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			41900 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlsSetValue", .nargs = 2, .rva = 31892, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFlsData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31953 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddMandatoryAce", .nargs = 5, .rva = 62838, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MandatoryPolicy", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pLabelSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			62878 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileSizeEx", .nargs = 2, .rva = 56908, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSize", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			56963 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLogicalDrives", .nargs = 0, .rva = 116563, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			116611, 179616 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapViewOfFileEx", .nargs = 6, .rva = 35882, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hFileMappingObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesToMap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36001 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LockFile", .nargs = 5, .rva = 148098, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToLockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToLockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			148203 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCPInfoExW", .nargs = 3, .rva = 109691, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCPInfoEx", .type = STRUCT | POINTER, .size = 4352, .struct_type = CPINFOEXW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			109853 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CheckTokenMembership", .nargs = 3, .rva = 43943, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SidToCheck", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IsMember", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			44388 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileW", .nargs = 7, .rva = 43088, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwCreationDisposition", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlagsAndAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTemplateFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			43670 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileInformationByHandle", .nargs = 4, .rva = 124404, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileInformationClass", .type = ENUMERATION, .size = 32, .struct_type = FILE_INFO_BY_HANDLE_CLASS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			124467 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitForMultipleObjectsEx", .nargs = 5, .rva = 27184, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpHandles", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWaitAll", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOEMCP", .nargs = 0, .rva = 55905, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			55910 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteFileA", .nargs = 1, .rva = 51361, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			51409 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteFileW", .nargs = 1, .rva = 68021, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			68297 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LCMapStringA", .nargs = 6, .rva = 157607, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMapFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDestStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			157921 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LCMapStringW", .nargs = 6, .rva = 37594, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMapFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDestStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			37682 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMutexExA", .nargs = 4, .rva = 50042, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			50111 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMutexExW", .nargs = 4, .rva = 44396, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44521 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSecurityDescriptorGroup", .nargs = 3, .rva = 61220, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pGroup", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpbGroupDefaulted", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			61262 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrlenA", .nargs = 1, .rva = 29405, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			29452, 168660 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrlenW", .nargs = 1, .rva = 29047, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			29114, 168814 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BemCreateReference", .nargs = 4, .rva = 120068, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "iid", .type = STRUCT | REFERENCE, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "interfaceInstance", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "freeCallback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "reference", .type = TYPEDEF | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			120112 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DuplicateTokenEx", .nargs = 6, .rva = 43794, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hExistingToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTokenAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "ImpersonationLevel", .type = ENUMERATION, .size = 32, .struct_type = SECURITY_IMPERSONATION_LEVEL, .arg_dir = IN},
			{.name = "TokenType", .type = ENUMERATION, .size = 32, .struct_type = TOKEN_TYPE, .arg_dir = IN},
			{.name = "phNewToken", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			43901 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEnvironmentVariableW", .nargs = 2, .rva = 80890, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			80973 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstVolumeW", .nargs = 2, .rva = 212091, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212409 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsAlloc", .nargs = 0, .rva = 50128, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			50205 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateEventA", .nargs = 4, .rva = 30990, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bManualReset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInitialState", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31030 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateEventW", .nargs = 4, .rva = 30878, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bManualReset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInitialState", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30919 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEndOfFile", .nargs = 1, .rva = 63529, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			63667 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalUnlock", .nargs = 1, .rva = 138377, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			138507 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheckByTypeResultListAndAuditAlarmByHandleW", .nargs = 17, .rva = 220883, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AuditType", .type = ENUMERATION, .size = 32, .struct_type = AUDIT_EVENT_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .type = STRUCT | POINTER, .size = 64, .struct_type = OBJECT_TYPE_LIST, .arg_dir = INOUT},
			{.name = "ObjectTypeListLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccessList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessStatusList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pfGenerateOnClose", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			221056 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteTimerQueueTimer", .nargs = 3, .rva = 40672, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40723 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnmapViewOfFile", .nargs = 1, .rva = 27645, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27681 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MultiByteToWideChar", .nargs = 6, .rva = 32944, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMultiByteStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbMultiByte", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpWideCharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchWideChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			33328 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultLCID", .nargs = 0, .rva = 46661, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			46681 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PulseEvent", .nargs = 1, .rva = 147823, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			147851 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleFileNameA", .nargs = 3, .rva = 31699, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31884 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleFileNameW", .nargs = 3, .rva = 31378, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31598 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDirectoryW", .nargs = 2, .rva = 60100, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60171 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeAcl", .nargs = 3, .rva = 39156, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "nAclLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAclRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39188 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ObjectDeleteAuditAlarmW", .nargs = 3, .rva = 221135, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenerateOnClose", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221189 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReleaseMutex", .nargs = 1, .rva = 5729, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMutex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			5757 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapViewOfFile", .nargs = 5, .rva = 56502, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hFileMappingObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesToMap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			56626 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeSecurityDescriptor", .nargs = 2, .rva = 39119, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39148 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SwitchToThread", .nargs = 0, .rva = 37205, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			37223 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadToken", .nargs = 2, .rva = 40873, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Thread", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40919 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessAffinityUpdateMode", .nargs = 2, .rva = 209764, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			209834 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EqualSid", .nargs = 2, .rva = 39575, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid1", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid2", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39604 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadPriorityBoost", .nargs = 2, .rva = 211037, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDisablePriorityBoost", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			211087 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAce", .nargs = 3, .rva = 35345, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = IN},
			{.name = "dwAceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pAce", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			35377 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLocalesA", .nargs = 2, .rva = 153130, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			153153 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLocalesW", .nargs = 2, .rva = 235138, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235162 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidCodePage", .nargs = 1, .rva = 68574, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			68634 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TransactNamedPipe", .nargs = 7, .rva = 128134, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpInBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nInBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOutBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nOutBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			128261, 166985, 167054 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSecurityDescriptorLength", .nargs = 1, .rva = 39877, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlLengthSecurityDescriptor"
	},
	{
		.name = "FlsAlloc", .nargs = 1, .rva = 51016, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCallback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			51046 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalLock", .nargs = 1, .rva = 138154, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			138290 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadId", .nargs = 1, .rva = 138855, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Thread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			138894 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateRemoteThread", .nargs = 7, .rva = 211136, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwStackSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartAddress", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpThreadId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			211170 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePrivateObjectSecurity", .nargs = 6, .rva = 161161, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ParentDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreatorDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "IsDirectoryObject", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
		}, .rets_rva = 
		{
			161202 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EqualDomainSid", .nargs = 3, .rva = 119193, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid1", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid2", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pfEqual", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			119453 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitNamedPipeW", .nargs = 2, .rva = 163853, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNamedPipeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			164274 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualAllocEx", .nargs = 5, .rva = 31160, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flAllocationType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31223 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsNLSDefinedString", .nargs = 5, .rva = 92156, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Function", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchStr", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			92219 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStringTypeExW", .nargs = 5, .rva = 60050, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60092 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetEnvironmentVariableA", .nargs = 3, .rva = 31961, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			32216 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDiskFreeSpaceExA", .nargs = 4, .rva = 165190, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDirectoryName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFreeBytesAvailableToCaller", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = IN},
			{.name = "lpTotalNumberOfBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfFreeBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			165257 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDiskFreeSpaceExW", .nargs = 4, .rva = 131253, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDirectoryName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFreeBytesAvailableToCaller", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = IN},
			{.name = "lpTotalNumberOfBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfFreeBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			131534 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FatalAppExitA", .nargs = 2, .rva = 210077, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "uAction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMessageText", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			210160 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FatalAppExitW", .nargs = 2, .rva = 209946, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "uAction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMessageText", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			210028 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapUnlock", .nargs = 1, .rva = 117455, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			117473 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserDefaultLangID", .nargs = 0, .rva = 147128, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetWaitableTimerEx", .nargs = 7, .rva = 40287, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hTimer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDueTime", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = IN},
			{.name = "lPeriod", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pfnCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpArgToCompletionRoutine", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WakeContext", .type = STRUCT | POINTER, .size = 192, .struct_type = REASON_CONTEXT, .arg_dir = IN},
			{.name = "TolerableDelay", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40440 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ObjectPrivilegeAuditAlarmW", .nargs = 6, .rva = 221064, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Privileges", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = IN},
			{.name = "AccessGranted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221127 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DisableThreadLibraryCalls", .nargs = 1, .rva = 36260, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hLibModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36290 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFreeAce", .nargs = 2, .rva = 221665, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = IN},
			{.name = "pAce", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			221705 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemTime", .nargs = 1, .rva = 57866, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			57982 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFullPathNameA", .nargs = 4, .rva = 51417, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = ANSI_CHAR | POINTER_POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			51735 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocaleInfoEx", .nargs = 4, .rva = 69719, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			69754 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TrySubmitThreadpoolCallback", .nargs = 3, .rva = 56351, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pfns", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			56383 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadpoolStackInformation", .nargs = 2, .rva = 263437, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ptpp", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ptpsi", .type = STRUCT | POINTER, .size = 64, .struct_type = TP_POOL_STACK_INFORMATION, .arg_dir = IN},
		}, .rets_rva = 
		{
			263473 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualQueryEx", .nargs = 4, .rva = 36510, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 224, .struct_type = MEMORY_BASIC_INFORMATION, .arg_dir = INOUT},
			{.name = "dwLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36551 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheck", .nargs = 8, .rva = 39671, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "PrivilegeSet", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = INOUT},
			{.name = "PrivilegeSetLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AccessStatus", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			39734 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSidSubAuthorityCount", .nargs = 1, .rva = 30199, 
		.return_type = UNSIGNED_BYTE | POINTER, .return_size = 1, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlSubAuthorityCountSid"
	},
	{
		.name = "FreeLibrary", .nargs = 1, .rva = 34874, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hLibModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34994 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcpynA", .nargs = 3, .rva = 149654, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iMaxLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			149770, 168623 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserDefaultLocaleName", .nargs = 2, .rva = 230177, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchLocaleName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			230276 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SearchPathW", .nargs = 6, .rva = 72704, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtension", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = WIDE_CHAR | POINTER_POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			73008 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLongPathNameA", .nargs = 3, .rva = 219817, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszShortPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszLongPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			220211 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetLocalTime", .nargs = 1, .rva = 207505, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
		}, .rets_rva = 
		{
			207733 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocalTime", .nargs = 1, .rva = 37430, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			37586 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalFileTimeToFileTime", .nargs = 2, .rva = 125818, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocalFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			125879 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVersionExA", .nargs = 1, .rva = 50270, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 1184, .struct_type = OSVERSIONINFOA, .arg_dir = IN},
		}, .rets_rva = 
		{
			50502 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushFileBuffers", .nargs = 1, .rva = 63675, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			63735 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCPInfo", .nargs = 2, .rva = 50510, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCPInfo", .type = STRUCT | POINTER, .size = 160, .struct_type = CPINFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			50635 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeSid", .nargs = 3, .rva = 39894, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Sid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pIdentifierAuthority", .type = STRUCT | POINTER, .size = 48, .struct_type = SID_IDENTIFIER_AUTHORITY, .arg_dir = IN},
			{.name = "nSubAuthorityCount", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39926 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesExA", .nargs = 3, .rva = 149264, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = GET_FILEEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			149318 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesExW", .nargs = 3, .rva = 61773, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = GET_FILEEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			61933 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DuplicateHandle", .nargs = 7, .rva = 29497, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSourceProcessHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hSourceHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTargetProcessHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			29577 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumePathNameW", .nargs = 3, .rva = 217171, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumePathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217193 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapQueryInformation", .nargs = 5, .rva = 211388, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "HeapHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HeapInformationClass", .type = ENUMERATION, .size = 32, .struct_type = HEAP_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "HeapInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "HeapInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			211432 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DebugBreak", .nargs = 0, .rva = 210969, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
			210972 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityDescriptorOwner", .nargs = 3, .rva = 39495, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pOwner", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bOwnerDefaulted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39527 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextFileA", .nargs = 2, .rva = 144152, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 2560, .struct_type = WIN32_FIND_DATAA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			144217 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextFileW", .nargs = 2, .rva = 128951, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 4736, .struct_type = WIN32_FIND_DATAW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			129230 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ObjectOpenAuditAlarmW", .nargs = 12, .rva = 126346, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Privileges", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = IN},
			{.name = "ObjectCreation", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessGranted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenerateOnClose", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			126447 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadPriorityBoost", .nargs = 2, .rva = 210978, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bDisablePriorityBoost", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			211029 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenMutexW", .nargs = 3, .rva = 36009, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36144 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindClose", .nargs = 1, .rva = 58667, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			58802, 183299 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedCompareExchange", .nargs = 3, .rva = 26912, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Destination", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Exchange", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Comperand", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26928 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStringTypeA", .nargs = 5, .rva = 122295, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			122452 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStringTypeW", .nargs = 4, .rva = 48009, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			48129 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualAllocExNuma", .nargs = 6, .rva = 209657, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flAllocationType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nndPreferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			209756 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidLocale", .nargs = 2, .rva = 68753, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			68936 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDiskFreeSpaceA", .nargs = 5, .rva = 162194, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSectorsPerCluster", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpBytesPerSector", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNumberOfFreeClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			162264 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDiskFreeSpaceW", .nargs = 5, .rva = 108982, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSectorsPerCluster", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpBytesPerSector", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNumberOfFreeClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			109300 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessPreferredUILanguages", .nargs = 4, .rva = 256449, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			256498 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlsFree", .nargs = 1, .rva = 49842, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			49868 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultLangID", .nargs = 0, .rva = 62526, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			62547 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeEnvironmentStringsA", .nargs = 1, .rva = 50761, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "penv", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			50793 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeEnvironmentStringsW", .nargs = 1, .rva = 50761, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "penv", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			50793 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadPriority", .nargs = 1, .rva = 46192, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			46249 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolTimer", .nargs = 3, .rva = 71937, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "pfnti", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			71979 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStdHandle", .nargs = 1, .rva = 50933, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nStdHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			51008 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadFileScatter", .nargs = 5, .rva = 118059, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "aSegmentArray", .type = UNION | POINTER, .size = 64, .struct_type = FILE_SEGMENT_ELEMENT, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			118199 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsDBCSLeadByte", .nargs = 1, .rva = 35689, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TestChar", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			35729 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueueUserAPC", .nargs = 3, .rva = 140979, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pfnAPC", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			141075 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteTimerQueueEx", .nargs = 2, .rva = 121355, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			121404 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessHeaps", .nargs = 2, .rva = 149936, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NumberOfHeaps", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessHeaps", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlGetProcessHeaps"
	},
	{
		.name = "VerLanguageNameA", .nargs = 3, .rva = 110049, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szLang", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			110200 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VerLanguageNameW", .nargs = 3, .rva = 109868, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szLang", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			110000 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetWindowsAccountDomainSid", .nargs = 3, .rva = 119461, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDomainSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbDomainSid", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			119559 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNamedPipeClientComputerNameW", .nargs = 3, .rva = 145965, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientComputerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ClientComputerNameLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			146032 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadPriority", .nargs = 2, .rva = 46007, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nPriority", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			46184 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstChangeNotificationA", .nargs = 3, .rva = 217889, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWatchSubtree", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNotifyFilter", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217948 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstChangeNotificationW", .nargs = 3, .rva = 110296, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWatchSubtree", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNotifyFilter", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			110500 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileMappingNumaW", .nargs = 7, .rva = 40085, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileMappingAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nndPreferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40279 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAuditAccessObjectAce", .nargs = 9, .rva = 221581, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "InheritedObjectTypeGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAuditSuccess", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAuditFailure", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221657 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CloseHandle", .nargs = 1, .rva = 27417, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27455 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SystemTimeToFileTime", .nargs = 2, .rva = 57994, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			58100 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateRestrictedToken", .nargs = 9, .rva = 93086, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExistingTokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DisableSidCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SidsToDisable", .type = STRUCT | POINTER, .size = 64, .struct_type = SID_AND_ATTRIBUTES, .arg_dir = IN},
			{.name = "DeletePrivilegeCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PrivilegesToDelete", .type = STRUCT | POINTER, .size = 96, .struct_type = LUID_AND_ATTRIBUTES, .arg_dir = IN},
			{.name = "RestrictedSidCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SidsToRestrict", .type = STRUCT | POINTER, .size = 64, .struct_type = SID_AND_ATTRIBUTES, .arg_dir = IN},
			{.name = "NewTokenHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			93311 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCurrentDirectoryA", .nargs = 1, .rva = 125887, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			125967 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCurrentDirectoryW", .nargs = 1, .rva = 81304, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			81364 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheckByTypeResultListAndAuditAlarmW", .nargs = 16, .rva = 220705, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AuditType", .type = ENUMERATION, .size = 32, .struct_type = AUDIT_EVENT_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .type = STRUCT | POINTER, .size = 64, .struct_type = OBJECT_TYPE_LIST, .arg_dir = INOUT},
			{.name = "ObjectTypeListLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccessList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessStatusList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pfGenerateOnClose", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			220875 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePipe", .nargs = 4, .rva = 143590, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hReadPipe", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hWritePipe", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpPipeAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			143840 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVersionExW", .nargs = 1, .rva = 35612, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 2208, .struct_type = OSVERSIONINFOW, .arg_dir = IN},
		}, .rets_rva = 
		{
			35665 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CallbackMayRunLong", .nargs = 1, .rva = 263557, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pci", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			263590 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FoldStringW", .nargs = 5, .rva = 158289, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwMapFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDestStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			158451 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCommandLineA", .nargs = 0, .rva = 50750, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
		}, .rets_rva = 
		{
			50755 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCommandLineW", .nargs = 0, .rva = 55894, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			55899 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheckByTypeAndAuditAlarmW", .nargs = 16, .rva = 220534, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AuditType", .type = ENUMERATION, .size = 32, .struct_type = AUDIT_EVENT_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .type = STRUCT | POINTER, .size = 64, .struct_type = OBJECT_TYPE_LIST, .arg_dir = INOUT},
			{.name = "ObjectTypeListLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AccessStatus", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pfGenerateOnClose", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			220697 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocaleInfoA", .nargs = 4, .rva = 84597, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			84825 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocaleInfoW", .nargs = 4, .rva = 136919, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			136979 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAuditAccessAce", .nargs = 6, .rva = 117380, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAuditSuccess", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAuditFailure", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			117421 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReleaseSemaphore", .nargs = 3, .rva = 29775, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSemaphore", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lReleaseCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPreviousCount", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			29807 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SystemTimeToTzSpecificLocalTime", .nargs = 3, .rva = 96339, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = IN},
			{.name = "lpUniversalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpLocalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			96965 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringOrdinal", .nargs = 5, .rva = 39934, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount1", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount2", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bIgnoreCase", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40022 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeResource", .nargs = 1, .rva = 35272, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hResData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			35274 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolIo", .nargs = 4, .rva = 127728, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "fl", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pfnio", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			127947 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadStackGuarantee", .nargs = 1, .rva = 83330, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StackSizeInBytes", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			83578 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFilePointer", .nargs = 4, .rva = 57101, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lDistanceToMove", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDistanceToMoveHigh", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwMoveMethod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			57296 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLanguageGroupsW", .nargs = 3, .rva = 118305, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLanguageGroupEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			118327 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedDecrement", .nargs = 1, .rva = 26878, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddend", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26892 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetLocaleInfoW", .nargs = 3, .rva = 230821, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			231348 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcpynW", .nargs = 3, .rva = 163045, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iMaxLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			163165, 168777 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConnectNamedPipe", .nargs = 2, .rva = 145835, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			145957 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidLocaleName", .nargs = 1, .rva = 156282, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			156331 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityAccessMask", .nargs = 2, .rva = 116200, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			116246 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapViewOfFileExNuma", .nargs = 7, .rva = 209464, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hFileMappingObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesToMap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nndPreferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			209649 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateRemoteThreadEx", .nargs = 8, .rva = 48692, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwStackSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartAddress", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAttributeList", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpThreadId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			49304 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadLocale", .nargs = 0, .rva = 35737, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			35749 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ObjectCloseAuditAlarmW", .nargs = 3, .rva = 126290, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenerateOnClose", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			126338 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocaleNameToLCID", .nargs = 2, .rva = 60949, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			61027 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSidSubAuthority", .nargs = 2, .rva = 39852, 
		.return_type = UNSIGNED_DOUBLE_WORD | POINTER, .return_size = 4, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlSubAuthoritySid"
	},
	{
		.name = "AddAccessAllowedObjectAce", .nargs = 7, .rva = 221425, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "InheritedObjectTypeGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221495 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheckAndAuditAlarmW", .nargs = 11, .rva = 146175, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SubsystemName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HandleId", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "ObjectCreation", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AccessStatus", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pfGenerateOnClose", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			146302 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateNamedPipeW", .nargs = 8, .rva = 120519, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOpenMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPipeMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nMaxInstances", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nOutBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nInBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDefaultTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			120960 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedIncrement", .nargs = 1, .rva = 26895, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddend", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26909 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityDescriptorSacl", .nargs = 4, .rva = 51175, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bSaclPresent", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSacl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = IN},
			{.name = "bSaclDefaulted", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			51210 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualProtect", .nargs = 4, .rva = 139965, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flNewProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpflOldProtect", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			139990 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindResourceExW", .nargs = 4, .rva = 54317, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wLanguage", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			54465 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsWow64Process", .nargs = 2, .rva = 35173, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Wow64Process", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			35230 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLengthSid", .nargs = 1, .rva = 30612, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlLengthSid"
	},
	{
		.name = "GetSecurityDescriptorRMControl", .nargs = 2, .rva = 222034, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RMControl", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			222063 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSecurityDescriptorOwner", .nargs = 3, .rva = 61170, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pOwner", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpbOwnerDefaulted", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			61212 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsSetValue", .nargs = 2, .rva = 27508, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwTlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTlsValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27550 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCalendarInfoW", .nargs = 4, .rva = 230351, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			230797 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindVolumeClose", .nargs = 1, .rva = 212417, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolume", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212449 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PostQueuedCompletionStatus", .nargs = 4, .rva = 132766, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesTransferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCompletionKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			132807 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ImpersonateNamedPipeClient", .nargs = 1, .rva = 145779, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			145827 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AllocateAndInitializeSid", .nargs = 11, .rva = 43713, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pIdentifierAuthority", .type = STRUCT | POINTER, .size = 48, .struct_type = SID_IDENTIFIER_AUTHORITY, .arg_dir = IN},
			{.name = "nSubAuthorityCount", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority0", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority1", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority2", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority3", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority4", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority5", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority6", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSubAuthority7", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			43769 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindCloseChangeNotification", .nargs = 1, .rva = 64024, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hChangeHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27455 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLongPathNameW", .nargs = 3, .rva = 105843, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszShortPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszLongPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			106743 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalAlloc", .nargs = 2, .rva = 55006, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			55122 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateEventExA", .nargs = 4, .rva = 30927, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30982 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateEventExW", .nargs = 4, .rva = 30746, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30870 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileA", .nargs = 7, .rva = 220345, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwCreationDisposition", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlagsAndAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTemplateFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			220416 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopySid", .nargs = 3, .rva = 39535, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nDestinationSidLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDestinationSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pSourceSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39567 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetWindowsDirectoryA", .nargs = 2, .rva = 161013, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			180446 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetWindowsDirectoryW", .nargs = 2, .rva = 60018, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			180466 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ExpandEnvironmentStringsA", .nargs = 3, .rva = 85035, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSrc", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDst", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			85379 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ExpandEnvironmentStringsW", .nargs = 3, .rva = 45814, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSrc", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDst", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			45893 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileTime", .nargs = 4, .rva = 133093, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpLastAccessTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
		}, .rets_rva = 
		{
			133203 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMutexA", .nargs = 3, .rva = 50004, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInitialOwner", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			50034 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMutexW", .nargs = 3, .rva = 44541, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInitialOwner", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44575 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleHandleA", .nargs = 1, .rva = 34808, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpModuleName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34866 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleHandleW", .nargs = 1, .rva = 34587, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpModuleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34626 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DuplicateToken", .nargs = 3, .rva = 43909, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExistingTokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ImpersonationLevel", .type = ENUMERATION, .size = 32, .struct_type = SECURITY_IMPERSONATION_LEVEL, .arg_dir = IN},
			{.name = "DuplicateTokenHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			43935 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryThreadpoolStackInformation", .nargs = 2, .rva = 263481, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ptpp", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ptpsi", .type = STRUCT | POINTER, .size = 64, .struct_type = TP_POOL_STACK_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			263517 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNLSString", .nargs = 7, .rva = 160518, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFindNLSStringFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringSource", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSource", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchValue", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchFound", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			160571 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetACP", .nargs = 0, .rva = 35582, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			35587 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemWindowsDirectoryA", .nargs = 2, .rva = 161040, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			161149 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemWindowsDirectoryW", .nargs = 2, .rva = 59907, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60010 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLastError", .nargs = 0, .rva = 26630, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26639 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCalendarInfoW", .nargs = 6, .rva = 152443, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			152499 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumDateFormatsW", .nargs = 3, .rva = 153956, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			153993 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesA", .nargs = 1, .rva = 57722, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			57774 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesW", .nargs = 1, .rva = 58108, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			58223 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LCIDToLocaleName", .nargs = 4, .rva = 70140, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			70238 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsGetValue", .nargs = 1, .rva = 26558, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "dwTlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			26593 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LCMapStringEx", .nargs = 9, .rva = 37690, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMapFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDestStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "sortHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			37914 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FileTimeToSystemTime", .nargs = 2, .rva = 38547, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			38661 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsTokenRestricted", .nargs = 1, .rva = 144914, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			145017 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumTimeFormatsEx", .nargs = 4, .rva = 156666, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeFmtEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			156701 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemTimeAsFileTime", .nargs = 1, .rva = 30565, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemTimeAsFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			30600 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalReAlloc", .nargs = 3, .rva = 36763, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36940 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetNamedPipeHandleState", .nargs = 4, .rva = 128009, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMaxCollectionCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCollectDataTimeout", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			128112 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEnvironmentVariableA", .nargs = 2, .rva = 144563, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			144721 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RaiseException", .nargs = 4, .rva = 46860, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "dwExceptionCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwExceptionFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfArguments", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpArguments", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			46945 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteFileEx", .nargs = 5, .rva = 164739, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "lpCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			164868 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedExchange", .nargs = 2, .rva = 27458, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Target", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Value", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27474 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileValidData", .nargs = 2, .rva = 118217, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValidDataLength", .type = SIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			118286 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnlockFile", .nargs = 5, .rva = 148035, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			148090 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadpoolThreadMinimum", .nargs = 2, .rva = 125254, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ptpp", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cthrdMic", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			125283 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualFreeEx", .nargs = 4, .rva = 31276, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFreeType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31340 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AreAllAccessesGranted", .nargs = 2, .rva = 147388, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			147409 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileApisToANSI", .nargs = 0, .rva = 208007, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
			208059 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryProcessAffinityUpdateMode", .nargs = 2, .rva = 209842, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			209902 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadPreferredUILanguages", .nargs = 4, .rva = 61059, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			61094 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserDefaultUILanguage", .nargs = 0, .rva = 36442, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			36473, 202564 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumDateFormatsExEx", .nargs = 4, .rva = 156709, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProcExEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			156746 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSecurityDescriptorRMControl", .nargs = 2, .rva = 222071, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RMControl", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			222091 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BemCreateContractFrom", .nargs = 5, .rva = 120200, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dllPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "extensionId", .type = STRUCT | REFERENCE, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "contractDescription", .type = TYPEDEF | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hostContract", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "contract", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			120242 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFilePointerEx", .nargs = 4, .rva = 56020, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "liDistanceToMove", .type = UNION, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = IN},
			{.name = "lpNewFilePointer", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = INOUT},
			{.name = "dwMoveMethod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			56140 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteProcessMemory", .nargs = 5, .rva = 148211, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			148350 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSidLengthRequired", .nargs = 1, .rva = 39646, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nSubAuthorityCount", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			39663 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoW", .nargs = 4, .rva = 235248, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCalInfoEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235288 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileTime", .nargs = 4, .rva = 140118, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpLastAccessTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			140208 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVersion", .nargs = 0, .rva = 60222, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			60270 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetWaitableTimer", .nargs = 6, .rva = 40448, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hTimer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDueTime", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = IN},
			{.name = "lPeriod", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pfnCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpArgToCompletionRoutine", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fResume", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40515 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTickCount", .nargs = 0, .rva = 26432, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26479 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResolveLocaleName", .nargs = 3, .rva = 92241, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNameToResolve", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchLocaleName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			92442 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ExitProcess", .nargs = 1, .rva = 209910, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "uExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitForSingleObjectEx", .nargs = 3, .rva = 5936, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			6084 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetQueuedCompletionStatus", .nargs = 5, .rva = 132638, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesTransferred", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCompletionKey", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER_POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			132723 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelWaitableTimer", .nargs = 1, .rva = 46824, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hTimer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			46852 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Beep", .nargs = 2, .rva = 207089, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFreq", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDuration", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			207252 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpiA", .nargs = 2, .rva = 140335, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			140383 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoExW", .nargs = 4, .rva = 235296, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCalInfoEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235336 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidSecurityDescriptor", .nargs = 1, .rva = 60786, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60812 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringW", .nargs = 6, .rva = 28787, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCmpFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount1", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount2", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			28837 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryDosDeviceW", .nargs = 3, .rva = 102360, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDeviceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ucchMax", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			102715 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFullPathNameW", .nargs = 4, .rva = 58484, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = WIDE_CHAR | POINTER_POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			58528 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleHandleExA", .nargs = 3, .rva = 140242, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpModuleName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phModule", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			140327 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleHandleExW", .nargs = 3, .rva = 46484, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpModuleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phModule", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			46538 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLocalesEx", .nargs = 4, .rva = 235170, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235213 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringA", .nargs = 6, .rva = 33841, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCmpFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount1", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount2", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			34156 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAce", .nargs = 5, .rva = 60903, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwStartingAceIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pAceList", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nAceListLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60941 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenThread", .nargs = 3, .rva = 44726, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwThreadId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44812 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileApisToOEM", .nargs = 0, .rva = 147554, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
			147606 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetPrivateObjectSecurity", .nargs = 5, .rva = 221832, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ModificationDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectsSecurityDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221876 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AccessCheckByType", .nargs = 11, .rva = 60610, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PrincipalSelfSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeList", .type = STRUCT | POINTER, .size = 64, .struct_type = OBJECT_TYPE_LIST, .arg_dir = INOUT},
			{.name = "ObjectTypeListLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = INOUT},
			{.name = "PrivilegeSet", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = INOUT},
			{.name = "PrivilegeSetLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GrantedAccess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "AccessStatus", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			60682 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenProcessToken", .nargs = 3, .rva = 29631, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			29663 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResumeThread", .nargs = 1, .rva = 46687, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			46717 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentThreadId", .nargs = 0, .rva = 26489, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26498 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePrivateObjectSecurityEx", .nargs = 8, .rva = 80670, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ParentDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CreatorDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewDescriptor", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ObjectType", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "IsContainerObject", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AutoInheritFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Token", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GenericMapping", .type = STRUCT | POINTER, .size = 128, .struct_type = GENERIC_MAPPING, .arg_dir = IN},
		}, .rets_rva = 
		{
			80717 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDriveTypeA", .nargs = 1, .rva = 141493, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			141558 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDriveTypeW", .nargs = 1, .rva = 55408, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			55650 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAccessAllowedAce", .nargs = 4, .rva = 60179, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			60214 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetStdHandle", .nargs = 2, .rva = 82105, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nStdHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			82148 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserDefaultLCID", .nargs = 0, .rva = 35538, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			35559 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RemoveDirectoryW", .nargs = 1, .rva = 93332, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			93596 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadProcessMemory", .nargs = 5, .rva = 39434, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			39480 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemCodePagesW", .nargs = 2, .rva = 235221, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCodePageEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			235240 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAccessAllowedAceEx", .nargs = 5, .rva = 44820, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			44858 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BemFreeContract", .nargs = 1, .rva = 263820, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "contract", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			263842 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenSemaphoreW", .nargs = 3, .rva = 132495, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			132630 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateTimerQueueTimer", .nargs = 7, .rva = 40605, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "phNewTimer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Parameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DueTime", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Period", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			40664 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumberFormatW", .nargs = 6, .rva = 150948, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = STRUCT | POINTER, .size = 192, .struct_type = NUMBERFMTW, .arg_dir = IN},
			{.name = "lpNumberStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchNumber", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			151016 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLogicalProcessorInformation", .nargs = 2, .rva = 116834, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Buffer", .type = STRUCT | POINTER, .size = 192, .struct_type = SYSTEM_LOGICAL_PROCESSOR_INFORMATION, .arg_dir = INOUT},
			{.name = "ReturnedLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			116905 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ProcessIdToSessionId", .nargs = 2, .rva = 27793, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSessionId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			27929 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileInformationByHandle", .nargs = 2, .rva = 45528, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileInformation", .type = STRUCT | POINTER, .size = 416, .struct_type = BY_HANDLE_FILE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			45795 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumeInformationByHandleW", .nargs = 8, .rva = 80042, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeNameBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nVolumeNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeSerialNumber", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaximumComponentLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFileSystemFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFileSystemNameBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nFileSystemNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			80337 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetHandleCount", .nargs = 1, .rva = 35565, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uNumber", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			35574 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareFileTime", .nargs = 2, .rva = 58420, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime1", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpFileTime2", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
		}, .rets_rva = 
		{
			58466 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextVolumeW", .nargs = 3, .rva = 211440, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolume", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212083 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnregisterWaitEx", .nargs = 2, .rva = 63803, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "WaitHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			63852, 32363 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAuditAccessAceEx", .nargs = 7, .rva = 221347, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAuditSuccess", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAuditFailure", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221417 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualAlloc", .nargs = 4, .rva = 31231, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flAllocationType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			31256 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenThreadToken", .nargs = 4, .rva = 29726, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ThreadHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OpenAsSelf", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			29762 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushViewOfFile", .nargs = 2, .rva = 63743, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesToFlush", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			63795 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeSid", .nargs = 1, .rva = 43777, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlFreeSid"
	},
	{
		.name = "IsValidAcl", .nargs = 1, .rva = 69685, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = IN},
		}, .rets_rva = 
		{
			69711 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DefineDosDeviceW", .nargs = 3, .rva = 157131, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDeviceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			157579 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateWaitableTimerExW", .nargs = 4, .rva = 146582, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimerAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpTimerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			146696 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeviceIoControl", .nargs = 8, .rva = 38831, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIoControlCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpInBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nInBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOutBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nOutBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBytesReturned", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			38999, 170559 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64RevertWow64FsRedirection", .nargs = 1, .rva = 208393, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "OlValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			208429 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadLibraryExW", .nargs = 3, .rva = 47767, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLibFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			48001 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitForSingleObject", .nargs = 2, .rva = 30719, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30738 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadUILanguage", .nargs = 0, .rva = 49509, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			49717 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetEnvironmentVariableW", .nargs = 3, .rva = 58305, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			58394 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AreFileApisANSI", .nargs = 0, .rva = 162466, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			162485 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnlockFileEx", .nargs = 5, .rva = 147933, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			148027 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetEnvironmentStrings", .nargs = 0, .rva = 144225, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
		}, .rets_rva = 
		{
			144400 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileType", .nargs = 1, .rva = 57529, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			57659 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WideCharToMultiByte", .nargs = 8, .rva = 32407, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpWideCharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchWideChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMultiByteStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbMultiByte", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDefaultChar", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpUsedDefaultChar", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			32636 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SleepEx", .nargs = 2, .rva = 6177, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			6303 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumTimeFormatsW", .nargs = 3, .rva = 153913, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeFmtEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			153948 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsFree", .nargs = 1, .rva = 49733, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwTlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			49834 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpW", .nargs = 2, .rva = 29878, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			29923 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalAlloc", .nargs = 2, .rva = 30409, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			30514 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RevertToSelf", .nargs = 0, .rva = 39278, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			39316, 185270 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LockFileEx", .nargs = 6, .rva = 162882, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToLockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToLockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			163031 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OutputDebugStringA", .nargs = 1, .rva = 122981, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpOutputString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			123077 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetHandleInformation", .nargs = 2, .rva = 132397, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			132487 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetShortPathNameW", .nargs = 3, .rva = 218713, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszLongPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszShortPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			219693 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentProcessId", .nargs = 0, .rva = 26832, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26841 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeCriticalSectionAndSpinCount", .nargs = 2, .rva = 29291, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCriticalSection", .type = STRUCT | POINTER, .size = 192, .struct_type = RTL_CRITICAL_SECTION, .arg_dir = INOUT},
			{.name = "dwSpinCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			29312 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessHeap", .nargs = 0, .rva = 26679, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			26691 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PeekNamedPipe", .nargs = 6, .rva = 158762, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTotalBytesAvail", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpBytesLeftThisMessage", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			158989 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTimeZoneInformationForYear", .nargs = 3, .rva = 150853, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wYear", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdtzi", .type = STRUCT | POINTER, .size = 3456, .struct_type = TIME_DYNAMIC_ZONE_INFORMATION, .arg_dir = IN},
			{.name = "ptzi", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			150875 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStartupInfoW", .nargs = 1, .rva = 74534, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			74671 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcAddress", .nargs = 2, .rva = 27689, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProcName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			27785 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualQuery", .nargs = 3, .rva = 36559, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 224, .struct_type = MEMORY_BASIC_INFORMATION, .arg_dir = INOUT},
			{.name = "dwLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36581 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SizeofResource", .nargs = 2, .rva = 54657, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hResInfo", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			54735, 175918 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Sleep", .nargs = 1, .rva = 6153, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			6169 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TerminateProcess", .nargs = 2, .rva = 73653, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			73703 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTokenInformation", .nargs = 5, .rva = 29585, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TokenInformationClass", .type = ENUMERATION, .size = 32, .struct_type = TOKEN_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "TokenInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "TokenInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			29623 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BemFreeReference", .nargs = 1, .rva = 263740, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "reference", .type = TYPEDEF | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			263762 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BemCopyReference", .nargs = 2, .rva = 263770, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "reference", .type = TYPEDEF | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "copiedReference", .type = TYPEDEF | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			263812 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAccessDeniedObjectAce", .nargs = 7, .rva = 221503, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pAcl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "dwAceRevision", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AccessMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ObjectTypeGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "InheritedObjectTypeGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221573 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AdjustTokenGroups", .nargs = 6, .rva = 146704, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TokenHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResetToDefault", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NewState", .type = STRUCT | POINTER, .size = 96, .struct_type = TOKEN_GROUPS, .arg_dir = IN},
			{.name = "BufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreviousState", .type = STRUCT | POINTER, .size = 96, .struct_type = TOKEN_GROUPS, .arg_dir = INOUT},
			{.name = "ReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			146751 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MakeAbsoluteSD", .nargs = 11, .rva = 69605, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSelfRelativeSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pAbsoluteSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwAbsoluteSecurityDescriptorSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDacl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "lpdwDaclSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pSacl", .type = STRUCT | POINTER, .size = 64, .struct_type = ACL, .arg_dir = INOUT},
			{.name = "lpdwSaclSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pOwner", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwOwnerSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pPrimaryGroup", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwPrimaryGroupSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			69667 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PrivilegeCheck", .nargs = 3, .rva = 146469, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ClientToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequiredPrivileges", .type = STRUCT | POINTER, .size = 160, .struct_type = PRIVILEGE_SET, .arg_dir = INOUT},
			{.name = "pfResult", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			146516 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetKernelObjectSecurity", .nargs = 3, .rva = 51218, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Handle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			51250 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapSummary", .nargs = 3, .rva = 211259, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSummary", .type = STRUCT | POINTER, .size = 160, .struct_type = HEAP_SUMMARY, .arg_dir = IN},
		}, .rets_rva = 
		{
			211380 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNLSVersion", .nargs = 3, .rva = 261805, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Function", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
		}, .rets_rva = 
		{
			261855 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertDefaultLocale", .nargs = 1, .rva = 139341, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			139364 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadLibraryExA", .nargs = 3, .rva = 36198, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLibFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			36252 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsWellKnownSid", .nargs = 2, .rva = 130497, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "WellKnownSidType", .type = ENUMERATION, .size = 32, .struct_type = WELL_KNOWN_SID_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			130664 
		}, .jump_in = UNDEFINED
	},
};

int kernelbase_apicalls_size = (sizeof(kernelbase_apicalls) / sizeof(kernelbase_apicalls[0]));