#include "../private.h"

apicall_t kernel32_apicalls[] = 
{
	{
		.name = "CreateThread", .nargs = 6, .rva = 341853, 
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
			341886 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleInputA", .nargs = 4, .rva = 707847, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 160, .struct_type = INPUT_RECORD, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEventsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			707874 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleInputW", .nargs = 4, .rva = 707882, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 160, .struct_type = INPUT_RECORD, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEventsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			707909 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileAttributesA", .nargs = 2, .rva = 232633, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFileAttributesA"
	},
	{
		.name = "SetFileAttributesW", .nargs = 2, .rva = 240923, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFileAttributesW"
	},
	{
		.name = "CreateToolhelp32Snapshot", .nargs = 2, .rva = 259889, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "th32ProcessID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			260113 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsBadHugeWritePtr", .nargs = 2, .rva = 583824, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lp", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ucb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			231751, 456470 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RequestDeviceWakeup", .nargs = 1, .rva = 583145, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			583157 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetDllDirectoryA", .nargs = 1, .rva = 575608, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			575802 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetDllDirectoryW", .nargs = 1, .rva = 575439, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			575600 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNLSStringEx", .nargs = 10, .rva = 383514, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindNLSStringEx"
	},
	{
		.name = "ActivateActCtx", .nargs = 2, .rva = 284945, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hActCtx", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCookie", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			284986 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EscapeCommFunction", .nargs = 2, .rva = 595536, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFunc", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			595745 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapCompact", .nargs = 2, .rva = 228598, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapCompact"
	},
	{
		.name = "ScrollConsoleScreenBufferA", .nargs = 5, .rva = 712812, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpScrollRectangle", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = IN},
			{.name = "lpClipRectangle", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = IN},
			{.name = "dwDestinationOrigin", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpFill", .type = STRUCT | POINTER, .size = 32, .struct_type = CHAR_INFO, .arg_dir = IN},
		}, .rets_rva = 
		{
			712840 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOverlappedResult", .nargs = 4, .rva = 274180, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
			{.name = "lpNumberOfBytesTransferred", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bWait", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetOverlappedResult"
	},
	{
		.name = "GetProcessVersion", .nargs = 1, .rva = 226527, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessVersion"
	},
	{
		.name = "DosDateTimeToFileTime", .nargs = 3, .rva = 246484, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wFatDate", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wFatTime", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			246614 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalWire", .nargs = 1, .rva = 572640, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			302731 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetDynamicTimeZoneInformation", .nargs = 1, .rva = 547005, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 3456, .struct_type = TIME_DYNAMIC_ZONE_INFORMATION, .arg_dir = IN},
		}, .rets_rva = 
		{
			547118 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RtlCaptureContext", .nargs = 1, .rva = 587611, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "ContextRecord", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlCaptureContext"
	},
	{
		.name = "GetCurrentProcess", .nargs = 0, .rva = 314831, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrentProcess"
	},
	{
		.name = "DebugActiveProcessStop", .nargs = 1, .rva = 548253, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			548321 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleFontSize", .nargs = 2, .rva = 712045, 
		.return_type = STRUCT, .return_size = 32, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nFont", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			712148 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetStdHandleEx", .nargs = 3, .rva = 587161, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nStdHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phPrevValue", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetStdHandleEx"
	},
	{
		.name = "GetThreadIdealProcessorEx", .nargs = 2, .rva = 590491, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpIdealProcessor", .type = STRUCT | POINTER, .size = 32, .struct_type = PROCESSOR_NUMBER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590527 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelIo", .nargs = 1, .rva = 390649, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			390681 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindStringOrdinal", .nargs = 6, .rva = 586767, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindStringOrdinal"
	},
	{
		.name = "GetEnvironmentStringsW", .nargs = 0, .rva = 335292, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetEnvironmentStringsW"
	},
	{
		.name = "GetFileMUIPath", .nargs = 7, .rva = 210638, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileMUIPath"
	},
	{
		.name = "LZStart", .nargs = 0, .rva = 687564, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			687567 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDllDirectoryA", .nargs = 2, .rva = 575968, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			576113 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetComputerNameExA", .nargs = 3, .rva = 586783, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NameType", .type = ENUMERATION, .size = 32, .struct_type = COMPUTER_NAME_FORMAT, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetComputerNameExA"
	},
	{
		.name = "GetComputerNameExW", .nargs = 3, .rva = 265988, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NameType", .type = ENUMERATION, .size = 32, .struct_type = COMPUTER_NAME_FORMAT, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetComputerNameExW"
	},
	{
		.name = "RegCloseKey", .nargs = 1, .rva = 314191, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			314369, 495297 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WritePrivateProfileStringA", .nargs = 4, .rva = 382819, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			382869 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WritePrivateProfileStringW", .nargs = 4, .rva = 229611, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			229661 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalFlags", .nargs = 1, .rva = 528120, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			528333, 528369 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserPreferredUILanguages", .nargs = 4, .rva = 425479, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetUserPreferredUILanguages"
	},
	{
		.name = "GetProfileStringA", .nargs = 5, .rva = 227420, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDefault", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			227448 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProfileStringW", .nargs = 5, .rva = 416990, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDefault", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			417018 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaAvailableMemoryNode", .nargs = 2, .rva = 581639, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Node", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AvailableBytes", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581662 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueueUserWorkItem", .nargs = 3, .rva = 277538, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Function", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Context", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			277570 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSymbolicLinkA", .nargs = 3, .rva = 566041, 
		.return_type = UNSIGNED_BYTE, .return_size = 1, .args = 
		{
			{.name = "lpSymlinkFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			566158 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSymbolicLinkW", .nargs = 3, .rva = 563881, 
		.return_type = UNSIGNED_BYTE, .return_size = 1, .args = 
		{
			{.name = "lpSymlinkFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			564203 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocateXStateFeature", .nargs = 3, .rva = 623232, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "Context", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "FeatureId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			623424 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteAtom", .nargs = 1, .rva = 271978, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "nAtom", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			271994 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUILanguageInfo", .nargs = 5, .rva = 587515, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwmszLanguage", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszFallbackLanguages", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchFallbackLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pAttributes", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetUILanguageInfo"
	},
	{
		.name = "GetActiveProcessorGroupCount", .nargs = 0, .rva = 583596, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			583621, 583656 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessIdOfThread", .nargs = 1, .rva = 586847, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Thread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessIdOfThread"
	},
	{
		.name = "CreateIoCompletionPort", .nargs = 4, .rva = 231825, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FileHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExistingCompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfConcurrentThreads", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateIoCompletionPort"
	},
	{
		.name = "SetFileCompletionNotificationModes", .nargs = 2, .rva = 382962, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FileHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			383026 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Heap32ListNext", .nargs = 2, .rva = 590737, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lphl", .type = STRUCT | POINTER, .size = 128, .struct_type = TAGHEAPLIST32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590881 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFinalPathNameByHandleA", .nargs = 4, .rva = 587499, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszFilePath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchFilePath", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFinalPathNameByHandleA"
	},
	{
		.name = "GetFinalPathNameByHandleW", .nargs = 4, .rva = 216618, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszFilePath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchFilePath", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFinalPathNameByHandleW"
	},
	{
		.name = "RemoveDirectoryA", .nargs = 1, .rva = 587071, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "RemoveDirectoryA"
	},
	{
		.name = "DisconnectNamedPipe", .nargs = 1, .rva = 390200, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DisconnectNamedPipe"
	},
	{
		.name = "DeleteVolumeMountPointA", .nargs = 1, .rva = 607789, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			607837 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteVolumeMountPointW", .nargs = 1, .rva = 586607, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			699354 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolCleanupGroup", .nargs = 0, .rva = 231873, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WerUnregisterRuntimeExceptionModule", .nargs = 2, .rva = 620892, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pwszOutOfProcessCallbackDll", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			732589 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TerminateThread", .nargs = 2, .rva = 336551, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TerminateThread"
	},
	{
		.name = "FormatMessageA", .nargs = 7, .rva = 428136, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FormatMessageA"
	},
	{
		.name = "FormatMessageW", .nargs = 7, .rva = 283811, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FormatMessageW"
	},
	{
		.name = "CancelTimerQueueTimer", .nargs = 2, .rva = 622306, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			622341 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentThread", .nargs = 0, .rva = 340817, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrentThread"
	},
	{
		.name = "GetSystemPreferredUILanguages", .nargs = 4, .rva = 218195, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemPreferredUILanguages"
	},
	{
		.name = "ScrollConsoleScreenBufferW", .nargs = 5, .rva = 204598, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpScrollRectangle", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = IN},
			{.name = "lpClipRectangle", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = IN},
			{.name = "dwDestinationOrigin", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpFill", .type = STRUCT | POINTER, .size = 32, .struct_type = CHAR_INFO, .arg_dir = IN},
		}, .rets_rva = 
		{
			204626 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasA", .nargs = 4, .rva = 701598, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Source", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			701649 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasW", .nargs = 4, .rva = 701532, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Source", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			701590 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenFileMappingA", .nargs = 3, .rva = 343771, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			343837 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenFileMappingW", .nargs = 3, .rva = 353716, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenFileMappingW"
	},
	{
		.name = "IsValidLanguageGroup", .nargs = 2, .rva = 587007, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "LanguageGroup", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsValidLanguageGroup"
	},
	{
		.name = "HeapLock", .nargs = 1, .rva = 204962, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapLock"
	},
	{
		.name = "GetNamedPipeClientProcessId", .nargs = 2, .rva = 580049, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientProcessId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			580085 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleMode", .nargs = 2, .rva = 336914, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			336996 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenProcess", .nargs = 3, .rva = 285143, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenProcess"
	},
	{
		.name = "PurgeComm", .nargs = 2, .rva = 597110, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			597240 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNLSVersionEx", .nargs = 3, .rva = 671499, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "function", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFOEX, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			671548 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoExEx", .nargs = 6, .rva = 384201, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumCalendarInfoExEx"
	},
	{
		.name = "GetProcessorSystemCycleTime", .nargs = 3, .rva = 583518, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Group", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Buffer", .type = STRUCT | POINTER, .size = 64, .struct_type = SYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION, .arg_dir = INOUT},
			{.name = "ReturnedLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			583588 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AllocConsole", .nargs = 0, .rva = 705320, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			705520 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindActCtxSectionGuid", .nargs = 5, .rva = 285523, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtensionGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "ulSectionId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGuidToFind", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "ReturnedData", .type = STRUCT | POINTER, .size = 512, .struct_type = TAGACTCTX_SECTION_KEYED_DATA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			285618 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleOutputAttribute", .nargs = 5, .rva = 709549, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAttribute", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwWriteCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfAttrsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709579 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelIoEx", .nargs = 2, .rva = 276187, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CancelIoEx"
	},
	{
		.name = "CreateTimerQueue", .nargs = 0, .rva = 214950, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateTimerQueue"
	},
	{
		.name = "GetAtomNameW", .nargs = 3, .rva = 252952, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nAtom", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			252976 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryThreadCycleTime", .nargs = 2, .rva = 620966, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ThreadHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CycleTime", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			621025 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleOutputCP", .nargs = 1, .rva = 713232, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wCodePageID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			713276 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapSetInformation", .nargs = 4, .rva = 344407, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "HeapHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HeapInformationClass", .type = ENUMERATION, .size = 32, .struct_type = HEAP_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "HeapInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HeapInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapSetInformation"
	},
	{
		.name = "GetProfileIntW", .nargs = 3, .rva = 227376, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDefault", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			227398 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceLanguagesA", .nargs = 5, .rva = 578601, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			578631 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Module32Next", .nargs = 2, .rva = 592194, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpme", .type = STRUCT | POINTER, .size = 4384, .struct_type = TAGMODULEENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			592410 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryActCtxSettingsW", .nargs = 7, .rva = 378025, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hActCtx", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "settingsNameSpace", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "settingName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pvBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwWrittenOrRequired", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			378129 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTempPathA", .nargs = 2, .rva = 420453, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			420631 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ClosePrivateNamespace", .nargs = 2, .rva = 211170, 
		.return_type = UNSIGNED_BYTE, .return_size = 1, .args = 
		{
			{.name = "Handle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			211244 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Process32First", .nargs = 2, .rva = 410685, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lppe", .type = STRUCT | POINTER, .size = 2368, .struct_type = TAGPROCESSENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			410877 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleW", .nargs = 5, .rva = 396915, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfCharsToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfCharsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pInputControl", .type = STRUCT | POINTER, .size = 128, .struct_type = CONSOLE_READCONSOLE_CONTROL, .arg_dir = IN},
		}, .rets_rva = 
		{
			510011 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumDateFormatsExA", .nargs = 3, .rva = 646706, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646743 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumDateFormatsExW", .nargs = 3, .rva = 586655, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumDateFormatsExW"
	},
	{
		.name = "ReadConsoleOutputA", .nargs = 5, .rva = 709221, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 32, .struct_type = CHAR_INFO, .arg_dir = INOUT},
			{.name = "dwBufferSize", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "dwBufferCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpReadRegion", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709249 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleOutputW", .nargs = 5, .rva = 709185, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 32, .struct_type = CHAR_INFO, .arg_dir = INOUT},
			{.name = "dwBufferSize", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "dwBufferCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpReadRegion", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709213 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadAffinityMask", .nargs = 2, .rva = 409910, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwThreadAffinityMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			410006 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessPriorityBoost", .nargs = 2, .rva = 427204, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bDisablePriorityBoost", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			427249 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsDebuggerPresent", .nargs = 0, .rva = 278184, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsDebuggerPresent"
	},
	{
		.name = "GetSystemTimeAdjustment", .nargs = 3, .rva = 259416, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeAdjustment", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTimeIncrement", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTimeAdjustmentDisabled", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemTimeAdjustment"
	},
	{
		.name = "CreateThreadpoolWait", .nargs = 3, .rva = 212856, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "pfnwa", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			212905 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleCursorInfo", .nargs = 2, .rva = 712577, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleCursorInfo", .type = STRUCT | POINTER, .size = 64, .struct_type = CONSOLE_CURSOR_INFO, .arg_dir = IN},
		}, .rets_rva = 
		{
			712682 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetErrorMode", .nargs = 1, .rva = 346705, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetErrorMode"
	},
	{
		.name = "SetMessageWaitingIndicator", .nargs = 2, .rva = 590270, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMsgIndicator", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulMsgCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			590282 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasExesW", .nargs = 2, .rva = 702273, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeNameBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeNameBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			702292 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetApplicationRestartSettings", .nargs = 4, .rva = 405977, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwzCommandline", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcchSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			406109 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileMappingA", .nargs = 6, .rva = 301033, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileMappingAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			301114 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileMappingW", .nargs = 6, .rva = 264831, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateFileMappingW"
	},
	{
		.name = "ResetEvent", .nargs = 1, .rva = 310452, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ResetEvent"
	},
	{
		.name = "GetCalendarInfoEx", .nargs = 7, .rva = 741043, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCalendarInfoEx"
	},
	{
		.name = "WriteFile", .nargs = 5, .rva = 332800, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			332879 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadGroupAffinity", .nargs = 3, .rva = 205699, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GroupAffinity", .type = STRUCT | POINTER, .size = 96, .struct_type = GROUP_AFFINITY, .arg_dir = IN},
			{.name = "PreviousGroupAffinity", .type = STRUCT | POINTER, .size = 96, .struct_type = GROUP_AFFINITY, .arg_dir = IN},
		}, .rets_rva = 
		{
			205805 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegSetKeySecurity", .nargs = 3, .rva = 211718, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212046, 498963 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetErrorMode", .nargs = 0, .rva = 205034, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetErrorMode"
	},
	{
		.name = "OpenWaitableTimerA", .nargs = 3, .rva = 588199, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimerName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			588273 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenWaitableTimerW", .nargs = 3, .rva = 587055, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenWaitableTimerW"
	},
	{
		.name = "SetFileIoOverlappedRange", .nargs = 3, .rva = 557630, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FileHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "OverlappedRangeStart", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Length", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			557704 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64GetThreadSelectorEntry", .nargs = 3, .rva = 547425, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSelector", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSelectorEntry", .type = STRUCT | POINTER, .size = 64, .struct_type = WOW64_LDT_ENTRY, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			547437 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileExA", .nargs = 6, .rva = 586735, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindFirstFileExA"
	},
	{
		.name = "FindFirstFileExW", .nargs = 6, .rva = 357963, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindFirstFileExW"
	},
	{
		.name = "ClearCommError", .nargs = 3, .rva = 595007, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpErrors", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpStat", .type = STRUCT | POINTER, .size = 96, .struct_type = COMSTAT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			595327 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NormalizeString", .nargs = 5, .rva = 652778, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NormForm", .type = ENUMERATION, .size = 32, .struct_type = NORM_FORM, .arg_dir = IN},
			{.name = "lpSrcString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cwSrcLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDstString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cwDstLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			652890 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RtlUnwind", .nargs = 4, .rva = 229232, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "TargetFrame", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TargetIp", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExceptionRecord", .type = STRUCT | POINTER, .size = 640, .struct_type = EXCEPTION_RECORD, .arg_dir = IN},
			{.name = "ReturnValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlUnwind"
	},
	{
		.name = "AddRefActCtx", .nargs = 1, .rva = 245755, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hActCtx", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlAddRefActivationContext"
	},
	{
		.name = "TzSpecificLocalTimeToSystemTime", .nargs = 3, .rva = 215027, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = IN},
			{.name = "lpLocalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpUniversalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TzSpecificLocalTimeToSystemTime"
	},
	{
		.name = "GetFileMUIInfo", .nargs = 4, .rva = 587483, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcwszFilePath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pFileMUIInfo", .type = STRUCT | POINTER, .size = 640, .struct_type = FILEMUIINFO, .arg_dir = IN},
			{.name = "pcbFileMUIInfo", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileMUIInfo"
	},
	{
		.name = "GetCurrentConsoleFontEx", .nargs = 3, .rva = 713972, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bMaximumWindow", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleCurrentFontEx", .type = STRUCT | POINTER, .size = 672, .struct_type = CONSOLE_FONT_INFOEX, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			714122 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TransmitCommChar", .nargs = 2, .rva = 598398, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cChar", .type = ANSI_CHAR, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			598528 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BackupSeek", .nargs = 6, .rva = 530054, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwLowBytesToSeek", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwHighBytesToSeek", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwLowByteSeeked", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwHighByteSeeked", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpContext", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			530420 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleA", .nargs = 5, .rva = 706016, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfCharsToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfCharsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pInputControl", .type = STRUCT | POINTER, .size = 128, .struct_type = CONSOLE_READCONSOLE_CONTROL, .arg_dir = IN},
		}, .rets_rva = 
		{
			706129 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Module32First", .nargs = 2, .rva = 591961, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpme", .type = STRUCT | POINTER, .size = 4384, .struct_type = TAGMODULEENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			592186 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ChangeTimerQueueTimer", .nargs = 4, .rva = 219674, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "DueTime", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Period", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ChangeTimerQueueTimer"
	},
	{
		.name = "GetNamedPipeServerSessionId", .nargs = 2, .rva = 580229, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ServerSessionId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			580265 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcatA", .nargs = 2, .rva = 303519, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			303594, 450592 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcatW", .nargs = 2, .rva = 412647, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			412728, 450629 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringEx", .nargs = 9, .rva = 388038, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CompareStringEx"
	},
	{
		.name = "GetNativeSystemInfo", .nargs = 1, .rva = 245367, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemInfo", .type = STRUCT | POINTER, .size = 288, .struct_type = SYSTEM_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			245432 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalFree", .nargs = 1, .rva = 313956, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocalFree"
	},
	{
		.name = "GetCommTimeouts", .nargs = 2, .rva = 596947, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommTimeouts", .type = STRUCT | POINTER, .size = 160, .struct_type = COMMTIMEOUTS, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			597102 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateJobSet", .nargs = 3, .rva = 617896, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NumJob", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "UserJobSet", .type = STRUCT | POINTER, .size = 96, .struct_type = JOB_SET_ARRAY, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617934 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegGetValueA", .nargs = 7, .rva = 213193, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hkey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pvData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			213339 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegGetValueW", .nargs = 7, .rva = 343955, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hkey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pvData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			344062 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZInit", .nargs = 1, .rva = 592530, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hfSource", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			592854 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeCriticalSectionEx", .nargs = 3, .rva = 342137, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCriticalSection", .type = STRUCT | POINTER, .size = 192, .struct_type = RTL_CRITICAL_SECTION, .arg_dir = INOUT},
			{.name = "dwSpinCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "InitializeCriticalSectionEx"
	},
	{
		.name = "SetPriorityClass", .nargs = 2, .rva = 257842, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPriorityClass", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetPriorityClass"
	},
	{
		.name = "LoadLibraryA", .nargs = 1, .rva = 342364, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLibFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			342418 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadLibraryW", .nargs = 1, .rva = 343041, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLibFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			343059 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTickCount64", .nargs = 0, .rva = 256846, 
		.return_type = UNSIGNED_QUAD_WORD, .return_size = 8, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetTickCount64"
	},
	{
		.name = "CreateDirectoryA", .nargs = 2, .rva = 420058, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateDirectoryA"
	},
	{
		.name = "VirtualProtectEx", .nargs = 5, .rva = 587225, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flNewProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpflOldProtect", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualProtectEx"
	},
	{
		.name = "CreateDirectoryW", .nargs = 2, .rva = 276773, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateDirectoryW"
	},
	{
		.name = "ReadFileEx", .nargs = 5, .rva = 408985, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "lpCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ReadFileEx"
	},
	{
		.name = "GetProcessId", .nargs = 1, .rva = 242619, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Process", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessId"
	},
	{
		.name = "GlobalFindAtomA", .nargs = 1, .rva = 420427, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			420445 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalFindAtomW", .nargs = 1, .rva = 299309, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			299327 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalMemoryStatus", .nargs = 1, .rva = 270384, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 256, .struct_type = MEMORYSTATUS, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			270853 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapDestroy", .nargs = 1, .rva = 271105, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapDestroy"
	},
	{
		.name = "ConvertFiberToThread", .nargs = 0, .rva = 217081, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			217150, 461457 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteTapemark", .nargs = 4, .rva = 617306, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwTapemarkType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwTapemarkCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bImmediate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617356 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_lclose", .nargs = 1, .rva = 261593, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			261614 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WerUnregisterMemoryBlock", .nargs = 1, .rva = 403415, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pvAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			269824 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapWalk", .nargs = 2, .rva = 205010, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEntry", .type = STRUCT | POINTER, .size = 224, .struct_type = PROCESS_HEAP_ENTRY, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapWalk"
	},
	{
		.name = "GetPriorityClass", .nargs = 1, .rva = 586895, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetPriorityClass"
	},
	{
		.name = "WerSetFlags", .nargs = 1, .rva = 228251, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			228385 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegDeleteValueW", .nargs = 2, .rva = 243071, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			243215, 496726 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextChangeNotification", .nargs = 1, .rva = 224517, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hChangeHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindNextChangeNotification"
	},
	{
		.name = "Thread32First", .nargs = 2, .rva = 425548, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpte", .type = STRUCT | POINTER, .size = 224, .struct_type = TAGTHREADENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			425674 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEnvironmentStringsA", .nargs = 1, .rva = 621333, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NewEnvironment", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			621424 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleWindow", .nargs = 0, .rva = 403335, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			403401 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEnvironmentStringsW", .nargs = 1, .rva = 263143, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NewEnvironment", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetEnvironmentStringsW"
	},
	{
		.name = "CreateHardLinkTransactedA", .nargs = 4, .rva = 618872, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			618897 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateHardLinkTransactedW", .nargs = 4, .rva = 618593, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			618721 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsDBCSLeadByteEx", .nargs = 2, .rva = 413101, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "TestChar", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsDBCSLeadByteEx"
	},
	{
		.name = "GetFileInformationByHandleEx", .nargs = 4, .rva = 276653, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileInformationClass", .type = ENUMERATION, .size = 32, .struct_type = FILE_INFO_BY_HANDLE_CLASS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			276765 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlsGetValue", .nargs = 1, .rva = 335382, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "dwFlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FlsGetValue"
	},
	{
		.name = "PowerCreateRequest", .nargs = 1, .rva = 244770, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Context", .type = STRUCT | POINTER, .size = 192, .struct_type = REASON_CONTEXT, .arg_dir = IN},
		}, .rets_rva = 
		{
			244850 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EndUpdateResourceW", .nargs = 2, .rva = 643518, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hUpdate", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fDiscard", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			644073 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenEventA", .nargs = 3, .rva = 278049, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenEventA"
	},
	{
		.name = "OpenEventW", .nargs = 3, .rva = 283787, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenEventW"
	},
	{
		.name = "GetDynamicTimeZoneInformation", .nargs = 1, .rva = 206181, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pTimeZoneInformation", .type = STRUCT | POINTER, .size = 3456, .struct_type = TIME_DYNAMIC_ZONE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDynamicTimeZoneInformation"
	},
	{
		.name = "GetProcessGroupAffinity", .nargs = 3, .rva = 583955, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GroupCount", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "GroupArray", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			584026 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadExecutionState", .nargs = 1, .rva = 428093, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "esFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			428128 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTimeZoneInformation", .nargs = 1, .rva = 231995, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetTimeZoneInformation"
	},
	{
		.name = "InterlockedExchangeAdd", .nargs = 2, .rva = 300586, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Addend", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Value", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310124 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleTitleA", .nargs = 1, .rva = 702983, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleTitle", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			703040, 703066 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleTitleW", .nargs = 1, .rva = 262535, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleTitle", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			262599, 509078 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsBadHugeReadPtr", .nargs = 2, .rva = 583808, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lp", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ucb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			243463, 456451 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemWow64DirectoryA", .nargs = 2, .rva = 241497, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			241507 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemWow64DirectoryW", .nargs = 2, .rva = 241497, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			241507 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualFree", .nargs = 3, .rva = 335268, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFreeType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualFree"
	},
	{
		.name = "GetProcessShutdownParameters", .nargs = 2, .rva = 583840, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpdwLevel", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			583947 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FileTimeToLocalFileTime", .nargs = 2, .rva = 335876, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpLocalFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FileTimeToLocalFileTime"
	},
	{
		.name = "GetExitCodeThread", .nargs = 2, .rva = 224733, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExitCode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetExitCodeThread"
	},
	{
		.name = "ReadFile", .nargs = 5, .rva = 300795, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			300884, 434985 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExpandedNameA", .nargs = 2, .rva = 593867, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszSource", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			594047 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExpandedNameW", .nargs = 2, .rva = 594055, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszSource", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			594340 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleTitleW", .nargs = 2, .rva = 377469, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleTitle", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			377490 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GenerateConsoleCtrlEvent", .nargs = 2, .rva = 712156, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwCtrlEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwProcessGroupId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			712266 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegDeleteKeyExA", .nargs = 4, .rva = 691413, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			691444 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegDeleteKeyExW", .nargs = 4, .rva = 222788, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			222819 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumUILanguagesA", .nargs = 3, .rva = 646814, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpUILanguageEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646836 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumUILanguagesW", .nargs = 3, .rva = 203673, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpUILanguageEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumUILanguagesW"
	},
	{
		.name = "GetLargestConsoleWindowSize", .nargs = 1, .rva = 711430, 
		.return_type = STRUCT, .return_size = 32, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			711527 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalFix", .nargs = 1, .rva = 572588, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572606 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDefaultCommConfigA", .nargs = 3, .rva = 600537, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = INOUT},
			{.name = "lpdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			600637 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumeInformationW", .nargs = 8, .rva = 357784, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetVolumeInformationW"
	},
	{
		.name = "IsProcessInJob", .nargs = 3, .rva = 403306, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Result", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsProcessInJob"
	},
	{
		.name = "IsNormalizedString", .nargs = 3, .rva = 652898, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NormForm", .type = ENUMERATION, .size = 32, .struct_type = NORM_FORM, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cwLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			652972 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemInfo", .nargs = 1, .rva = 341800, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemInfo", .type = STRUCT | POINTER, .size = 288, .struct_type = SYSTEM_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemInfo"
	},
	{
		.name = "GetSystemDefaultLocaleName", .nargs = 2, .rva = 212741, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchLocaleName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemDefaultLocaleName"
	},
	{
		.name = "CreateSymbolicLinkTransactedW", .nargs = 4, .rva = 565870, 
		.return_type = UNSIGNED_BYTE, .return_size = 1, .args = 
		{
			{.name = "lpSymlinkFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			565998 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapCreate", .nargs = 3, .rva = 343714, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "flOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInitialSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapCreate"
	},
	{
		.name = "EnumResourceTypesExA", .nargs = 5, .rva = 576286, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			576314 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceTypesExW", .nargs = 5, .rva = 404311, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			404339 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VerifyScripts", .nargs = 5, .rva = 652214, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleScripts", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchLocaleScripts", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTestScripts", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchTestScripts", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			652513 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDateFormatEx", .nargs = 7, .rva = 651935, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDate", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFormat", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDateStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchDate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalendar", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			652146 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateConsoleScreenBuffer", .nargs = 5, .rva = 709665, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpScreenBufferData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			709882, 709981 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteTimerQueue", .nargs = 1, .rva = 622266, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			622298 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetComputerNameA", .nargs = 1, .rva = 538807, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpComputerName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			538915 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetComputerNameW", .nargs = 1, .rva = 538485, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpComputerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			538799 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VerifyVersionInfoA", .nargs = 3, .rva = 228437, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 1248, .struct_type = OSVERSIONINFOEXA, .arg_dir = IN},
			{.name = "dwTypeMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwlConditionMask", .type = UNSIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			228590 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VerifyVersionInfoW", .nargs = 3, .rva = 265873, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 2272, .struct_type = OSVERSIONINFOEXW, .arg_dir = IN},
			{.name = "dwTypeMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwlConditionMask", .type = UNSIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			265922 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UpdateResourceA", .nargs = 6, .rva = 642349, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hUpdate", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wLanguage", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			642608 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UpdateResourceW", .nargs = 6, .rva = 641893, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hUpdate", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wLanguage", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			642341 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileExA", .nargs = 3, .rva = 403120, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			403144 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileExW", .nargs = 3, .rva = 281233, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			281257 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WritePrivateProfileSectionA", .nargs = 3, .rva = 555313, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			555377 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WritePrivateProfileSectionW", .nargs = 3, .rva = 555385, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			555449 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegQueryInfoKeyA", .nargs = 12, .rva = 233456, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpClass", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchClass", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcSubKeys", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbMaxSubKeyLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbMaxClassLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcValues", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbMaxValueNameLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbMaxValueLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbSecurityDescriptor", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpftLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			233900, 500074 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryUnbiasedInterruptTime", .nargs = 1, .rva = 621214, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "UnbiasedTime", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			621325 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleMode", .nargs = 2, .rva = 337004, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			337082 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetQueuedCompletionStatusEx", .nargs = 6, .rva = 586927, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetQueuedCompletionStatusEx"
	},
	{
		.name = "CreateThreadpool", .nargs = 1, .rva = 206205, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "reserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			206248 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEvent", .nargs = 1, .rva = 310476, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetEvent"
	},
	{
		.name = "DeleteFileTransactedW", .nargs = 2, .rva = 203817, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			203905 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaNodeNumberFromHandle", .nargs = 2, .rva = 581397, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NodeNumber", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581453 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetExitCodeProcess", .nargs = 2, .rva = 332898, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExitCode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			332928 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessPriorityBoost", .nargs = 2, .rva = 584082, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDisablePriorityBoost", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			584132 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadLocale", .nargs = 1, .rva = 428262, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetThreadLocale"
	},
	{
		.name = "GlobalFree", .nargs = 1, .rva = 302329, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			448919 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetComputerNameA", .nargs = 2, .rva = 224169, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			224265 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetComputerNameW", .nargs = 2, .rva = 263167, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = OUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			263282 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateThreadpoolWork", .nargs = 3, .rva = 231922, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "pfnwk", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			231971 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SuspendThread", .nargs = 1, .rva = 396457, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SuspendThread"
	},
	{
		.name = "CreatePrivateNamespaceA", .nargs = 3, .rva = 587783, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPrivateNamespaceAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpBoundaryDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAliasPrefix", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			587857 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePrivateNamespaceW", .nargs = 3, .rva = 211037, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPrivateNamespaceAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpBoundaryDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAliasPrefix", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			211162 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleCP", .nargs = 1, .rva = 713052, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wCodePageID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			713147 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSystemTime", .nargs = 1, .rva = 390268, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
		}, .rets_rva = 
		{
			390429 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpA", .nargs = 2, .rva = 232537, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			232601 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleCP", .nargs = 0, .rva = 339082, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			339152 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumLanguageGroupLocalesW", .nargs = 4, .rva = 586671, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLangGroupLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LanguageGroup", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumLanguageGroupLocalesW"
	},
	{
		.name = "GetFileSize", .nargs = 2, .rva = 262771, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSizeHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileSize"
	},
	{
		.name = "NeedCurrentDirectoryForExePathA", .nargs = 1, .rva = 587039, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "NeedCurrentDirectoryForExePathA"
	},
	{
		.name = "NeedCurrentDirectoryForExePathW", .nargs = 1, .rva = 377845, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "NeedCurrentDirectoryForExePathW"
	},
	{
		.name = "DeleteFiber", .nargs = 1, .rva = 216934, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpFiber", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217044 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaNodeProcessorMask", .nargs = 2, .rva = 581538, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Node", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessorMask", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581631 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileSectionA", .nargs = 4, .rva = 555181, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			555305 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileSectionW", .nargs = 4, .rva = 223072, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			223149 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryMemoryResourceNotification", .nargs = 2, .rva = 622173, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ResourceNotificationHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ResourceState", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			622258 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceLanguagesExA", .nargs = 7, .rva = 578477, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			578593 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceLanguagesExW", .nargs = 7, .rva = 578397, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			578431 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64DisableWow64FsRedirection", .nargs = 1, .rva = 244746, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "OldValue", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "Wow64DisableWow64FsRedirection"
	},
	{
		.name = "WerUnregisterFile", .nargs = 1, .rva = 620860, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pwzFilePath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			729691 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessTimes", .nargs = 5, .rva = 259622, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpExitTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpKernelTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpUserTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessTimes"
	},
	{
		.name = "FreeLibraryAndExitThread", .nargs = 2, .rva = 261560, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hLibModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileIntA", .nargs = 4, .rva = 252995, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDefault", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			253088 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileIntW", .nargs = 4, .rva = 227167, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDefault", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			227368 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadIdealProcessor", .nargs = 2, .rva = 392534, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIdealProcessor", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			392571 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessShutdownParameters", .nargs = 2, .rva = 278025, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwLevel", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetProcessShutdownParameters"
	},
	{
		.name = "_lwrite", .nargs = 3, .rva = 573748, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			573806 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleTitleA", .nargs = 2, .rva = 704433, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleTitle", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			704454 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSemaphoreExA", .nargs = 6, .rva = 229327, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSemaphoreAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lInitialCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lMaximumCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			229388 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSemaphoreExW", .nargs = 6, .rva = 205073, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateSemaphoreExW"
	},
	{
		.name = "MapUserPhysicalPages", .nargs = 3, .rva = 621968, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "VirtualAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PageArray", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			622006 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTempFileNameA", .nargs = 4, .rva = 420191, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPrefixString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uUnique", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTempFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			420419 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTempFileNameW", .nargs = 4, .rva = 224541, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPrefixString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uUnique", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTempFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetTempFileNameW"
	},
	{
		.name = "FindAtomA", .nargs = 1, .rva = 252756, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			252774 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindAtomW", .nargs = 1, .rva = 296027, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			296045 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpiW", .nargs = 2, .rva = 305387, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "lstrcmpiW"
	},
	{
		.name = "SwitchToFiber", .nargs = 1, .rva = 309440, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpFiber", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			309723 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcpyA", .nargs = 2, .rva = 300947, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			300994, 450555 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleHistoryInfo", .nargs = 1, .rva = 713614, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleHistoryInfo", .type = STRUCT | POINTER, .size = 128, .struct_type = CONSOLE_HISTORY_INFO, .arg_dir = IN},
		}, .rets_rva = 
		{
			713729 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenFile", .nargs = 3, .rva = 567353, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReOpenBuff", .type = STRUCT | POINTER, .size = 1088, .struct_type = OFSTRUCT, .arg_dir = INOUT},
			{.name = "uStyle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			568390 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalMemoryStatusEx", .nargs = 1, .rva = 231979, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 512, .struct_type = MEMORYSTATUSEX, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GlobalMemoryStatusEx"
	},
	{
		.name = "SetTapePosition", .nargs = 6, .rva = 616984, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPositionMethod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPartition", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bImmediate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617046 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "NotifyUILanguageChange", .nargs = 5, .rva = 661440, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcwstrNewLanguage", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcwstrPreviousLanguage", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwStatusRtrn", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			661927 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileWithProgressA", .nargs = 5, .rva = 403152, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			403180 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileWithProgressW", .nargs = 5, .rva = 281197, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			281225 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPhysicallyInstalledSystemMemory", .nargs = 1, .rva = 423391, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TotalMemoryInKilobytes", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			423999 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyFileTransactedA", .nargs = 7, .rva = 571785, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbCancel", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCopyFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			571922 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyFileTransactedW", .nargs = 7, .rva = 571503, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbCancel", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCopyFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			571640 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenJobObjectA", .nargs = 3, .rva = 618019, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			618091 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultUILanguage", .nargs = 0, .rva = 226077, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemDefaultUILanguage"
	},
	{
		.name = "SetHandleInformation", .nargs = 3, .rva = 231510, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			231575 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrencyFormatW", .nargs = 6, .rva = 586799, 
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
			652206 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSymbolicLinkTransactedA", .nargs = 4, .rva = 566166, 
		.return_type = UNSIGNED_BYTE, .return_size = 1, .args = 
		{
			{.name = "lpSymlinkFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			566286 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaHighestNodeNumber", .nargs = 1, .rva = 580858, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "HighestNodeNumber", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			580926 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZDone", .nargs = 0, .rva = 680483, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
			680485 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLogicalDriveStringsA", .nargs = 2, .rva = 297148, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			297241 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLogicalDriveStringsW", .nargs = 2, .rva = 215752, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLogicalDriveStringsW"
	},
	{
		.name = "IsBadStringPtrA", .nargs = 2, .rva = 421017, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpsz", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ucchMax", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			421122, 456497 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsBadStringPtrW", .nargs = 2, .rva = 414906, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpsz", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ucchMax", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			415018, 456521 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumberFormatEx", .nargs = 6, .rva = 388089, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetNumberFormatEx"
	},
	{
		.name = "SetUnhandledExceptionFilter", .nargs = 1, .rva = 343297, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "lpTopLevelExceptionFilter", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			343486 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDefaultCommConfigW", .nargs = 3, .rva = 600265, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = INOUT},
			{.name = "lpdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			600401 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrencyFormatEx", .nargs = 6, .rva = 587451, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrencyFormatEx"
	},
	{
		.name = "FindFirstStreamTransactedW", .nargs = 5, .rva = 559701, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InfoLevel", .type = ENUMERATION, .size = 32, .struct_type = STREAM_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFindStreamData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			559823 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapValidate", .nargs = 3, .rva = 271837, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMem", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapValidate"
	},
	{
		.name = "GetProcessDEPPolicy", .nargs = 3, .rva = 584247, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpPermanent", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			584322 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteFileGather", .nargs = 5, .rva = 203426, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "aSegmentArray", .type = UNION | POINTER, .size = 64, .struct_type = FILE_SEGMENT_ELEMENT, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "WriteFileGather"
	},
	{
		.name = "GetSystemDirectoryA", .nargs = 2, .rva = 298949, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			299061 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentDirectoryA", .nargs = 2, .rva = 226108, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrentDirectoryA"
	},
	{
		.name = "GetCurrentDirectoryW", .nargs = 2, .rva = 377146, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrentDirectoryW"
	},
	{
		.name = "OutputDebugStringW", .nargs = 1, .rva = 224145, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpOutputString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OutputDebugStringW"
	},
	{
		.name = "LockResource", .nargs = 1, .rva = 261417, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hResData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LockResource"
	},
	{
		.name = "GetConsoleAliasExesLengthA", .nargs = 0, .rva = 701997, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			702004 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadResource", .nargs = 2, .rva = 301133, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hResInfo", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LoadResource"
	},
	{
		.name = "GetConsoleAliasExesLengthW", .nargs = 0, .rva = 701984, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			701991 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentConsoleFont", .nargs = 3, .rva = 714468, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bMaximumWindow", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleCurrentFont", .type = STRUCT | POINTER, .size = 64, .struct_type = CONSOLE_FONT_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			714547 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileA", .nargs = 2, .rva = 339337, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 2560, .struct_type = WIN32_FIND_DATAA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindFirstFileA"
	},
	{
		.name = "FindFirstFileW", .nargs = 2, .rva = 349106, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 4736, .struct_type = WIN32_FIND_DATAW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindFirstFileW"
	},
	{
		.name = "FlsSetValue", .nargs = 2, .rva = 358118, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFlsData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FlsSetValue"
	},
	{
		.name = "SetConsoleActiveScreenBuffer", .nargs = 1, .rva = 712274, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			712365 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetGeoInfoA", .nargs = 5, .rva = 646871, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Location", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GeoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGeoData", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			647011 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetGeoInfoW", .nargs = 5, .rva = 649811, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Location", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GeoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGeoData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			650597 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasesA", .nargs = 3, .rva = 703647, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AliasBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AliasBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			703669 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasesW", .nargs = 3, .rva = 703617, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "AliasBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AliasBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			703639 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFirmwareEnvironmentVariableA", .nargs = 4, .rva = 572250, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGuid", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572389 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFirmwareEnvironmentVariableW", .nargs = 4, .rva = 571961, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGuid", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572101 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAtomA", .nargs = 1, .rva = 225503, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			225521 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddAtomW", .nargs = 1, .rva = 271861, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			271879 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileSizeEx", .nargs = 2, .rva = 285167, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSize", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileSizeEx"
	},
	{
		.name = "GetLogicalDrives", .nargs = 0, .rva = 285062, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapViewOfFileEx", .nargs = 6, .rva = 341361, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "MapViewOfFileEx"
	},
	{
		.name = "EnumResourceNamesExW", .nargs = 6, .rva = 279589, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			279620 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LockFile", .nargs = 5, .rva = 418863, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToLockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToLockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LockFile"
	},
	{
		.name = "GetCPInfoExA", .nargs = 3, .rva = 648836, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCPInfoEx", .type = STRUCT | POINTER, .size = 2272, .struct_type = CPINFOEXA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			648975 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCPInfoExW", .nargs = 3, .rva = 232219, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCPInfoEx", .type = STRUCT | POINTER, .size = 4352, .struct_type = CPINFOEXW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCPInfoExW"
	},
	{
		.name = "GetActiveProcessorCount", .nargs = 1, .rva = 212482, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GroupNumber", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212584 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCommMask", .nargs = 2, .rva = 597272, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwEvtMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			597424 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLongPathNameTransactedA", .nargs = 4, .rva = 605453, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszShortPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszLongPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			605581 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLongPathNameTransactedW", .nargs = 4, .rva = 605617, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszShortPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszLongPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			605745 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileW", .nargs = 7, .rva = 314454, 
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
			314529 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCommConfig", .nargs = 3, .rva = 601593, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hCommDev", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			601739 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleOutputAttribute", .nargs = 5, .rva = 711119, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAttribute", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReadCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfAttrsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			711149 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetTimeZoneInformation", .nargs = 1, .rva = 546692, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = IN},
		}, .rets_rva = 
		{
			546997 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetComputerNameExA", .nargs = 2, .rva = 543801, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NameType", .type = ENUMERATION, .size = 32, .struct_type = COMPUTER_NAME_FORMAT, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			543880 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetComputerNameExW", .nargs = 2, .rva = 543631, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NameType", .type = ENUMERATION, .size = 32, .struct_type = COMPUTER_NAME_FORMAT, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			543793 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileSectionNamesW", .nargs = 3, .rva = 216220, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszReturnBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			216245 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnhandledExceptionFilter", .nargs = 1, .rva = 388408, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExceptionInfo", .type = STRUCT | POINTER, .size = 64, .struct_type = EXCEPTION_POINTERS, .arg_dir = IN},
		}, .rets_rva = 
		{
			388839, 508597 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZRead", .nargs = 3, .rva = 592997, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbRead", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			593515 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetInformationJobObject", .nargs = 4, .rva = 219017, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hJob", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobObjectInformationClass", .type = ENUMERATION, .size = 32, .struct_type = JOBOBJECTINFOCLASS, .arg_dir = IN},
			{.name = "lpJobObjectInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbJobObjectInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			219156 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateHardLinkA", .nargs = 3, .rva = 618761, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			618786 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileInformationByHandle", .nargs = 4, .rva = 232719, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FileInformationClass", .type = ENUMERATION, .size = 32, .struct_type = FILE_INFO_BY_HANDLE_CLASS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFileInformationByHandle"
	},
	{
		.name = "WaitForMultipleObjectsEx", .nargs = 5, .rva = 310272, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpHandles", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWaitAll", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310433 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetOEMCP", .nargs = 0, .rva = 277945, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetOEMCP"
	},
	{
		.name = "EnumResourceNamesA", .nargs = 4, .rva = 416308, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			416335 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceNamesW", .nargs = 4, .rva = 425513, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			425540 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteFileA", .nargs = 1, .rva = 280523, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DeleteFileA"
	},
	{
		.name = "DeleteFileW", .nargs = 1, .rva = 266082, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DeleteFileW"
	},
	{
		.name = "LCMapStringA", .nargs = 6, .rva = 382269, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LCMapStringA"
	},
	{
		.name = "LCMapStringW", .nargs = 6, .rva = 332752, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LCMapStringW"
	},
	{
		.name = "CreateMutexExA", .nargs = 4, .rva = 586539, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateMutexExA"
	},
	{
		.name = "CreateMutexExW", .nargs = 4, .rva = 387480, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateMutexExW"
	},
	{
		.name = "lstrlenA", .nargs = 1, .rva = 304657, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "lstrlenA"
	},
	{
		.name = "lstrlenW", .nargs = 1, .rva = 317928, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "lstrlenW"
	},
	{
		.name = "BuildCommDCBAndTimeoutsA", .nargs = 3, .rva = 616591, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDef", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDCB", .type = STRUCT | POINTER, .size = 224, .struct_type = DCB, .arg_dir = INOUT},
			{.name = "lpCommTimeouts", .type = STRUCT | POINTER, .size = 160, .struct_type = COMMTIMEOUTS, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			616630 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BuildCommDCBAndTimeoutsW", .nargs = 3, .rva = 616689, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDef", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDCB", .type = STRUCT | POINTER, .size = 224, .struct_type = DCB, .arg_dir = INOUT},
			{.name = "lpCommTimeouts", .type = STRUCT | POINTER, .size = 160, .struct_type = COMMTIMEOUTS, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			616771 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetPerformanceInfo", .nargs = 2, .rva = 220788, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pPerformanceInformation", .type = STRUCT | POINTER, .size = 448, .struct_type = PERFORMANCE_INFORMATION, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221144 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IdnToNameprepUnicode", .nargs = 5, .rva = 652980, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpUnicodeCharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchUnicodeChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNameprepCharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchNameprepChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			653055 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEnvironmentVariableW", .nargs = 2, .rva = 317941, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetEnvironmentVariableW"
	},
	{
		.name = "CreateProcessAsUserW", .nargs = 11, .rva = 219311, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpApplicationName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommandLine", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpProcessAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInheritHandles", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnvironment", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCurrentDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOW, .arg_dir = IN},
			{.name = "lpProcessInformation", .type = STRUCT | POINTER, .size = 128, .struct_type = PROCESS_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			219357 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleInputA", .nargs = 4, .rva = 708265, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 160, .struct_type = INPUT_RECORD, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEventsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			708292 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDllDirectoryW", .nargs = 2, .rva = 575810, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			575960 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstVolumeA", .nargs = 2, .rva = 607845, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			608068 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstVolumeW", .nargs = 2, .rva = 208075, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			208272 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetBinaryTypeA", .nargs = 2, .rva = 607097, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpApplicationName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBinaryType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			607148 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetBinaryTypeW", .nargs = 2, .rva = 413427, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpApplicationName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBinaryType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			413750 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetVolumeMountPointA", .nargs = 2, .rva = 613225, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			613250 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsAlloc", .nargs = 0, .rva = 341409, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TlsAlloc"
	},
	{
		.name = "CreateEventA", .nargs = 4, .rva = 265975, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bManualReset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInitialState", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateEventA"
	},
	{
		.name = "CreateEventW", .nargs = 4, .rva = 340870, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bManualReset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInitialState", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateEventW"
	},
	{
		.name = "IsSystemResumeAutomatic", .nargs = 0, .rva = 583130, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			583139 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MulDiv", .nargs = 3, .rva = 309152, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nNumber", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumerator", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDenominator", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			309207, 309213, 309257, 309293, 309299, 309323, 309347, 309383, 309389, 309413, 309437 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetEndOfFile", .nargs = 1, .rva = 271129, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetEndOfFile"
	},
	{
		.name = "RegSaveKeyExA", .nargs = 4, .rva = 693241, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFile", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			693507, 693591 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegSaveKeyExW", .nargs = 4, .rva = 402582, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFile", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			402764, 501133 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AssignProcessToJobObject", .nargs = 2, .rva = 219598, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hJob", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			219631 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalUnlock", .nargs = 1, .rva = 285698, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocalUnlock"
	},
	{
		.name = "FileTimeToDosDateTime", .nargs = 3, .rva = 273633, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpFatDate", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFatTime", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			273750 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReplacePartitionUnit", .nargs = 3, .rva = 585561, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TargetPartition", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SparePartition", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			585630 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProductInfo", .nargs = 5, .rva = 232175, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwOSMajorVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOSMinorVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSpMajorVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSpMinorVersion", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwReturnedProductType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			232211 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitOnceComplete", .nargs = 3, .rva = 380175, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpInitOnce", .type = UNION | POINTER, .size = 32, .struct_type = RTL_RUN_ONCE, .arg_dir = INOUT},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			380207 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteTimerQueueTimer", .nargs = 3, .rva = 243298, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Timer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DeleteTimerQueueTimer"
	},
	{
		.name = "UnmapViewOfFile", .nargs = 1, .rva = 318227, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "UnmapViewOfFile"
	},
	{
		.name = "MultiByteToWideChar", .nargs = 6, .rva = 345387, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "MultiByteToWideChar"
	},
	{
		.name = "AddConsoleAliasA", .nargs = 3, .rva = 701130, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Source", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Target", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			701215 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultLCID", .nargs = 0, .rva = 294328, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemDefaultLCID"
	},
	{
		.name = "PulseEvent", .nargs = 1, .rva = 409555, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "PulseEvent"
	},
	{
		.name = "GetModuleFileNameA", .nargs = 3, .rva = 340982, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetModuleFileNameA"
	},
	{
		.name = "CreateProcessInternalA", .nargs = 12, .rva = 339361, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hTken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpApplicationName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommandLine", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProcessAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInheritHandles", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnvironment", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCurrentDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOA, .arg_dir = IN},
			{.name = "lpProcessInformation", .type = STRUCT | POINTER, .size = 128, .struct_type = PROCESS_INFORMATION, .arg_dir = IN},
			{.name = "hNewToken", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			339675 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleFileNameW", .nargs = 3, .rva = 343078, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetModuleFileNameW"
	},
	{
		.name = "CreateProcessInternalW", .nargs = 12, .rva = 319096, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hTken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpApplicationName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommandLine", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProcessAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInheritHandles", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnvironment", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCurrentDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOW, .arg_dir = IN},
			{.name = "lpProcessInformation", .type = STRUCT | POINTER, .size = 128, .struct_type = PROCESS_INFORMATION, .arg_dir = IN},
			{.name = "hNewToken", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			322551 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrencyFormatA", .nargs = 6, .rva = 647393, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = STRUCT | POINTER, .size = 256, .struct_type = CURRENCYFMTA, .arg_dir = IN},
			{.name = "lpCurrencyStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchCurrency", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			648328 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDirectoryW", .nargs = 2, .rva = 344315, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			344399 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SleepConditionVariableCS", .nargs = 3, .rva = 202942, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ConditionVariable", .type = STRUCT | POINTER, .size = 32, .struct_type = RTL_CONDITION_VARIABLE, .arg_dir = INOUT},
			{.name = "CriticalSection", .type = STRUCT | POINTER, .size = 192, .struct_type = RTL_CRITICAL_SECTION, .arg_dir = INOUT},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			203000 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaProximityNodeEx", .nargs = 2, .rva = 581330, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProximityId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NodeNumber", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581389 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RemoveDirectoryTransactedW", .nargs = 2, .rva = 548329, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			548451 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Module32NextW", .nargs = 2, .rva = 246047, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpme", .type = STRUCT | POINTER, .size = 8512, .struct_type = TAGMODULEENTRY32W, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			246190 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalUnWire", .nargs = 1, .rva = 572656, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			302545 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZOpenFileW", .nargs = 3, .rva = 594766, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReOpenBuf", .type = STRUCT | POINTER, .size = 1088, .struct_type = OFSTRUCT, .arg_dir = INOUT},
			{.name = "wStyle", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			594925 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetMappedFileNameA", .nargs = 4, .rva = 220401, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			220494 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetMappedFileNameW", .nargs = 4, .rva = 220502, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			220655 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReleaseMutex", .nargs = 1, .rva = 309874, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMutex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ReleaseMutex"
	},
	{
		.name = "MapViewOfFile", .nargs = 5, .rva = 297371, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hFileMappingObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesToMap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "MapViewOfFile"
	},
	{
		.name = "SwitchToThread", .nargs = 0, .rva = 256804, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SwitchToThread"
	},
	{
		.name = "GetXStateFeaturesMask", .nargs = 2, .rva = 623432, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Context", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "FeatureMask", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			623573 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNamedPipeServerProcessId", .nargs = 2, .rva = 580169, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ServerProcessId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			580205 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetupComm", .nargs = 3, .rva = 595335, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOutQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			595528 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegOpenKeyExA", .nargs = 5, .rva = 341006, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phkResult", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			341040 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegOpenKeyExW", .nargs = 5, .rva = 311689, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phkResult", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			311723 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProfileIntA", .nargs = 3, .rva = 253096, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDefault", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			253118 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindResourceA", .nargs = 3, .rva = 303195, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			303217 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushInstructionCache", .nargs = 3, .rva = 271302, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			271338 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegDeleteTreeA", .nargs = 2, .rva = 691764, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			691845 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegDeleteTreeW", .nargs = 2, .rva = 205118, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			205481 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddIntegrityLabelToBoundaryDescriptor", .nargs = 2, .rva = 587740, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "BoundaryDescriptor", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "IntegrityLabel", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			587775 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessAffinityUpdateMode", .nargs = 2, .rva = 587305, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetProcessAffinityUpdateMode"
	},
	{
		.name = "DeactivateActCtx", .nargs = 2, .rva = 284994, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulCookie", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			285038 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCompressedFileSizeTransactedA", .nargs = 3, .rva = 565803, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSizeHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			565862 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCompressedFileSizeTransactedW", .nargs = 3, .rva = 563662, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSizeHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			563778 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleScreenBufferInfo", .nargs = 2, .rva = 300626, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleScreenBufferInfo", .type = STRUCT | POINTER, .size = 176, .struct_type = CONSOLE_SCREEN_BUFFER_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			300664 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WerRegisterMemoryBlock", .nargs = 2, .rva = 269877, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pvAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			268636 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadPriorityBoost", .nargs = 2, .rva = 586943, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pDisablePriorityBoost", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetThreadPriorityBoost"
	},
	{
		.name = "FindNextVolumeMountPointA", .nargs = 3, .rva = 612929, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolumeMountPoint", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeMountPoint", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			613153 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileNameW", .nargs = 4, .rva = 558961, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StringLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "LinkName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			559396 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteProfileSectionA", .nargs = 2, .rva = 556973, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			556992 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteProfileSectionW", .nargs = 2, .rva = 557000, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			557019 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCommMask", .nargs = 2, .rva = 595789, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEvtMask", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			595918 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitOnceExecuteOnce", .nargs = 4, .rva = 300545, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "InitOnce", .type = UNION | POINTER, .size = 32, .struct_type = RTL_RUN_ONCE, .arg_dir = INOUT},
			{.name = "InitFn", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Parameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Context", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			300578 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLocalesA", .nargs = 2, .rva = 417354, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumSystemLocalesA"
	},
	{
		.name = "EnumSystemLocalesW", .nargs = 2, .rva = 586719, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumSystemLocalesW"
	},
	{
		.name = "WerRegisterRuntimeExceptionModule", .nargs = 2, .rva = 620876, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pwszOutOfProcessCallbackDll", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			732106 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidCodePage", .nargs = 1, .rva = 377280, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsValidCodePage"
	},
	{
		.name = "TransactNamedPipe", .nargs = 7, .rva = 587193, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TransactNamedPipe"
	},
	{
		.name = "FlsAlloc", .nargs = 1, .rva = 344461, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCallback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FlsAlloc"
	},
	{
		.name = "GetApplicationRecoveryCallback", .nargs = 5, .rva = 380743, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pRecoveryCallback", .type = TYPEDEF | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ppvParameter", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pdwPingInterval", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			380809 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalLock", .nargs = 1, .rva = 285674, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocalLock"
	},
	{
		.name = "GetTimeFormatEx", .nargs = 6, .rva = 651802, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFormat", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimeStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchTime", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			651927 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadId", .nargs = 1, .rva = 296105, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Thread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetThreadId"
	},
	{
		.name = "AddConsoleAliasW", .nargs = 3, .rva = 701024, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Source", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Target", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			701122 
		}, .jump_in = UNDEFINED
	},
	/* {
		.name = "QueryPerformanceCounter", .nargs = 1, .rva = 310175, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPerformanceCount", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "QueryPerformanceCounter"
	}, */
	{
		.name = "GetConsoleScreenBufferInfoEx", .nargs = 2, .rva = 300672, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleScreenBufferInfoEx", .type = STRUCT | POINTER, .size = 768, .struct_type = CONSOLE_SCREEN_BUFFER_INFOEX, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			300776 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateRemoteThread", .nargs = 7, .rva = 586555, 
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
			586589 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FillConsoleOutputCharacterA", .nargs = 5, .rva = 709587, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cCharacter", .type = ANSI_CHAR, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwWriteCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfCharsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709621 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ContinueDebugEvent", .nargs = 3, .rva = 548185, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwThreadId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwContinueStatus", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			548245 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetAtomNameA", .nargs = 3, .rva = 552508, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nAtom", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			552532 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitNamedPipeW", .nargs = 2, .rva = 587241, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNamedPipeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "WaitNamedPipeW"
	},
	{
		.name = "EraseTape", .nargs = 3, .rva = 617197, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwEraseType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bImmediate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617240 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_lread", .nargs = 3, .rva = 259320, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			259353 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemFirmwareTables", .nargs = 3, .rva = 572738, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FirmwareTableProviderSignature", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pFirmwareTableEnumBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572916, 572963 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileBandwidthReservation", .nargs = 6, .rva = 560112, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nPeriodMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBytesPerPeriod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bDiscardable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTransferSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNumOutstandingRequests", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			560318 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualAllocEx", .nargs = 5, .rva = 246198, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flAllocationType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualAllocEx"
	},
	{
		.name = "IsNLSDefinedString", .nargs = 5, .rva = 218219, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Function", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchStr", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsNLSDefinedString"
	},
	{
		.name = "GetProfileSectionA", .nargs = 3, .rva = 556943, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			556965 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProfileSectionW", .nargs = 3, .rva = 411868, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			411890 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceTypesA", .nargs = 3, .rva = 576322, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			576346 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceLanguagesW", .nargs = 5, .rva = 578439, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			578469 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSystemPowerState", .nargs = 2, .rva = 583057, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "fSuspend", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fForce", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			583122 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStringTypeExA", .nargs = 5, .rva = 223391, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetStringTypeA"
	},
	{
		.name = "GetStringTypeExW", .nargs = 5, .rva = 245607, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetStringTypeExW"
	},
	{
		.name = "BeginUpdateResourceA", .nargs = 2, .rva = 644649, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bDeleteExistingResources", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			644718 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BeginUpdateResourceW", .nargs = 2, .rva = 644188, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bDeleteExistingResources", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			644641 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstStreamW", .nargs = 4, .rva = 379130, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "InfoLevel", .type = ENUMERATION, .size = 32, .struct_type = STREAM_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFindStreamData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			379532 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegRestoreKeyA", .nargs = 3, .rva = 692924, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFile", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			693148, 693201 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNamedPipeHandleStateA", .nargs = 7, .rva = 580289, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpState", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpCurInstances", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaxCollectionCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpCollectDataTimeout", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpUserName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nMaxUserNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			580532 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetEnvironmentVariableA", .nargs = 3, .rva = 314926, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetEnvironmentVariableA"
	},
	{
		.name = "PeekConsoleInputA", .nargs = 4, .rva = 707777, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 160, .struct_type = INPUT_RECORD, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEventsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			707804 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PeekConsoleInputW", .nargs = 4, .rva = 707812, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 160, .struct_type = INPUT_RECORD, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEventsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			707839 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDiskFreeSpaceExA", .nargs = 4, .rva = 586863, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDirectoryName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFreeBytesAvailableToCaller", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = IN},
			{.name = "lpTotalNumberOfBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfFreeBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDiskFreeSpaceExA"
	},
	{
		.name = "GetDiskFreeSpaceExW", .nargs = 4, .rva = 253504, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDirectoryName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFreeBytesAvailableToCaller", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = IN},
			{.name = "lpTotalNumberOfBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfFreeBytes", .type = UNION | POINTER, .size = 64, .struct_type = ULARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDiskFreeSpaceExW"
	},
	{
		.name = "PowerSetRequest", .nargs = 2, .rva = 245192, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "PowerRequest", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestType", .type = ENUMERATION, .size = 32, .struct_type = POWER_REQUEST_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			245246 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FatalAppExitA", .nargs = 2, .rva = 587387, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "uAction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMessageText", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FatalAppExitA"
	},
	{
		.name = "RegLoadMUIStringA", .nargs = 7, .rva = 692913, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pszValue", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pszOutBuf", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbOutBuf", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pszDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			692916 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EndUpdateResourceA", .nargs = 2, .rva = 644132, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hUpdate", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fDiscard", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			644073 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FatalAppExitW", .nargs = 2, .rva = 587403, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "uAction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMessageText", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FatalAppExitW"
	},
	{
		.name = "HeapUnlock", .nargs = 1, .rva = 204986, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapUnlock"
	},
	{
		.name = "GetVolumeInformationA", .nargs = 8, .rva = 410026, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeNameBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nVolumeNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeSerialNumber", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaximumComponentLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFileSystemFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFileSystemNameBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nFileSystemNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			410207 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserDefaultLangID", .nargs = 0, .rva = 418887, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetUserDefaultLangID"
	},
	{
		.name = "SetCommBreak", .nargs = 1, .rva = 597248, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			597264 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalUnlock", .nargs = 1, .rva = 302416, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			302545 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReplaceFileW", .nargs = 6, .rva = 394743, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpReplacedFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReplacementFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBackupFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReplaceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExclude", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DisableThreadLibraryCalls", .nargs = 1, .rva = 314950, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hLibModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DisableThreadLibraryCalls"
	},
	{
		.name = "QueryIdleProcessorCycleTimeEx", .nargs = 3, .rva = 621154, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Group", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BufferLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ProcessorIdleCycleTime", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			621206 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemTime", .nargs = 1, .rva = 315096, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemTime"
	},
	{
		.name = "GetFullPathNameA", .nargs = 4, .rva = 341813, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = ANSI_CHAR | POINTER_POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFullPathNameA"
	},
	{
		.name = "RtlCaptureStackBackTrace", .nargs = 4, .rva = 271961, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "FramesToSkip", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FramesToCapture", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "BackTrace", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "BackTraceHash", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlCaptureStackBackTrace"
	},
	{
		.name = "SearchPathA", .nargs = 6, .rva = 392147, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtension", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = ANSI_CHAR | POINTER_POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			392484 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocaleInfoEx", .nargs = 4, .rva = 218021, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLocaleInfoEx"
	},
	{
		.name = "TrySubmitThreadpoolCallback", .nargs = 3, .rva = 219914, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pfns", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			219959 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadpoolStackInformation", .nargs = 2, .rva = 587273, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ptpp", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ptpsi", .type = STRUCT | POINTER, .size = 64, .struct_type = TP_POOL_STACK_INFORMATION, .arg_dir = IN},
		}, .rets_rva = 
		{
			694930 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasExesA", .nargs = 2, .rva = 702300, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeNameBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ExeNameBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			702319 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Toolhelp32ReadProcessMemory", .nargs = 5, .rva = 591897, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "th32ProcessID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			591953 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ApplicationRecoveryInProgress", .nargs = 1, .rva = 620813, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pbCancelled", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			731201 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RemoveDirectoryTransactedA", .nargs = 2, .rva = 552017, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			552068 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryThreadProfiling", .nargs = 2, .rva = 623862, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ThreadHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Enabled", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			623895 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileSectionNamesA", .nargs = 3, .rva = 555457, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszReturnBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			555482 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualQueryEx", .nargs = 4, .rva = 216642, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 224, .struct_type = MEMORY_BASIC_INFORMATION, .arg_dir = INOUT},
			{.name = "dwLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualQueryEx"
	},
	{
		.name = "SetConsoleScreenBufferInfoEx", .nargs = 2, .rva = 711535, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleScreenBufferInfoEx", .type = STRUCT | POINTER, .size = 768, .struct_type = CONSOLE_SCREEN_BUFFER_INFOEX, .arg_dir = IN},
		}, .rets_rva = 
		{
			711711 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnregisterApplicationRecoveryCallback", .nargs = 0, .rva = 380129, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			380140 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessAffinityMask", .nargs = 3, .rva = 271185, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProcessAffinityMask", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpSystemAffinityMask", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			271253 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32EnumProcessModulesEx", .nargs = 5, .rva = 719542, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lphModule", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbNeeded", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwFilterFlag", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719599, 719633 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RequestWakeupLatency", .nargs = 1, .rva = 583145, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "latency", .type = ENUMERATION, .size = 32, .struct_type = LATENCY_TIME, .arg_dir = IN},
		}, .rets_rva = 
		{
			583157 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeLibrary", .nargs = 1, .rva = 317904, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hLibModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FreeLibrary"
	},
	{
		.name = "GlobalUnfix", .nargs = 1, .rva = 572614, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572632 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcpynA", .nargs = 3, .rva = 231801, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iMaxLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "lstrcpynA"
	},
	{
		.name = "GetUserDefaultLocaleName", .nargs = 2, .rva = 587531, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchLocaleName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetUserDefaultLocaleName"
	},
	{
		.name = "SearchPathW", .nargs = 6, .rva = 277932, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SearchPathW"
	},
	{
		.name = "GetThreadSelectorEntry", .nargs = 3, .rva = 380676, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSelector", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSelectorEntry", .type = STRUCT | POINTER, .size = 64, .struct_type = LDT_ENTRY, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			380735 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalCompact", .nargs = 1, .rva = 572566, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwMinFree", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572580 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLongPathNameA", .nargs = 3, .rva = 586879, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszShortPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszLongPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			700192 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetLocalTime", .nargs = 1, .rva = 587129, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetLocalTime"
	},
	{
		.name = "RegisterWaitForSingleObject", .nargs = 6, .rva = 242519, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "phNewWaitObject", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Context", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			242611 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocalTime", .nargs = 1, .rva = 305422, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLocalTime"
	},
	{
		.name = "GetSystemTimes", .nargs = 3, .rva = 383034, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpIdleTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpKernelTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpUserTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			383328 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleCtrlHandler", .nargs = 2, .rva = 353748, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "HandlerRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Add", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			353816 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalFileTimeToFileTime", .nargs = 2, .rva = 226132, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocalFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocalFileTimeToFileTime"
	},
	{
		.name = "FindVolumeMountPointClose", .nargs = 1, .rva = 607711, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolumeMountPoint", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			607781 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_lcreat", .nargs = 2, .rva = 573696, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iAttribute", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			573740 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleAliasesLengthW", .nargs = 1, .rva = 701837, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			701853 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleDisplayMode", .nargs = 1, .rva = 707011, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpModeFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			707099 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVersionExA", .nargs = 1, .rva = 342113, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 1184, .struct_type = OSVERSIONINFOA, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetVersionExA"
	},
	{
		.name = "SetProcessWorkingSetSizeEx", .nargs = 4, .rva = 226241, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMinimumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			226392 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegisterApplicationRestart", .nargs = 2, .rva = 210533, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pwzCommandline", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			210559 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileBandwidthReservation", .nargs = 6, .rva = 560326, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPeriodMilliseconds", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpBytesPerPeriod", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pDiscardable", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTransferSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNumOutstandingRequests", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			560417 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SignalObjectAndWait", .nargs = 4, .rva = 418265, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObjectToSignal", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hObjectToWaitOn", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			418431 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalAddAtomW", .nargs = 1, .rva = 291065, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			291083 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegSetValueExA", .nargs = 6, .rva = 276211, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			276582, 501314 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegSetValueExW", .nargs = 6, .rva = 300208, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			300504, 501425 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleOutputA", .nargs = 5, .rva = 710737, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 32, .struct_type = CHAR_INFO, .arg_dir = IN},
			{.name = "dwBufferSize", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "dwBufferCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpWriteRegion", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			710765 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleOutputW", .nargs = 5, .rva = 710701, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 32, .struct_type = CHAR_INFO, .arg_dir = IN},
			{.name = "dwBufferSize", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "dwBufferCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpWriteRegion", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			710729 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushFileBuffers", .nargs = 1, .rva = 229249, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			229308 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteProfileStringA", .nargs = 3, .rva = 556913, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			556935 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteProfileStringW", .nargs = 3, .rva = 418576, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			418598 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelSynchronousIo", .nargs = 1, .rva = 560025, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			560065 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RemoveSecureMemoryCacheCallback", .nargs = 1, .rva = 572712, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pfnCallBack", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572730 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateTapePartition", .nargs = 4, .rva = 617248, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPartitionMethod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617298 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCPInfo", .nargs = 2, .rva = 335406, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CodePage", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCPInfo", .type = STRUCT | POINTER, .size = 160, .struct_type = CPINFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCPInfo"
	},
	{
		.name = "FindNextFileNameW", .nargs = 3, .rva = 559553, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindStream", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StringLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "LinkName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			559693 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualUnlock", .nargs = 2, .rva = 231594, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			231638 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegisterApplicationRecoveryCallback", .nargs = 4, .rva = 387978, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pRecoveyCallback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pvParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPingInterval", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			388023 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadErrorMode", .nargs = 0, .rva = 557846, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			557880 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesExA", .nargs = 3, .rva = 420993, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = GET_FILEEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileAttributesExA"
	},
	{
		.name = "GetFileAttributesExW", .nargs = 3, .rva = 272189, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = GET_FILEEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileAttributesExW"
	},
	{
		.name = "K32GetProcessMemoryInfo", .nargs = 3, .rva = 409753, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Process", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ppsmemCounters", .type = STRUCT | POINTER, .size = 320, .struct_type = PROCESS_MEMORY_COUNTERS, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			409902 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DuplicateHandle", .nargs = 7, .rva = 314841, 
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
			314918 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumePathNameA", .nargs = 3, .rva = 612262, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumePathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			612509 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumePathNameW", .nargs = 3, .rva = 334263, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumePathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			334298 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapQueryInformation", .nargs = 5, .rva = 586975, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "HeapHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HeapInformationClass", .type = ENUMERATION, .size = 32, .struct_type = HEAP_INFORMATION_CLASS, .arg_dir = IN},
			{.name = "HeapInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "HeapInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapQueryInformation"
	},
	{
		.name = "DebugBreak", .nargs = 0, .rva = 586597, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DebugBreak"
	},
	{
		.name = "RegCreateKeyExA", .nargs = 9, .rva = 273788, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpClass", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "phkResult", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwDisposition", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			273834 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegCreateKeyExW", .nargs = 9, .rva = 265509, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Reserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpClass", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "phkResult", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwDisposition", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			265555 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextFileA", .nargs = 2, .rva = 303495, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 2560, .struct_type = WIN32_FIND_DATAA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindNextFileA"
	},
	{
		.name = "FindNextFileW", .nargs = 2, .rva = 300602, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindFileData", .type = STRUCT | POINTER, .size = 4736, .struct_type = WIN32_FIND_DATAW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindNextFileW"
	},
	{
		.name = "SetThreadPriorityBoost", .nargs = 2, .rva = 587177, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bDisablePriorityBoost", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetThreadPriorityBoost"
	},
	{
		.name = "OpenMutexA", .nargs = 3, .rva = 261658, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			261722 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenMutexW", .nargs = 3, .rva = 366893, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenMutexW"
	},
	{
		.name = "UnregisterApplicationRestart", .nargs = 0, .rva = 380146, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			380155 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindClose", .nargs = 1, .rva = 331362, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindClose"
	},
	{
		.name = "GetWriteWatch", .nargs = 6, .rva = 622060, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwRegionSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddresses", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwGranularity", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			622109 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedCompareExchange", .nargs = 3, .rva = 310162, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Destination", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Exchange", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Comperand", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310108 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitCommEvent", .nargs = 3, .rva = 598536, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEvtMask", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
			598746 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DebugActiveProcess", .nargs = 1, .rva = 547228, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			547303 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStringTypeA", .nargs = 5, .rva = 223391, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetStringTypeA"
	},
	{
		.name = "GetStringTypeW", .nargs = 4, .rva = 354248, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwInfoType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharType", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetStringTypeW"
	},
	{
		.name = "VirtualAllocExNuma", .nargs = 6, .rva = 587209, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualAllocExNuma"
	},
	{
		.name = "GetCommConfig", .nargs = 3, .rva = 601153, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hCommDev", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = INOUT},
			{.name = "lpdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			601585 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapFree", .nargs = 3, .rva = 310224, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMem", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310248 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsValidLocale", .nargs = 2, .rva = 277988, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsValidLocale"
	},
	{
		.name = "GetLargePageMinimum", .nargs = 0, .rva = 622162, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			622167 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleSelectionInfo", .nargs = 1, .rva = 711835, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleSelectionInfo", .type = STRUCT | POINTER, .size = 128, .struct_type = CONSOLE_SELECTION_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			711934 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadUILanguage", .nargs = 1, .rva = 337090, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			337190 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDiskFreeSpaceA", .nargs = 5, .rva = 382930, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSectorsPerCluster", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpBytesPerSector", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNumberOfFreeClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDiskFreeSpaceA"
	},
	{
		.name = "GetDiskFreeSpaceW", .nargs = 5, .rva = 210224, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSectorsPerCluster", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpBytesPerSector", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNumberOfFreeClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTotalNumberOfClusters", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDiskFreeSpaceW"
	},
	{
		.name = "GetProcessPreferredUILanguages", .nargs = 4, .rva = 586911, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessPreferredUILanguages"
	},
	{
		.name = "FlsFree", .nargs = 1, .rva = 335713, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FlsFree"
	},
	{
		.name = "Process32Next", .nargs = 2, .rva = 410885, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lppe", .type = STRUCT | POINTER, .size = 2368, .struct_type = TAGPROCESSENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			411077 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushConsoleInputBuffer", .nargs = 1, .rva = 712373, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			712464 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegLoadKeyA", .nargs = 3, .rva = 691884, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFile", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			692265, 692337 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegLoadKeyW", .nargs = 3, .rva = 8764, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFile", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			8943, 499516 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetVolumeLabelA", .nargs = 2, .rva = 582936, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			582974 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetVolumeLabelW", .nargs = 2, .rva = 581940, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			582734 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BackupRead", .nargs = 7, .rva = 534270, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bAbort", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bProcessSecurity", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			534344 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadModule", .nargs = 2, .rva = 584424, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpModuleName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpParameterBlock", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			585116, 585154 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FillConsoleOutputAttribute", .nargs = 5, .rva = 396661, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wAttribute", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwWriteCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfAttrsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			396689 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemDefaultLangID", .nargs = 0, .rva = 252782, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemDefaultLangID"
	},
	{
		.name = "InitOnceBeginInitialize", .nargs = 4, .rva = 380215, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpInitOnce", .type = UNION | POINTER, .size = 32, .struct_type = RTL_RUN_ONCE, .arg_dir = INOUT},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fPending", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpContext", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			380262 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeEnvironmentStringsA", .nargs = 1, .rva = 339841, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "penv", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FreeEnvironmentStringsA"
	},
	{
		.name = "FreeEnvironmentStringsW", .nargs = 1, .rva = 335299, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "penv", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FreeEnvironmentStringsW"
	},
	{
		.name = "TerminateJobObject", .nargs = 2, .rva = 218482, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hJob", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			218515 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalReAlloc", .nargs = 3, .rva = 257168, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			257430 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadPriority", .nargs = 1, .rva = 299335, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetThreadPriority"
	},
	{
		.name = "CreateThreadpoolTimer", .nargs = 3, .rva = 241673, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "pfnti", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			241722 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStdHandle", .nargs = 1, .rva = 335430, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nStdHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetStdHandle"
	},
	{
		.name = "K32GetDeviceDriverFileNameA", .nargs = 3, .rva = 718873, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ImageBase", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			718988 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetDeviceDriverFileNameW", .nargs = 3, .rva = 718996, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ImageBase", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719024 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DefineDosDeviceA", .nargs = 3, .rva = 557027, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDeviceName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			557052 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadFileScatter", .nargs = 5, .rva = 203540, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "aSegmentArray", .type = UNION | POINTER, .size = 64, .struct_type = FILE_SEGMENT_ELEMENT, .arg_dir = INOUT},
			{.name = "nNumberOfBytesToRead", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ReadFileScatter"
	},
	{
		.name = "IsDBCSLeadByte", .nargs = 1, .rva = 278097, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TestChar", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsDBCSLeadByte"
	},
	{
		.name = "QueueUserAPC", .nargs = 3, .rva = 231849, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pfnAPC", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "QueueUserAPC"
	},
	{
		.name = "Wow64SetThreadContext", .nargs = 2, .rva = 590270, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = STRUCT | POINTER, .size = 5728, .struct_type = WOW64_CONTEXT, .arg_dir = IN},
		}, .rets_rva = 
		{
			590282 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteTimerQueueEx", .nargs = 2, .rva = 392123, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DeleteTimerQueueEx"
	},
	{
		.name = "SetTimerQueueTimer", .nargs = 6, .rva = 204095, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "TimerQueue", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Callback", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Parameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "DueTime", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Period", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PreferIo", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			204141 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessHeaps", .nargs = 2, .rva = 416948, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NumberOfHeaps", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessHeaps", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessHeaps"
	},
	{
		.name = "RegDeleteValueA", .nargs = 2, .rva = 421683, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			421837, 496643 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileTransactedA", .nargs = 7, .rva = 558137, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFindFileData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "fSearchOp", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_SEARCH_OPS, .arg_dir = IN},
			{.name = "lpSearchFilter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAdditionalFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			558265 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileTransactedW", .nargs = 7, .rva = 558305, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFindFileData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "fSearchOp", .type = ENUMERATION, .size = 32, .struct_type = FINDEX_SEARCH_OPS, .arg_dir = IN},
			{.name = "lpSearchFilter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwAdditionalFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			558433 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CheckNameLegalDOS8Dot3A", .nargs = 5, .rva = 582825, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOemName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "OemNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbNameContainsSpaces", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pbNameLegal", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			582928 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CheckNameLegalDOS8Dot3W", .nargs = 5, .rva = 581708, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOemName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "OemNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbNameContainsSpaces", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pbNameLegal", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581932 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateDirectoryExW", .nargs = 3, .rva = 548489, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTemplateDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			552009 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VerLanguageNameA", .nargs = 3, .rva = 304542, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szLang", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VerLanguageNameA"
	},
	{
		.name = "VerLanguageNameW", .nargs = 3, .rva = 232609, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szLang", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchLang", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VerLanguageNameW"
	},
	{
		.name = "GetNamedPipeClientComputerNameA", .nargs = 3, .rva = 579769, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientComputerName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ClientComputerNameLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			579993 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNamedPipeClientComputerNameW", .nargs = 3, .rva = 586831, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientComputerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ClientComputerNameLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetNamedPipeClientComputerNameW"
	},
	{
		.name = "SetThreadPriority", .nargs = 2, .rva = 280597, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nPriority", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetThreadPriority"
	},
	{
		.name = "FindFirstChangeNotificationA", .nargs = 3, .rva = 586751, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWatchSubtree", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNotifyFilter", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindFirstChangeNotificationA"
	},
	{
		.name = "FindFirstChangeNotificationW", .nargs = 3, .rva = 224424, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWatchSubtree", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNotifyFilter", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindFirstChangeNotificationW"
	},
	{
		.name = "K32GetModuleBaseNameA", .nargs = 4, .rva = 232270, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			232368 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetModuleBaseNameW", .nargs = 4, .rva = 232051, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			232157 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileMappingNumaW", .nargs = 7, .rva = 586523, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateFileMappingNumaW"
	},
	{
		.name = "DisableThreadProfiling", .nargs = 1, .rva = 623824, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "PerformanceDataHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			623854 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetDefaultCommConfigA", .nargs = 3, .rva = 600969, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			601074 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetDefaultCommConfigW", .nargs = 3, .rva = 600689, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			600835 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CloseHandle", .nargs = 1, .rva = 313980, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			314022 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemPowerStatus", .nargs = 1, .rva = 253158, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSystemPowerStatus", .type = STRUCT | POINTER, .size = 96, .struct_type = SYSTEM_POWER_STATUS, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			253296 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64GetThreadContext", .nargs = 2, .rva = 590270, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = STRUCT | POINTER, .size = 5728, .struct_type = WOW64_CONTEXT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590282 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SystemTimeToFileTime", .nargs = 2, .rva = 315083, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SystemTimeToFileTime"
	},
	{
		.name = "SetCurrentDirectoryA", .nargs = 1, .rva = 299069, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetCurrentDirectoryA"
	},
	{
		.name = "SetCurrentDirectoryW", .nargs = 1, .rva = 357987, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetCurrentDirectoryW"
	},
	{
		.name = "CommConfigDialogA", .nargs = 3, .rva = 600113, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hWnd", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			600213 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CommConfigDialogW", .nargs = 3, .rva = 599837, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hWnd", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCC", .type = STRUCT | POINTER, .size = 416, .struct_type = COMMCONFIG, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			599983 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreatePipe", .nargs = 4, .rva = 406967, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hReadPipe", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hWritePipe", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpPipeAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreatePipe"
	},
	{
		.name = "GetVersionExW", .nargs = 1, .rva = 277274, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 2208, .struct_type = OSVERSIONINFOW, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetVersionExW"
	},
	{
		.name = "GlobalAddAtomA", .nargs = 1, .rva = 230378, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "lpString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			230396 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZClose", .nargs = 1, .rva = 593643, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			593755 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CallbackMayRunLong", .nargs = 1, .rva = 232657, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pci", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			232696 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FoldStringA", .nargs = 5, .rva = 648336, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwMapFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDestStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			648828 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FoldStringW", .nargs = 5, .rva = 415245, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwMapFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSrcStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchSrc", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDestStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FoldStringW"
	},
	{
		.name = "FillConsoleOutputCharacterW", .nargs = 5, .rva = 709629, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cCharacter", .type = WIDE_CHAR, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwWriteCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfCharsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709657 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCommandLineA", .nargs = 0, .rva = 366847, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCommandLineA"
	},
	{
		.name = "GetCommandLineW", .nargs = 0, .rva = 354206, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCommandLineW"
	},
	{
		.name = "DebugSetProcessKillOnExit", .nargs = 1, .rva = 547350, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "KillOnExit", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			547417 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualLock", .nargs = 2, .rva = 261357, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			261401 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadIOPendingFlag", .nargs = 2, .rva = 590311, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpIOIsPending", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590366 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLocaleInfoA", .nargs = 4, .rva = 241087, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLocaleInfoA"
	},
	{
		.name = "GetLocaleInfoW", .nargs = 4, .rva = 353686, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLocaleInfoW"
	},
	{
		.name = "ReleaseSemaphore", .nargs = 3, .rva = 291431, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSemaphore", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lReleaseCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpPreviousCount", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ReleaseSemaphore"
	},
	{
		.name = "SetFileShortNameA", .nargs = 2, .rva = 560690, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpShortName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			560741 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileShortNameW", .nargs = 2, .rva = 560425, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpShortName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			560682 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SystemTimeToTzSpecificLocalTime", .nargs = 3, .rva = 241993, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeZoneInformation", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = IN},
			{.name = "lpUniversalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpLocalTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SystemTimeToTzSpecificLocalTime"
	},
	{
		.name = "CreateMailslotW", .nargs = 4, .rva = 218603, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nMaxMessageSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lReadTimeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			218819 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_hwrite", .nargs = 3, .rva = 573748, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lBytes", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			573806 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalSize", .nargs = 1, .rva = 256888, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			257040 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AllocateUserPhysicalPagesNuma", .nargs = 4, .rva = 621782, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "PageArray", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nndPreferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			621914 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDurationFormat", .nargs = 7, .rva = 382013, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDuration", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "ullDuration", .type = UNSIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDurationStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchDuration", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			382064 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsBadReadPtr", .nargs = 2, .rva = 243363, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lp", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ucb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			243463, 456451 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32EnumProcessModules", .nargs = 4, .rva = 246746, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lphModule", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbNeeded", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			246771 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32EnumProcesses", .nargs = 3, .rva = 414074, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpidProcess", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbNeeded", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			414298, 511404, 511435 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64SuspendThread", .nargs = 1, .rva = 590290, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			590303 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNamedPipeInfo", .nargs = 5, .rva = 579265, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOutBufferSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpInBufferSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaxInstances", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			579387 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalCompact", .nargs = 1, .rva = 572566, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uMinFree", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572580 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleOutputCharacterA", .nargs = 5, .rva = 711043, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharacter", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReadCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfCharsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			711073 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadConsoleOutputCharacterW", .nargs = 5, .rva = 711081, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharacter", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReadCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfCharsRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			711111 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessAffinityMask", .nargs = 2, .rva = 584034, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwProcessAffinityMask", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			584074 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnableThreadProfiling", .nargs = 4, .rva = 623774, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ThreadHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "HardwareCounters", .type = UNSIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PerformanceDataHandle", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			623816 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetProcessWorkingSetSize", .nargs = 3, .rva = 226211, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMinimumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			226233 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcpyW", .nargs = 2, .rva = 232442, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			232494, 429453 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegQueryValueExW", .nargs = 6, .rva = 340504, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpData", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			340775, 500894 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringOrdinal", .nargs = 5, .rva = 284921, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount1", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchCount2", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bIgnoreCase", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CompareStringOrdinal"
	},
	{
		.name = "FreeResource", .nargs = 1, .rva = 258493, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hResData", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FreeResource"
	},
	{
		.name = "CreateThreadpoolIo", .nargs = 4, .rva = 212913, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "fl", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pfnio", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pcbe", .type = STRUCT | POINTER, .size = 320, .struct_type = TP_CALLBACK_ENVIRON_V3, .arg_dir = IN},
		}, .rets_rva = 
		{
			213115 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadIdealProcessorEx", .nargs = 3, .rva = 590423, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpIdealProcessor", .type = STRUCT | POINTER, .size = 32, .struct_type = PROCESSOR_NUMBER, .arg_dir = IN},
			{.name = "lpPreviousIdealProcessor", .type = STRUCT | POINTER, .size = 32, .struct_type = PROCESSOR_NUMBER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590483 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaAvailableMemoryNodeEx", .nargs = 2, .rva = 581225, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Node", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "AvailableBytes", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581322 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadStackGuarantee", .nargs = 1, .rva = 271632, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "StackSizeInBytes", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetThreadStackGuarantee"
	},
	{
		.name = "RegOpenCurrentUser", .nargs = 2, .rva = 280469, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phkResult", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			280504 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFilePointer", .nargs = 4, .rva = 318262, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lDistanceToMove", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDistanceToMoveHigh", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwMoveMethod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFilePointer"
	},
	{
		.name = "EnumSystemLanguageGroupsA", .nargs = 3, .rva = 646751, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLanguageGroupEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646773 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLanguageGroupsW", .nargs = 3, .rva = 203364, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLanguageGroupEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumSystemLanguageGroupsW"
	},
	{
		.name = "GetSystemDEPPolicy", .nargs = 0, .rva = 583463, 
		.return_type = ENUMERATION, .return_size = 32, .args = 
		{
		}, .rets_rva = 
		{
			583498, 583503, 583507, 583512 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedDecrement", .nargs = 1, .rva = 310256, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddend", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310066 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryActCtxW", .nargs = 7, .rva = 271346, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hActCtx", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pvSubInstance", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ulInfoClass", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pvBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcbWrittenOrRequired", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			271502 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SleepConditionVariableSRW", .nargs = 4, .rva = 205813, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ConditionVariable", .type = STRUCT | POINTER, .size = 32, .struct_type = RTL_CONDITION_VARIABLE, .arg_dir = INOUT},
			{.name = "SRWLock", .type = STRUCT | POINTER, .size = 32, .struct_type = RTL_SRWLOCK, .arg_dir = INOUT},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			205874 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetLocaleInfoA", .nargs = 3, .rva = 647019, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			647210 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstVolumeMountPointA", .nargs = 3, .rva = 612593, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeMountPoint", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			612843 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstVolumeMountPointW", .nargs = 3, .rva = 609392, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeMountPoint", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			609809 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetLocaleInfoW", .nargs = 3, .rva = 587113, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LCType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLCData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetLocaleInfoW"
	},
	{
		.name = "lstrcpynW", .nargs = 3, .rva = 418072, 
		.return_type = WIDE_CHAR | POINTER, .return_size = 2, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iMaxLength", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "lstrcpynW"
	},
	{
		.name = "RegOpenUserClassesRoot", .nargs = 4, .rva = 257868, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hToken", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOptions", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "samDesired", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phkResult", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			258253 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConnectNamedPipe", .nargs = 2, .rva = 206631, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ConnectNamedPipe"
	},
	{
		.name = "IsValidLocaleName", .nargs = 1, .rva = 587547, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsValidLocaleName"
	},
	{
		.name = "GetNamedPipeClientSessionId", .nargs = 2, .rva = 580109, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Pipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ClientSessionId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			580145 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapViewOfFileExNuma", .nargs = 7, .rva = 587023, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "MapViewOfFileExNuma"
	},
	{
		.name = "QueryInformationJobObject", .nargs = 5, .rva = 617693, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hJob", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "JobObjectInformationClass", .type = ENUMERATION, .size = 32, .struct_type = JOBOBJECTINFOCLASS, .arg_dir = IN},
			{.name = "lpJobObjectInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbJobObjectInformationLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			617888 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Heap32Next", .nargs = 1, .rva = 591380, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lphe", .type = STRUCT | POINTER, .size = 288, .struct_type = TAGHEAPENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			591889 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddSecureMemoryCacheCallback", .nargs = 1, .rva = 572672, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pfnCallBack", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572704 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceNamesExA", .nargs = 6, .rva = 416343, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LangId", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			416405 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalLock", .nargs = 1, .rva = 302597, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			302731 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadLocale", .nargs = 0, .rva = 267580, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetThreadLocale"
	},
	{
		.name = "SetThreadPreferredUILanguages", .nargs = 3, .rva = 255527, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			255575 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DebugBreakProcess", .nargs = 1, .rva = 547311, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Process", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			547342 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessWorkingSetSizeEx", .nargs = 4, .rva = 220708, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMinimumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaximumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			220770 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindActCtxSectionStringA", .nargs = 5, .rva = 620010, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtensionGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "ulSectionId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringToFind", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnedData", .type = STRUCT | POINTER, .size = 512, .struct_type = TAGACTCTX_SECTION_KEYED_DATA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			620088 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindActCtxSectionStringW", .nargs = 5, .rva = 376957, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtensionGuid", .type = STRUCT | POINTER, .size = 128, .struct_type = GUID, .arg_dir = IN},
			{.name = "ulSectionId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStringToFind", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ReturnedData", .type = STRUCT | POINTER, .size = 512, .struct_type = TAGACTCTX_SECTION_KEYED_DATA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			377019 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenFileById", .nargs = 6, .rva = 216322, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hVolumeHint", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileId", .type = STRUCT | POINTER, .size = 192, .struct_type = FILE_ID_DESCRIPTOR, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwFlagsAndAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			216582 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocaleNameToLCID", .nargs = 2, .rva = 271039, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocaleNameToLCID"
	},
	{
		.name = "WaitForMultipleObjects", .nargs = 4, .rva = 310500, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpHandles", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWaitAll", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310525 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReOpenFile", .nargs = 4, .rva = 203052, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hOriginalFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlagsAndAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			203356 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateNamedPipeA", .nargs = 8, .rva = 578639, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOpenMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPipeMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nMaxInstances", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nOutBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nInBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nDefaultTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			578713 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateNamedPipeW", .nargs = 8, .rva = 206607, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateNamedPipeW"
	},
	{
		.name = "K32GetModuleInformation", .nargs = 4, .rva = 220260, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpmodinfo", .type = STRUCT | POINTER, .size = 96, .struct_type = MODULEINFO, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			220354, 511334 
		}, .jump_in = UNDEFINED
	},
	/* {
		.name = "SetLastError", .nargs = 1, .rva = 310024, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "dwErrCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetLastError"
	}, */
	{
		.name = "InterlockedIncrement", .nargs = 1, .rva = 310208, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddend", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310046 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleA", .nargs = 5, .rva = 339158, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfCharsToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfCharsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			339194 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleW", .nargs = 5, .rva = 295665, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfCharsToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfCharsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			295701 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualProtect", .nargs = 4, .rva = 271169, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flNewProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpflOldProtect", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualProtect"
	},
	{
		.name = "FindResourceExA", .nargs = 4, .rva = 302973, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wLanguage", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			303118 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindResourceExW", .nargs = 4, .rva = 280554, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wLanguage", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindResourceExW"
	},
	{
		.name = "IsWow64Process", .nargs = 2, .rva = 280453, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Wow64Process", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "IsWow64Process"
	},
	{
		.name = "QueryIdleProcessorCycleTime", .nargs = 2, .rva = 621100, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "BufferLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ProcessorIdleCycleTime", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			621146 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegNotifyChangeKeyValue", .nargs = 5, .rva = 283617, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWatchSubtree", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNotifyFilter", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fAsynchronous", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			283779 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalFlags", .nargs = 1, .rva = 418619, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			418768 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetSearchPathMode", .nargs = 1, .rva = 576121, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			576186 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCommModemStatus", .nargs = 2, .rva = 595926, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpModemStat", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			596055 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsSetValue", .nargs = 2, .rva = 318088, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwTlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTlsValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TlsSetValue"
	},
	{
		.name = "SetCalendarInfoW", .nargs = 4, .rva = 587087, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalData", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetCalendarInfoW"
	},
	{
		.name = "CreateProcessW", .nargs = 10, .rva = 8269, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpApplicationName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommandLine", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpProcessAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInheritHandles", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnvironment", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCurrentDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOW, .arg_dir = IN},
			{.name = "lpProcessInformation", .type = STRUCT | POINTER, .size = 128, .struct_type = PROCESS_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			8314 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RaiseFailFastException", .nargs = 3, .rva = 622725, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "pExceptionRecord", .type = STRUCT | POINTER, .size = 640, .struct_type = EXCEPTION_RECORD, .arg_dir = IN},
			{.name = "pContextRecord", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			622975 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindVolumeClose", .nargs = 1, .rva = 208396, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolume", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			208441 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalHandle", .nargs = 1, .rva = 528437, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pMem", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			528558, 528594 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTapeStatus", .nargs = 1, .rva = 617521, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617546 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyContext", .nargs = 3, .rva = 623145, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Destination", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "ContextFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Source", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
		}, .rets_rva = 
		{
			623184 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PostQueuedCompletionStatus", .nargs = 4, .rva = 216085, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesTransferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCompletionKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "PostQueuedCompletionStatus"
	},
	{
		.name = "SetProcessPreferredUILanguages", .nargs = 3, .rva = 656341, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			656386 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalDeleteAtom", .nargs = 1, .rva = 258412, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
			{.name = "nAtom", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			258428 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleOutputCharacterA", .nargs = 5, .rva = 709473, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharacter", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwWriteCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfCharsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709503 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteConsoleOutputCharacterW", .nargs = 5, .rva = 709511, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCharacter", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwWriteCoord", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
			{.name = "lpNumberOfCharsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			709541 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTapePosition", .nargs = 5, .rva = 617054, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwPositionType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwPartition", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwOffsetLow", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwOffsetHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			617138 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FatalExit", .nargs = 1, .rva = 583443, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "ExitCode", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitAtomTable", .nargs = 1, .rva = 9339, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			9419 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegQueryInfoKeyW", .nargs = 12, .rva = 281973, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpClass", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchClass", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcSubKeys", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbMaxSubKeyLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbMaxClassLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcValues", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbMaxValueNameLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbMaxValueLen", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbSecurityDescriptor", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpftLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			282404, 500383 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindCloseChangeNotification", .nargs = 1, .rva = 231249, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hChangeHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindCloseChangeNotification"
	},
	{
		.name = "GetDateFormatA", .nargs = 6, .rva = 415269, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDate", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFormat", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDateStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchDate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			415562 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDateFormatW", .nargs = 6, .rva = 307115, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDate", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFormat", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDateStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchDate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			307256 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLongPathNameW", .nargs = 3, .rva = 332161, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszShortPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszLongPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			332308 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaProximityNode", .nargs = 2, .rva = 581670, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProximityId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NodeNumber", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581700 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalAlloc", .nargs = 2, .rva = 302305, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GlobalAlloc"
	},
	{
		.name = "CreateEventExA", .nargs = 4, .rva = 212458, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateEventExA"
	},
	{
		.name = "CreateEventExW", .nargs = 4, .rva = 9432, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpEventAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateEventExW"
	},
	{
		.name = "GetEnabledXStateFeatures", .nargs = 0, .rva = 623192, 
		.return_type = UNSIGNED_QUAD_WORD, .return_size = 8, .args = 
		{
		}, .rets_rva = 
		{
			623222, 623226 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegFlushKey", .nargs = 1, .rva = 214560, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			214685, 495815 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileA", .nargs = 7, .rva = 315112, 
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
			315182 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateHardLinkW", .nargs = 3, .rva = 618099, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			618552 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleProcessList", .nargs = 2, .rva = 713284, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpdwProcessList", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "dwProcessCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			713481 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_hread", .nargs = 3, .rva = 259320, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lBytes", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			259353 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ClearCommBreak", .nargs = 1, .rva = 601129, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			601145 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetWindowsDirectoryA", .nargs = 2, .rva = 417026, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetWindowsDirectoryA"
	},
	{
		.name = "GetWindowsDirectoryW", .nargs = 2, .rva = 263350, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetWindowsDirectoryW"
	},
	{
		.name = "ExpandEnvironmentStringsA", .nargs = 3, .rva = 232027, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSrc", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDst", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ExpandEnvironmentStringsA"
	},
	{
		.name = "ExpandEnvironmentStringsW", .nargs = 3, .rva = 280192, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSrc", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDst", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ExpandEnvironmentStringsW"
	},
	{
		.name = "IsThreadAFiber", .nargs = 0, .rva = 299438, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			299457 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileTime", .nargs = 4, .rva = 245270, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpLastAccessTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFileTime"
	},
	{
		.name = "CreateFileMappingNumaA", .nargs = 7, .rva = 560749, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileMappingAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMaximumSizeLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nndPreferred", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			560833 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNamedPipeHandleStateW", .nargs = 7, .rva = 579012, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpState", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpCurInstances", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaxCollectionCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpCollectDataTimeout", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpUserName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nMaxUserNameSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			579257 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZCopy", .nargs = 2, .rva = 545830, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hfSource", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hfDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			546004 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMutexA", .nargs = 3, .rva = 341385, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInitialOwner", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateMutexA"
	},
	{
		.name = "CreateMutexW", .nargs = 3, .rva = 273134, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMutexAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInitialOwner", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateMutexW"
	},
	{
		.name = "Process32FirstW", .nargs = 2, .rva = 260661, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lppe", .type = STRUCT | POINTER, .size = 4448, .struct_type = TAGPROCESSENTRY32W, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			260792 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleHandleA", .nargs = 1, .rva = 315201, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpModuleName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetModuleHandleA"
	},
	{
		.name = "GetModuleHandleW", .nargs = 1, .rva = 341837, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpModuleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetModuleHandleW"
	},
	{
		.name = "GetDurationFormatEx", .nargs = 7, .rva = 382072, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDuration", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "ullDuration", .type = UNSIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDurationStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchDuration", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			382167 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Heap32First", .nargs = 3, .rva = 590889, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lphe", .type = STRUCT | POINTER, .size = 288, .struct_type = TAGHEAPENTRY32, .arg_dir = INOUT},
			{.name = "th32ProcessID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "th32HeapID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			591372 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMailslotA", .nargs = 4, .rva = 218534, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nMaxMessageSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lReadTimeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			218595 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCommTimeouts", .nargs = 2, .rva = 598227, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommTimeouts", .type = STRUCT | POINTER, .size = 160, .struct_type = COMMTIMEOUTS, .arg_dir = IN},
		}, .rets_rva = 
		{
			598390 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCalendarInfoA", .nargs = 4, .rva = 647218, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalData", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			647385 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadContext", .nargs = 2, .rva = 590227, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
		}, .rets_rva = 
		{
			590262 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetModuleFileNameExA", .nargs = 4, .rva = 414306, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			414404 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetModuleFileNameExW", .nargs = 4, .rva = 246622, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			246728 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleCursorPosition", .nargs = 2, .rva = 204512, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCursorPosition", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
		}, .rets_rva = 
		{
			204590 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaProcessorNodeEx", .nargs = 2, .rva = 580934, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Processor", .type = STRUCT | POINTER, .size = 32, .struct_type = PROCESSOR_NUMBER, .arg_dir = IN},
			{.name = "NodeNumber", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581103 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentActCtx", .nargs = 1, .rva = 245661, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lphActCtx", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			245702 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryThreadpoolStackInformation", .nargs = 2, .rva = 587289, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ptpp", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ptpsi", .type = STRUCT | POINTER, .size = 64, .struct_type = TP_POOL_STACK_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			694974 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryProcessCycleTime", .nargs = 2, .rva = 621033, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CycleTime", .type = UNSIGNED_QUAD_WORD | POINTER, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			621092 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumeNameForVolumeMountPointA", .nargs = 3, .rva = 610261, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			610508 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumeNameForVolumeMountPointW", .nargs = 3, .rva = 244449, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			244498 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WTSGetActiveConsoleSessionId", .nargs = 0, .rva = 215051, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			215056 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNLSString", .nargs = 7, .rva = 391443, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FindNLSString"
	},
	{
		.name = "GetACP", .nargs = 0, .rva = 342442, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetACP"
	},
	{
		.name = "FindResourceW", .nargs = 3, .rva = 278113, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			278135 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemWindowsDirectoryA", .nargs = 2, .rva = 204828, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			204950 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetSystemWindowsDirectoryW", .nargs = 2, .rva = 345371, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			343224 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLastError", .nargs = 0, .rva = 311040, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLastError"
	},
	{
		.name = "FindNextVolumeMountPointW", .nargs = 3, .rva = 610231, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolumeMountPoint", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeMountPoint", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			610253 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextStreamW", .nargs = 2, .rva = 378936, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindStream", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFindStreamData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			378978 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FreeUserPhysicalPages", .nargs = 3, .rva = 621922, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "PageArray", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			621960 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCalendarInfoA", .nargs = 6, .rva = 413180, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCalData", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchData", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			413412 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCalendarInfoW", .nargs = 6, .rva = 224134, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCalendarInfoW"
	},
	{
		.name = "EnumDateFormatsA", .nargs = 3, .rva = 646662, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646698 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumDateFormatsW", .nargs = 3, .rva = 418128, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumDateFormatsW"
	},
	{
		.name = "GetThreadContext", .nargs = 2, .rva = 396481, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			396510 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BindIoCompletionCallback", .nargs = 3, .rva = 392656, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FileHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Function", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			392688 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesA", .nargs = 1, .rva = 335334, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileAttributesA"
	},
	{
		.name = "GetFileAttributesW", .nargs = 1, .rva = 353535, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileAttributesW"
	},
	{
		.name = "LCIDToLocaleName", .nargs = 4, .rva = 218056, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LCIDToLocaleName"
	},
	{
		.name = "RegRestoreKeyW", .nargs = 3, .rva = 403452, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFile", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			403608, 501023 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsGetValue", .nargs = 1, .rva = 318064, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "dwTlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TlsGetValue"
	},
	{
		.name = "LCMapStringEx", .nargs = 9, .rva = 587563, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LCMapStringEx"
	},
	{
		.name = "GetSystemRegistryQuota", .nargs = 2, .rva = 584350, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pdwQuotaAllowed", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pdwQuotaUsed", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			584416 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FileTimeToSystemTime", .nargs = 2, .rva = 335358, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpSystemTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FileTimeToSystemTime"
	},
	{
		.name = "EnumTimeFormatsEx", .nargs = 4, .rva = 587435, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeFmtEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumTimeFormatsEx"
	},
	{
		.name = "GetSystemTimeAsFileTime", .nargs = 1, .rva = 339934, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpSystemTimeAsFileTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetSystemTimeAsFileTime"
	},
	{
		.name = "LocalReAlloc", .nargs = 3, .rva = 291624, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocalReAlloc"
	},
	{
		.name = "K32EnumPageFilesA", .nargs = 2, .rva = 719468, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pCallBackRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719534 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32EnumPageFilesW", .nargs = 2, .rva = 719092, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pCallBackRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "pContext", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719322 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnregisterWait", .nargs = 1, .rva = 242837, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "WaitHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			242881 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenJobObjectW", .nargs = 3, .rva = 617554, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617685 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileTransactedA", .nargs = 10, .rva = 571225, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwCreationDisposition", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlagsAndAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTemplateFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pusMiniVersion", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtendedParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			571305 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFileTransactedW", .nargs = 10, .rva = 567121, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwShareMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "dwCreationDisposition", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlagsAndAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTemplateFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pusMiniVersion", .type = UNSIGNED_WORD | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExtendedParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			567314 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DeleteFileTransactedA", .nargs = 2, .rva = 563603, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			563654 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetNamedPipeHandleState", .nargs = 4, .rva = 390176, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hNamedPipe", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMaxCollectionCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCollectDataTimeout", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetNamedPipeHandleState"
	},
	{
		.name = "SetEnvironmentVariableA", .nargs = 2, .rva = 297249, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetEnvironmentVariableA"
	},
	{
		.name = "RaiseException", .nargs = 4, .rva = 256864, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "dwExceptionCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwExceptionFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfArguments", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpArguments", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "RaiseException"
	},
	{
		.name = "FreeConsole", .nargs = 0, .rva = 704478, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			704598 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitNamedPipeA", .nargs = 2, .rva = 579710, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNamedPipeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			579761 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessWorkingSetSize", .nargs = 3, .rva = 220676, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMinimumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaximumWorkingSetSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			220700 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteFileEx", .nargs = 5, .rva = 409009, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "lpCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "WriteFileEx"
	},
	{
		.name = "ApplicationRecoveryFinished", .nargs = 1, .rva = 620797, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "bSuccess", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			731298 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCompressedFileSizeW", .nargs = 2, .rva = 563033, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSizeHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			563337 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InterlockedExchange", .nargs = 2, .rva = 311050, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Target", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Value", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310088 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileValidData", .nargs = 2, .rva = 203450, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ValidDataLength", .type = SIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			203470 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnlockFile", .nargs = 5, .rva = 418839, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileOffsetHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "UnlockFile"
	},
	{
		.name = "GetFileAttributesTransactedW", .nargs = 4, .rva = 205882, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = GET_FILEEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			205976 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateFiber", .nargs = 3, .rva = 217167, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "dwStackSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartAddress", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217191 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetThreadpoolThreadMinimum", .nargs = 2, .rva = 206256, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ptpp", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cthrdMic", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			206298 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualFreeEx", .nargs = 4, .rva = 246254, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFreeType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualFreeEx"
	},
	{
		.name = "SetXStateFeaturesMask", .nargs = 2, .rva = 623581, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Context", .type = STRUCT | POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "FeatureMask", .type = UNSIGNED_QUAD_WORD, .size = 8, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			623766 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetUserGeoID", .nargs = 1, .rva = 649201, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GeoId", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			649733 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32QueryWorkingSet", .nargs = 3, .rva = 383336, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			383374 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WerGetFlags", .nargs = 2, .rva = 390495, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			390612, 520138 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IdnToAscii", .nargs = 5, .rva = 232376, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpUnicodeCharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchUnicodeChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpASCIICharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchASCIIChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			232434 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResetWriteWatch", .nargs = 2, .rva = 622117, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwRegionSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			622154 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserGeoID", .nargs = 1, .rva = 416688, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GeoClass", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			416919 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileApisToANSI", .nargs = 0, .rva = 587103, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFileApisToANSI"
	},
	{
		.name = "AttachConsole", .nargs = 1, .rva = 705526, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			705719 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryProcessAffinityUpdateMode", .nargs = 2, .rva = 587321, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "QueryProcessAffinityUpdateMode"
	},
	{
		.name = "Wow64EnableWow64FsRedirection", .nargs = 1, .rva = 560073, 
		.return_type = UNSIGNED_BYTE, .return_size = 1, .args = 
		{
			{.name = "Wow64FsEnableRedirection", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			560104 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileStructA", .nargs = 5, .rva = 555490, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszSection", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStruct", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSizeStruct", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szFile", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			555862 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileStructW", .nargs = 5, .rva = 555870, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszSection", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStruct", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "uSizeStruct", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szFile", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			556244 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsBadCodePtr", .nargs = 1, .rva = 418025, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpfn", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			418041 
		}, .jump_in = UNDEFINED
	},
	/* {
		.name = "QueryPerformanceFrequency", .nargs = 1, .rva = 271015, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFrequency", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "QueryPerformanceFrequency"
	}, */
	{
		.name = "WinExec", .nargs = 2, .rva = 583165, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCmdLine", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uCmdShow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			583435 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadPreferredUILanguages", .nargs = 4, .rva = 271063, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pulNumLanguages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pwszLanguagesBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcchLanguagesBuffer", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetThreadPreferredUILanguages"
	},
	{
		.name = "K32QueryWorkingSetEx", .nargs = 3, .rva = 242675, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pv", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			242713 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LocalSize", .nargs = 1, .rva = 262194, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			262333 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalHandle", .nargs = 1, .rva = 303300, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pMem", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			303425 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetUserDefaultUILanguage", .nargs = 0, .rva = 271087, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetUserDefaultUILanguage"
	},
	{
		.name = "EnumDateFormatsExEx", .nargs = 4, .rva = 587419, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDateFmtEnumProcExEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumDateFormatsExEx"
	},
	{
		.name = "LZSeek", .nargs = 3, .rva = 592862, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lOffset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iOrigin", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			592989 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Module32FirstW", .nargs = 2, .rva = 247198, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpme", .type = STRUCT | POINTER, .size = 8512, .struct_type = TAGMODULEENTRY32W, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			247329 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFilePointerEx", .nargs = 4, .rva = 259506, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "liDistanceToMove", .type = UNION, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = IN},
			{.name = "lpNewFilePointer", .type = UNION | POINTER, .size = 64, .struct_type = LARGE_INTEGER, .arg_dir = INOUT},
			{.name = "dwMoveMethod", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			259532 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MapUserPhysicalPagesScatter", .nargs = 3, .rva = 622014, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "VirtualAddresses", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PageArray", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			622052 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStringScripts", .nargs = 5, .rva = 379576, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchString", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpScripts", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchScripts", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			379960 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleCursorInfo", .nargs = 2, .rva = 711719, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleCursorInfo", .type = STRUCT | POINTER, .size = 64, .struct_type = CONSOLE_CURSOR_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			711827 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WriteProcessMemory", .nargs = 5, .rva = 246238, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "WriteProcessMemory"
	},
	{
		.name = "SetCommState", .nargs = 2, .rva = 597432, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDCB", .type = STRUCT | POINTER, .size = 224, .struct_type = DCB, .arg_dir = IN},
		}, .rets_rva = 
		{
			597590 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoA", .nargs = 4, .rva = 418176, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCalInfoEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			418246 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoW", .nargs = 4, .rva = 586639, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCalInfoEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumCalendarInfoW"
	},
	{
		.name = "GetFileTime", .nargs = 4, .rva = 266095, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpLastAccessTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileTime"
	},
	{
		.name = "GetVersion", .nargs = 0, .rva = 267598, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetVersion"
	},
	{
		.name = "SetWaitableTimer", .nargs = 6, .rva = 285183, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetWaitableTimer"
	},
	{
		.name = "SetVolumeMountPointW", .nargs = 2, .rva = 611000, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeMountPoint", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			611942 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTickCount", .nargs = 0, .rva = 309856, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetTickCount"
	},
	{
		.name = "GetConsoleOutputCP", .nargs = 0, .rva = 332649, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			332722 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResolveLocaleName", .nargs = 3, .rva = 218171, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNameToResolve", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpLocaleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchLocaleName", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ResolveLocaleName"
	},
	{
		.name = "LocalShrink", .nargs = 2, .rva = 573814, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMem", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cbNewSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			573828 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_lopen", .nargs = 2, .rva = 573613, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iReadWrite", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			573688 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ExitProcess", .nargs = 1, .rva = 336207, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "uExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WaitForSingleObjectEx", .nargs = 3, .rva = 309936, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			310005 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetQueuedCompletionStatus", .nargs = 5, .rva = 216109, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "CompletionPort", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesTransferred", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCompletionKey", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER_POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetQueuedCompletionStatus"
	},
	{
		.name = "CancelWaitableTimer", .nargs = 1, .rva = 291455, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hTimer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CancelWaitableTimer"
	},
	{
		.name = "DnsHostnameToComputerNameA", .nargs = 3, .rva = 538923, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Hostname", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ComputerName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			539107 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateJobObjectA", .nargs = 2, .rva = 617942, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpJobAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			618011 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateJobObjectW", .nargs = 2, .rva = 218901, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpJobAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			219009 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Beep", .nargs = 2, .rva = 536705, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFreq", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDuration", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "Beep"
	},
	{
		.name = "GetThreadTimes", .nargs = 5, .rva = 220157, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCreationTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpExitTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpKernelTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
			{.name = "lpUserTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			220252 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpiA", .nargs = 2, .rva = 270921, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			270982 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoExA", .nargs = 4, .rva = 646512, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCalInfoEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646590 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumCalendarInfoExW", .nargs = 4, .rva = 586623, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCalInfoEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Calendar", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CalType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumCalendarInfoExW"
	},
	{
		.name = "GetNumberOfConsoleInputEvents", .nargs = 2, .rva = 711321, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEvents", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			711422 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareStringW", .nargs = 6, .rva = 302062, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CompareStringW"
	},
	{
		.name = "QueryDosDeviceA", .nargs = 3, .rva = 557138, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDeviceName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ucchMax", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			557504 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryDosDeviceW", .nargs = 3, .rva = 215728, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDeviceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "ucchMax", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "QueryDosDeviceW"
	},
	{
		.name = "K32GetWsChanges", .nargs = 3, .rva = 719794, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpWatchInfo", .type = STRUCT | POINTER, .size = 64, .struct_type = PSAPI_WS_WATCH_INFORMATION, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719818 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFullPathNameW", .nargs = 4, .rva = 345411, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = WIDE_CHAR | POINTER_POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFullPathNameW"
	},
	{
		.name = "SetThreadErrorMode", .nargs = 2, .rva = 557712, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwNewMode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOldMode", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			557838 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReleaseActCtx", .nargs = 1, .rva = 291655, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "hActCtx", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = NTDLL, .jump_in_api_name =  "RtlReleaseActivationContext"
	},
	{
		.name = "WritePrivateProfileStructA", .nargs = 5, .rva = 556252, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszSection", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStruct", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uSizeStruct", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szFile", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			556567 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WritePrivateProfileStructW", .nargs = 5, .rva = 556575, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszSection", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStruct", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uSizeStruct", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "szFile", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			556905 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumberOfConsoleMouseButtons", .nargs = 1, .rva = 711942, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNumberOfMouseButtons", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			712037 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetModuleHandleExA", .nargs = 3, .rva = 259660, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpModuleName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phModule", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetModuleHandleExA"
	},
	{
		.name = "GetModuleHandleExW", .nargs = 3, .rva = 278073, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpModuleName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "phModule", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetModuleHandleExW"
	},
	{
		.name = "ZombifyActCtx", .nargs = 1, .rva = 619020, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hActCtx", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			619052 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertThreadToFiberEx", .nargs = 2, .rva = 217801, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			218013 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCompressedFileSizeA", .nargs = 2, .rva = 563817, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileSizeHigh", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			563873 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemLocalesEx", .nargs = 4, .rva = 586703, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLocaleEnumProcEx", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumSystemLocalesEx"
	},
	{
		.name = "CompareStringA", .nargs = 6, .rva = 266058, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CompareStringA"
	},
	{
		.name = "CallNamedPipeA", .nargs = 7, .rva = 580540, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNamedPipeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpInBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nInBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOutBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nOutBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			580606 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaNodeProcessorMaskEx", .nargs = 2, .rva = 581122, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Node", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ProcessorMask", .type = STRUCT | POINTER, .size = 96, .struct_type = GROUP_AFFINITY, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581217 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Thread32Next", .nargs = 2, .rva = 425692, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpte", .type = STRUCT | POINTER, .size = 224, .struct_type = TAGTHREADENTRY32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			425815 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenThread", .nargs = 3, .rva = 354099, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwThreadId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenThread"
	},
	{
		.name = "K32GetDeviceDriverBaseNameA", .nargs = 3, .rva = 304763, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ImageBase", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFilename", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			304894 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetDeviceDriverBaseNameW", .nargs = 3, .rva = 297273, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ImageBase", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			297363 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32EnumDeviceDrivers", .nargs = 3, .rva = 305130, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpImageBase", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcbNeeded", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			305317, 510941, 510992 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileApisToOEM", .nargs = 0, .rva = 255609, 
		.return_type = VOID, .return_size = 0, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetFileApisToOEM"
	},
	{
		.name = "WaitForDebugEvent", .nargs = 2, .rva = 547955, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDebugEvent", .type = STRUCT | POINTER, .size = 768, .struct_type = DEBUG_EVENT, .arg_dir = INOUT},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			548023 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Heap32ListFirst", .nargs = 2, .rva = 590567, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lphl", .type = STRUCT | POINTER, .size = 128, .struct_type = TAGHEAPLIST32, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590729 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AllocateUserPhysicalPages", .nargs = 3, .rva = 621736, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NumberOfPages", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "PageArray", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			621774 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenPrivateNamespaceW", .nargs = 2, .rva = 206067, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBoundaryDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAliasPrefix", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			206149 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetMailslotInfo", .nargs = 2, .rva = 214793, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMailslot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lReadTimeout", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			214874 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ResumeThread", .nargs = 1, .rva = 266012, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ResumeThread"
	},
	{
		.name = "GetCurrentThreadId", .nargs = 0, .rva = 310144, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrentThreadId"
	},
	{
		.name = "GetSystemFileCacheSize", .nargs = 3, .rva = 621620, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpMinimumFileCacheSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMaximumFileCacheSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			621728 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BackupWrite", .nargs = 7, .rva = 535992, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToWrite", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "bAbort", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bProcessSecurity", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpContext", .type = VOID | POINTER_POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			536549 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateWaitableTimerA", .nargs = 3, .rva = 212347, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimerAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bManualReset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimerName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212381 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateWaitableTimerW", .nargs = 3, .rva = 224037, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimerAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bManualReset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			224067 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsBadWritePtr", .nargs = 2, .rva = 231646, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lp", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ucb", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			231751, 456470 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDriveTypeA", .nargs = 1, .rva = 231225, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDriveTypeA"
	},
	{
		.name = "GetDriveTypeW", .nargs = 1, .rva = 343014, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpRootPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetDriveTypeW"
	},
	{
		.name = "GetSystemFirmwareTable", .nargs = 4, .rva = 424007, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "FirmwareTableProviderSignature", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "FirmwareTableID", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pFirmwareTableBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "BufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			424195 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetStdHandle", .nargs = 2, .rva = 587145, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nStdHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SetStdHandle"
	},
	{
		.name = "GetUserDefaultLCID", .nargs = 0, .rva = 353668, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetUserDefaultLCID"
	},
	{
		.name = "GetTapeParameters", .nargs = 4, .rva = 617364, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOperation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpTapeInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			617448 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumTimeFormatsA", .nargs = 3, .rva = 646598, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeFmtEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646654 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindFirstFileNameTransactedW", .nargs = 5, .rva = 559865, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "StringLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "LinkName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			559987 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleHistoryInfo", .nargs = 1, .rva = 713489, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleHistoryInfo", .type = STRUCT | POINTER, .size = 128, .struct_type = CONSOLE_HISTORY_INFO, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			713606 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReplaceFileA", .nargs = 6, .rva = 571313, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpReplacedFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReplacementFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBackupFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReplaceFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExclude", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			571495 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RemoveDirectoryW", .nargs = 1, .rva = 219242, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpPathName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "RemoveDirectoryW"
	},
	{
		.name = "SetProcessDEPPolicy", .nargs = 1, .rva = 221231, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			221301 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadProcessMemory", .nargs = 5, .rva = 246222, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ReadProcessMemory"
	},
	{
		.name = "EnumSystemCodePagesA", .nargs = 2, .rva = 646844, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCodePageEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646863 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemCodePagesW", .nargs = 2, .rva = 586687, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCodePageEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumSystemCodePagesW"
	},
	{
		.name = "GetConsoleAliasesLengthA", .nargs = 1, .rva = 701861, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			701877 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextVolumeA", .nargs = 3, .rva = 608145, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolume", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			608369 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleWindowInfo", .nargs = 3, .rva = 712693, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAbsolute", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleWindow", .type = STRUCT | POINTER, .size = 64, .struct_type = SMALL_RECT, .arg_dir = IN},
		}, .rets_rva = 
		{
			712804 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32EmptyWorkingSet", .nargs = 1, .rva = 718766, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			718865 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessHandleCount", .nargs = 2, .rva = 584189, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdwHandleCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			584239 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenSemaphoreA", .nargs = 3, .rva = 588117, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			588191 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "OpenSemaphoreW", .nargs = 3, .rva = 229434, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bInheritHandle", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OpenSemaphoreW"
	},
	{
		.name = "CreateTimerQueueTimer", .nargs = 7, .rva = 243285, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateTimerQueueTimer"
	},
	{
		.name = "GetNumberFormatA", .nargs = 6, .rva = 303971, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValue", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFormat", .type = STRUCT | POINTER, .size = 192, .struct_type = NUMBERFMTA, .arg_dir = IN},
			{.name = "lpNumberStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchNumber", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			304476 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumberFormatW", .nargs = 6, .rva = 245254, 
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
			303292 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetLogicalProcessorInformation", .nargs = 2, .rva = 204804, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Buffer", .type = STRUCT | POINTER, .size = 192, .struct_type = SYSTEM_LOGICAL_PROCESSOR_INFORMATION, .arg_dir = INOUT},
			{.name = "ReturnedLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetLogicalProcessorInformation"
	},
	{
		.name = "SetTapeParameters", .nargs = 3, .rva = 617456, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOperation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTapeInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617513 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ProcessIdToSessionId", .nargs = 2, .rva = 309060, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwProcessId", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSessionId", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ProcessIdToSessionId"
	},
	{
		.name = "GetFileInformationByHandle", .nargs = 2, .rva = 332392, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileInformation", .type = STRUCT | POINTER, .size = 416, .struct_type = BY_HANDLE_FILE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetFileInformationByHandle"
	},
	{
		.name = "GetVolumeInformationByHandleW", .nargs = 8, .rva = 586959, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetVolumeInformationByHandleW"
	},
	{
		.name = "SetHandleCount", .nargs = 1, .rva = 366865, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uNumber", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			366874 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleTextAttribute", .nargs = 2, .rva = 396554, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "wAttributes", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			396648 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CompareFileTime", .nargs = 2, .rva = 332787, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileTime1", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
			{.name = "lpFileTime2", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CompareFileTime"
	},
	{
		.name = "OpenPrivateNamespaceA", .nargs = 2, .rva = 587865, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBoundaryDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpAliasPrefix", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			587936 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateProcessA", .nargs = 10, .rva = 8322, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpApplicationName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommandLine", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpProcessAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpThreadAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "bInheritHandles", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCreationFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnvironment", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCurrentDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOA, .arg_dir = IN},
			{.name = "lpProcessInformation", .type = STRUCT | POINTER, .size = 128, .struct_type = PROCESS_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			8367 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FindNextVolumeW", .nargs = 3, .rva = 207391, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFindVolume", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			207542 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyFileA", .nargs = 3, .rva = 414508, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bFailIfExists", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			414604 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyFileW", .nargs = 3, .rva = 223171, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bFailIfExists", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			223202 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleDisplayMode", .nargs = 3, .rva = 706505, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewScreenBufferDimensions", .type = STRUCT | POINTER, .size = 32, .struct_type = COORD, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			706616 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32InitializeProcessForWsWatch", .nargs = 1, .rva = 719673, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719726 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetDevicePowerState", .nargs = 2, .rva = 390689, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pfOn", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			390738 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "InitializeContext", .nargs = 4, .rva = 622983, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Buffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ContextFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Context", .type = STRUCT | POINTER_POINTER, .size = 5728, .struct_type = CONTEXT, .arg_dir = IN},
			{.name = "ContextLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			623137 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "UnregisterWaitEx", .nargs = 2, .rva = 219650, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "WaitHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "CompletionEvent", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "UnregisterWaitEx"
	},
	{
		.name = "CopyLZFile", .nargs = 2, .rva = 546012, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hfSource", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hfDest", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			546004 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PrepareTape", .nargs = 3, .rva = 617146, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwOperation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bImmediate", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			617189 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileA", .nargs = 2, .rva = 566617, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			566640 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileW", .nargs = 2, .rva = 414858, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			414881 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetProcessImageFileNameA", .nargs = 3, .rva = 719996, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpImageFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			720141 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetProcessImageFileNameW", .nargs = 3, .rva = 719859, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpImageFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719988 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSemaphoreA", .nargs = 4, .rva = 229396, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSemaphoreAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lInitialCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lMaximumCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			229426 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumSystemGeoID", .nargs = 3, .rva = 649090, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GeoClass", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ParentGeoId", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGeoEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			649193 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateSemaphoreW", .nargs = 4, .rva = 252811, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpSemaphoreAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lInitialCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lMaximumCount", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			252841 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFullPathNameTransactedA", .nargs = 5, .rva = 546028, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = ANSI_CHAR | POINTER_POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			546159 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFullPathNameTransactedW", .nargs = 5, .rva = 546201, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpFilePart", .type = WIDE_CHAR | POINTER_POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			546332 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualAlloc", .nargs = 4, .rva = 339894, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flAllocationType", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "flProtect", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualAlloc"
	},
	{
		.name = "SetSystemTimeAdjustment", .nargs = 2, .rva = 219698, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwTimeAdjustment", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bTimeAdjustmentDisabled", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			219747 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateMemoryResourceNotification", .nargs = 1, .rva = 271656, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "NotificationType", .type = ENUMERATION, .size = 32, .struct_type = MEMORY_RESOURCE_NOTIFICATION_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			271751 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "K32GetWsChangesEx", .nargs = 3, .rva = 719826, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpWatchInfoEx", .type = STRUCT | POINTER, .size = 128, .struct_type = PSAPI_WS_WATCH_INFORMATION_EX, .arg_dir = INOUT},
			{.name = "cb", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			719851 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumResourceTypesW", .nargs = 3, .rva = 404279, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpEnumFunc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			404303 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LZOpenFileA", .nargs = 3, .rva = 594561, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReOpenBuf", .type = STRUCT | POINTER, .size = 1088, .struct_type = OFSTRUCT, .arg_dir = INOUT},
			{.name = "wStyle", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			594758 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CallNamedPipeW", .nargs = 7, .rva = 579440, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpNamedPipeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpInBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nInBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOutBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nOutBufferSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBytesRead", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nTimeOut", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			579702 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CheckRemoteDebuggerPresent", .nargs = 2, .rva = 409473, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbDebuggerPresent", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			409534 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleOriginalTitleA", .nargs = 2, .rva = 704372, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleTitle", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			704393 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetConsoleOriginalTitleW", .nargs = 2, .rva = 704401, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpConsoleTitle", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			704425 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "FlushViewOfFile", .nargs = 2, .rva = 230354, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpBaseAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNumberOfBytesToFlush", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "FlushViewOfFile"
	},
	{
		.name = "RegLoadMUIStringW", .nargs = 7, .rva = 252337, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pszValue", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pszOutBuf", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cbOutBuf", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pszDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			252678 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "IsProcessorFeaturePresent", .nargs = 1, .rva = 358069, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "ProcessorFeature", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			358090 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CancelDeviceWakeupRequest", .nargs = 1, .rva = 583145, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDevice", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			583157 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumePathNamesForVolumeNameA", .nargs = 4, .rva = 613317, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumePathNames", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcchReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			613588 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetVolumePathNamesForVolumeNameW", .nargs = 4, .rva = 243748, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszVolumeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszVolumePathNames", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpcchReturnLength", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			244395 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNumaProcessorNode", .nargs = 2, .rva = 581461, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Processor", .type = UNSIGNED_BYTE, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "NodeNumber", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			581530 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "DefineDosDeviceW", .nargs = 3, .rva = 406943, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDeviceName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTargetPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "DefineDosDeviceW"
	},
	{
		.name = "DnsHostnameToComputerNameW", .nargs = 3, .rva = 219755, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Hostname", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "ComputerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			219906 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "AddSIDToBoundaryDescriptor", .nargs = 2, .rva = 222105, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "BoundaryDescriptor", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "RequiredSid", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			222134 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateWaitableTimerExA", .nargs = 4, .rva = 212389, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimerAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpTimerName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			212444 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateWaitableTimerExW", .nargs = 4, .rva = 203489, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimerAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "lpTimerName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwDesiredAccess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "CreateWaitableTimerExW"
	},
	{
		.name = "DeviceIoControl", .nargs = 8, .rva = 304681, 
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
			304755 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "Wow64RevertWow64FsRedirection", .nargs = 1, .rva = 587257, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "OlValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "Wow64RevertWow64FsRedirection"
	},
	{
		.name = "LoadLibraryExW", .nargs = 3, .rva = 280437, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLibFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LoadLibraryExW"
	},
	{
		.name = "WaitForSingleObject", .nargs = 2, .rva = 309904, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			309923 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadUILanguage", .nargs = 0, .rva = 241218, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetThreadUILanguage"
	},
	{
		.name = "GetEnvironmentVariableW", .nargs = 3, .rva = 353732, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetEnvironmentVariableW"
	},
	{
		.name = "AreFileApisANSI", .nargs = 0, .rva = 586513, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "AreFileApisANSI"
	},
	{
		.name = "UnlockFileEx", .nargs = 5, .rva = 420167, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwReserved", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockLow", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nNumberOfBytesToUnlockHigh", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "UnlockFileEx"
	},
	{
		.name = "GetEnvironmentStrings", .nargs = 0, .rva = 339865, 
		.return_type = ANSI_CHAR | POINTER, .return_size = 1, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetEnvironmentStrings"
	},
	{
		.name = "GetFileType", .nargs = 1, .rva = 357797, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			357864 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetFileAttributesTransactedA", .nargs = 4, .rva = 563538, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "fInfoLevelId", .type = ENUMERATION, .size = 32, .struct_type = GET_FILEEX_INFO_LEVELS, .arg_dir = IN},
			{.name = "lpFileInformation", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			563595 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTimeFormatA", .nargs = 6, .rva = 415601, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFormat", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimeStr", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchTime", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			415861 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTimeFormatW", .nargs = 6, .rva = 306217, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTime", .type = STRUCT | POINTER, .size = 128, .struct_type = SYSTEMTIME, .arg_dir = IN},
			{.name = "lpFormat", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpTimeStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchTime", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			306342 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WideCharToMultiByte", .nargs = 8, .rva = 345358, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "WideCharToMultiByte"
	},
	{
		.name = "GetMailslotInfo", .nargs = 5, .rva = 573836, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hMailslot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpMaxMessageSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpNextSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpMessageCount", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpReadTimeout", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			573984 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegQueryValueExA", .nargs = 6, .rva = 341427, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpData", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			341737, 500642, 500780 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SleepEx", .nargs = 2, .rva = 262806, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bAlertable", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SleepEx"
	},
	{
		.name = "EnumTimeFormatsW", .nargs = 3, .rva = 418152, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTimeFmtEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "EnumTimeFormatsW"
	},
	{
		.name = "BuildCommDCBA", .nargs = 2, .rva = 616638, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDef", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDCB", .type = STRUCT | POINTER, .size = 224, .struct_type = DCB, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			616681 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "BuildCommDCBW", .nargs = 2, .rva = 616779, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpDef", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDCB", .type = STRUCT | POINTER, .size = 224, .struct_type = DCB, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			616858 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TlsFree", .nargs = 1, .rva = 332728, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwTlsIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TlsFree"
	},
	{
		.name = "CreateFiberEx", .nargs = 5, .rva = 217199, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "dwStackCommitSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwStackReserveSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpStartAddress", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217452 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegEnumValueA", .nargs = 8, .rva = 230404, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchValueName", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpData", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			231112, 497311, 497468, 497629, 497822 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegEnumValueW", .nargs = 8, .rva = 283187, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpValueName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchValueName", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpType", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpData", .type = UNSIGNED_BYTE | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbData", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			283533, 498119, 498322 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegUnLoadKeyA", .nargs = 2, .rva = 692377, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			692564, 692617 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegUnLoadKeyW", .nargs = 2, .rva = 692657, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSubKey", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			692834, 692877 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileTransactedA", .nargs = 6, .rva = 566294, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			566418 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "MoveFileTransactedW", .nargs = 6, .rva = 566457, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			566581 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "lstrcmpW", .nargs = 2, .rva = 354224, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpString1", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpString2", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "lstrcmpW"
	},
	{
		.name = "LocalAlloc", .nargs = 2, .rva = 340835, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "uFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uBytes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LocalAlloc"
	},
	{
		.name = "GlobalGetAtomNameA", .nargs = 3, .rva = 552476, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nAtom", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			552500 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GlobalGetAtomNameW", .nargs = 3, .rva = 257810, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nAtom", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			257834 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetConsoleScreenBufferSize", .nargs = 2, .rva = 712472, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwSize", .type = STRUCT, .size = 32, .struct_type = COORD, .arg_dir = IN},
		}, .rets_rva = 
		{
			712569 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetTempPathW", .nargs = 2, .rva = 232243, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			232262 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LockFileEx", .nargs = 6, .rva = 420143, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LockFileEx"
	},
	{
		.name = "OutputDebugStringA", .nargs = 1, .rva = 256822, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpOutputString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "OutputDebugStringA"
	},
	{
		.name = "GetHandleInformation", .nargs = 2, .rva = 228132, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hObject", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpdwFlags", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			228194 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetMaximumProcessorGroupCount", .nargs = 0, .rva = 205598, 
		.return_type = UNSIGNED_WORD, .return_size = 2, .args = 
		{
		}, .rets_rva = 
		{
			205660, 456430 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetShortPathNameA", .nargs = 3, .rva = 427319, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszLongPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszShortPath", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			427599 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetShortPathNameW", .nargs = 3, .rva = 265148, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpszLongPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpszShortPath", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchBuffer", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			265066 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegGetKeySecurity", .nargs = 4, .rva = 227565, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "SecurityInformation", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pSecurityDescriptor", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcbSecurityDescriptor", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			227899, 498576 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadDirectoryChangesW", .nargs = 8, .rva = 273506, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hDirectory", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nBufferLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bWatchSubtree", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwNotifyFilter", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBytesReturned", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpOverlapped", .type = STRUCT | POINTER, .size = 160, .struct_type = OVERLAPPED, .arg_dir = INOUT},
			{.name = "lpCompletionRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			273625 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ReadThreadProfilingData", .nargs = 3, .rva = 623903, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "PerformanceDataHandle", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "PerformanceData", .type = STRUCT | POINTER, .size = 2304, .struct_type = PERFORMANCE_DATA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			623938 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessIoCounters", .nargs = 2, .rva = 584140, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpIoCounters", .type = STRUCT | POINTER, .size = 384, .struct_type = IO_COUNTERS, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			584181 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCurrentProcessId", .nargs = 0, .rva = 314052, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetCurrentProcessId"
	},
	{
		.name = "InitializeCriticalSectionAndSpinCount", .nargs = 2, .rva = 342329, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpCriticalSection", .type = STRUCT | POINTER, .size = 192, .struct_type = RTL_CRITICAL_SECTION, .arg_dir = INOUT},
			{.name = "dwSpinCount", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "InitializeCriticalSectionAndSpinCount"
	},
	{
		.name = "WriteConsoleInputW", .nargs = 4, .rva = 708300, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleInput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 160, .struct_type = INPUT_RECORD, .arg_dir = IN},
			{.name = "nLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNumberOfEventsWritten", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			708327 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetProcessHeap", .nargs = 0, .rva = 332416, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcessHeap"
	},
	{
		.name = "PeekNamedPipe", .nargs = 6, .rva = 587595, 
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
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "PeekNamedPipe"
	},
	{
		.name = "GetTimeZoneInformationForYear", .nargs = 3, .rva = 423171, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "wYear", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pdtzi", .type = STRUCT | POINTER, .size = 3456, .struct_type = TIME_DYNAMIC_ZONE_INFORMATION, .arg_dir = IN},
			{.name = "ptzi", .type = STRUCT | POINTER, .size = 1376, .struct_type = TIME_ZONE_INFORMATION, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetTimeZoneInformationForYear"
	},
	{
		.name = "Process32NextW", .nargs = 2, .rva = 260810, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hSnapshot", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lppe", .type = STRUCT | POINTER, .size = 4448, .struct_type = TAGPROCESSENTRY32W, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			260953 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetThreadGroupAffinity", .nargs = 2, .rva = 590374, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hThread", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "GroupAffinity", .type = STRUCT | POINTER, .size = 96, .struct_type = GROUP_AFFINITY, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			590415 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStartupInfoA", .nargs = 1, .rva = 7696, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			8123 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetStartupInfoW", .nargs = 1, .rva = 342161, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "lpStartupInfo", .type = STRUCT | POINTER, .size = 544, .struct_type = STARTUPINFOW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetStartupInfoW"
	},
	{
		.name = "GetProcAddress", .nargs = 2, .rva = 340947, 
		.return_type = TYPEDEF, .return_size = 0, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProcName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "GetProcAddress"
	},
	{
		.name = "GetCommProperties", .nargs = 2, .rva = 596063, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpCommProp", .type = STRUCT | POINTER, .size = 512, .struct_type = COMMPROP, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			596228 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetCommState", .nargs = 2, .rva = 596236, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDCB", .type = STRUCT | POINTER, .size = 224, .struct_type = DCB, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			596939 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "VirtualQuery", .nargs = 3, .rva = 358102, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAddress", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpBuffer", .type = STRUCT | POINTER, .size = 224, .struct_type = MEMORY_BASIC_INFORMATION, .arg_dir = INOUT},
			{.name = "dwLength", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "VirtualQuery"
	},
	{
		.name = "SizeofResource", .nargs = 2, .rva = 278143, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hModule", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hResInfo", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "SizeofResource"
	},
	{
		.name = "Sleep", .nargs = 1, .rva = 309830, 
		.return_type = VOID, .return_size = 0, .args = 
		{
			{.name = "dwMilliseconds", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "Sleep"
	},
	{
		.name = "SetSystemFileCacheSize", .nargs = 3, .rva = 621505, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "MinimumFileCacheSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "MaximumFileCacheSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			621612 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyFileExA", .nargs = 6, .rva = 571681, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbCancel", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCopyFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			571706 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CopyFileExW", .nargs = 6, .rva = 240748, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpExistingFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpProgressRoutine", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpData", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pbCancel", .type = SIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwCopyFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			240845 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "TerminateProcess", .nargs = 2, .rva = 271153, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "uExitCode", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "TerminateProcess"
	},
	{
		.name = "CreateDirectoryExA", .nargs = 3, .rva = 552257, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTemplateDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
		}, .rets_rva = 
		{
			552354 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "EnumLanguageGroupLocalesA", .nargs = 4, .rva = 646781, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLangGroupLocaleEnumProc", .type = TYPEDEF, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "LanguageGroup", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lParam", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			646806 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegEnumKeyExA", .nargs = 8, .rva = 253660, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchName", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpClass", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchClass", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpftLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			254200, 496872 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "RegEnumKeyExW", .nargs = 8, .rva = 284506, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hKey", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwIndex", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchName", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReserved", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpClass", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpcchClass", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpftLastWriteTime", .type = STRUCT | POINTER, .size = 64, .struct_type = FILETIME, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			284783, 497063 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateActCtxA", .nargs = 1, .rva = 209189, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pActCtx", .type = STRUCT | POINTER, .size = 256, .struct_type = TAGACTCTXA, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			209689 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateActCtxW", .nargs = 1, .rva = 285967, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pActCtx", .type = STRUCT | POINTER, .size = 256, .struct_type = TAGACTCTXW, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			287309 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "PowerClearRequest", .nargs = 2, .rva = 245294, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "PowerRequest", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "RequestType", .type = ENUMERATION, .size = 32, .struct_type = POWER_REQUEST_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			245348 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileStringA", .nargs = 6, .rva = 252119, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDefault", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			252223 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetPrivateProfileStringW", .nargs = 6, .rva = 228658, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpAppName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpKeyName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpDefault", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpReturnedString", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			228767 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetMaximumProcessorCount", .nargs = 1, .rva = 583662, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "GroupNumber", .type = UNSIGNED_WORD, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			583800 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "_llseek", .nargs = 3, .rva = 259366, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hFile", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lOffset", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "iOrigin", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			259396 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFirmwareEnvironmentVariableA", .nargs = 4, .rva = 572397, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGuid", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572536 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFirmwareEnvironmentVariableW", .nargs = 4, .rva = 572109, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpGuid", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "pValue", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "nSize", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			572242 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "WerRegisterFile", .nargs = 3, .rva = 620844, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "pwzFile", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "regFileType", .type = ENUMERATION, .size = 32, .struct_type = WER_REGISTER_FILE_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			730087 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateBoundaryDescriptorA", .nargs = 2, .rva = 587659, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Name", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			587732 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateBoundaryDescriptorW", .nargs = 2, .rva = 222055, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Name", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Flags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			222097 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "HeapSummary", .nargs = 3, .rva = 586991, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hHeap", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSummary", .type = STRUCT | POINTER, .size = 160, .struct_type = HEAP_SUMMARY, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "HeapSummary"
	},
	{
		.name = "RegDisablePredefinedCacheEx", .nargs = 0, .rva = 211618, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
		}, .rets_rva = 
		{
			211638 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileAttributesTransactedA", .nargs = 3, .rva = 563476, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			563530 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetFileAttributesTransactedW", .nargs = 3, .rva = 560841, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpFileName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFileAttributes", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			560966 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "GetNLSVersion", .nargs = 3, .rva = 215553, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Function", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpVersionInformation", .type = STRUCT | POINTER, .size = 256, .struct_type = NLSVERSIONINFO, .arg_dir = IN},
		}, .rets_rva = 
		{
			215592 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "SetCurrentConsoleFontEx", .nargs = 3, .rva = 714130, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hConsoleOutput", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "bMaximumWindow", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpConsoleCurrentFontEx", .type = STRUCT | POINTER, .size = 672, .struct_type = CONSOLE_FONT_INFOEX, .arg_dir = IN},
		}, .rets_rva = 
		{
			714278 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertThreadToFiber", .nargs = 1, .rva = 217777, 
		.return_type = VOID | POINTER, .return_size = 0, .args = 
		{
			{.name = "lpParameter", .type = VOID | POINTER, .size = 0, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			217793 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateDirectoryTransactedA", .nargs = 4, .rva = 552362, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTemplateDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewDirectory", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			552387 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "CreateDirectoryTransactedW", .nargs = 4, .rva = 552076, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpTemplateDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpNewDirectory", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpSecurityAttributes", .type = STRUCT | POINTER, .size = 96, .struct_type = SECURITY_ATTRIBUTES, .arg_dir = IN},
			{.name = "hTransaction", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			552216 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "ConvertDefaultLocale", .nargs = 1, .rva = 278012, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "Locale", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "ConvertDefaultLocale"
	},
	{
		.name = "IdnToUnicode", .nargs = 5, .rva = 653063, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpASCIICharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "cchASCIIChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpUnicodeCharStr", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "cchUnicodeChar", .type = SIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
			653138 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "QueryFullProcessImageNameA", .nargs = 4, .rva = 587944, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExeName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			588109 
		}, .jump_in = UNDEFINED
	},
	{
		.name = "LoadLibraryExA", .nargs = 3, .rva = 280570, 
		.return_type = UNSIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "lpLibFileName", .type = ANSI_CHAR | POINTER, .size = 1, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "hFile", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
		}, .rets_rva = 
		{
		}, .jump_in = KERNELBASE, .jump_in_api_name =  "LoadLibraryExA"
	},
	{
		.name = "QueryFullProcessImageNameW", .nargs = 4, .rva = 285736, 
		.return_type = SIGNED_DOUBLE_WORD, .return_size = 4, .args = 
		{
			{.name = "hProcess", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "dwFlags", .type = UNSIGNED_DOUBLE_WORD, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = IN},
			{.name = "lpExeName", .type = WIDE_CHAR | POINTER, .size = 2, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
			{.name = "lpdwSize", .type = UNSIGNED_DOUBLE_WORD | POINTER, .size = 4, .struct_type = FUNDAMENTAL_TYPE, .arg_dir = INOUT},
		}, .rets_rva = 
		{
			285959 
		}, .jump_in = UNDEFINED
	},
};

int kernel32_apicalls_size = (sizeof(kernel32_apicalls) / sizeof(kernel32_apicalls[0]));