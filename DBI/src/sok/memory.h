// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#pragma once
#include "pin.H"

#include "logging.h"

namespace W {
	#define WIN32_LEAN_AND_MEAN
	#include "windows.h"
	#include "Winternl.h"
	#include "Intsafe.h"
}

#define OS_PAGE_SIZE			4096
#define OS_PAGE_OFFSET_BITS		12
#define OS_NUM_PAGES			(1 << (32 - OS_PAGE_OFFSET_BITS))
#define OS_CLEAR_MASK			0xFFFFF000

#define OS_ALLOCATION_SIZE		65536

#define OS_KUSER_SHARED_DATA_ADDRESS 0x7ffe0000
#define OS_KUSER_SHARED_DATA_SIZE 0x3e0 

#define MEMORY_VERBOSE		1
#define MEMORY_NX_PARANOID_OLD	0

typedef struct PEB32 {
	W::BYTE padding1[2];
	W::BYTE BeingDebugged;
	W::BYTE padding2[53];
	W::PVOID ApiSetMap;
	W::BYTE padding3[16];
	W::PVOID ReadOnlySharedMemoryBase;
	W::BYTE padding4[8];
	W::PVOID AnsiCodePageData;
	W::BYTE padding5[52];
	W::PVOID ProcessHeaps;
	W::PVOID GdiSharedHandleTable;
	W::BYTE padding6[336];
	W::PVOID pShimData;
	W::BYTE padding7[12];
	W::PVOID ActivationContextData;
	W::BYTE padding8[4];
	W::PVOID SystemDefaultActivationContextData;
	W::BYTE padding9[52];
	W::PVOID pContextData;
	W::BYTE padding10[4];
	W::BYTE padding11[4]; // DCD added to account for TracingFlags on Win7
} PEB;

typedef unsigned char MEM_MASK;

typedef struct sez{
	ADDRINT start;
	ADDRINT end;
} struct_section;

// instrumentation initialization and callbacks
void MEMORY_Init();
void MEMORY_InstrumentINS(INS ins);
void MEMORY_LoadImage(IMG img);
void MEMORY_UnloadImage(IMG img);
void MEMORY_OnThreadStart(CONTEXT *ctxt);

// helper methods used also in hooks.cpp
void MEMORY_RegisterArea(ADDRINT start, ADDRINT size, MEM_MASK mask);
void MEMORY_CheckPermissionsForArea(ADDRINT start, ADDRINT size, MEM_MASK mask);
void MEMORY_UnregisterArea(ADDRINT start, size_t size);
void MEMORY_QueryWindows(ADDRINT address, ADDRINT *base, ADDRINT *size, MEM_MASK *mask);
MEM_MASK MEMORY_WinToPinCast(UINT32 permissions);
bool MEMORY_AddMappedMemoryStar(ADDRINT start, ADDRINT end, bool print);

// internal functions (TODO add prototypes for others? we will see...)
VOID MEMORY_AddPebAddress();
VOID MEMORY_AddProcessHeaps();
VOID MEMORY_AddKUserShareData();
bool MEMORY_AddMappedMemory(ADDRINT start, ADDRINT end, bool print, ADDRINT eip);
int MEMORY_AuxRegisterArea(ADDRINT start, ADDRINT size, MEM_MASK mask);
bool MEMORY_CheckPermissionsForAreaStar(ADDRINT start, ADDRINT size, MEM_MASK mask);
