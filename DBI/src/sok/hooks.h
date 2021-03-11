// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#pragma once
#include "pin.H"
#include "../config.h"

#include "logging.h"

namespace W {
	#include "windows.h"
}

#define SYSCALL_NUM_ARG	11		// at least for those that we might care about (maybe fewer?)

extern TLS_KEY tls_key;

//syscall structure
typedef struct _syscall_t {
	ADDRINT syscall_number;
	union {
		ADDRINT args[16];
		struct {
			ADDRINT arg0, arg1, arg2, arg3;
			ADDRINT arg4, arg5, arg6, arg7;
			ADDRINT arg8, arg9, arg10, arg11;
		};
	};
} syscall_t;

typedef struct _MEMORY_BASIC_INFORMATION {
	W::PVOID  BaseAddress;
	W::PVOID  AllocationBase;
	W::ULONG  AllocationProtect;
	W::SIZE_T RegionSize;
	W::ULONG  State;
	W::ULONG  Protect;
	W::ULONG  Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;

typedef enum _MEMORY_INFORMATION_CLASS {
	MemoryBasicInformation
} MEMORY_INFORMATION_CLASS;

//maintained via TLS
typedef struct {
	syscall_t sc;
} pintool_tls;

//function signature of our hook function
typedef void(*syscall_hook)(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);

//binding between syscall ordinal and hook to be executed
//TODO perhaps we should be moving those
static syscall_hook sysEntryHooks[MAXSYSCALLS]; // entries NULL by default
static syscall_hook sysExitHooks[MAXSYSCALLS];

//binding between the ordinal of the syscall and the name of the syscall
//this component is useful also for other tools and we moved it to main.cpp
extern CHAR* syscallIDs[MAXSYSCALLS];

VOID HOOKS_Init();
VOID HOOKS_AddSyscalls();
VOID HOOKS_SyscallEntry(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_SyscallExit(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_SyscallGetArguments(CONTEXT *ctx, SYSCALL_STANDARD std, int count, ...);
VOID HOOKS_SetTLSKey(THREADID tid);

VOID HOOKS_NtUnmapViewOfSection_entry(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);

VOID HOOKS_NtProtectVirtualMemory_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtUnmapViewOfSection_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtFreeVirtualMemory_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtFreeUserPhysicalPages_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtQueryVirtualMemory_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtAllocateVirtualMemory_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtAllocateUserPhysicalPages_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtMapViewOfSection_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_NtGetMUIRegistryInfo_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);

VOID HOOKS_GenericScan_exit(syscall_t *sc, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID HOOKS_GenericHookDereference_exit(syscall_t *sc, CONTEXT *ctx, UINT32 argNum);

//helper methods
static INT lookupIndex(CONST CHAR* syscallName);