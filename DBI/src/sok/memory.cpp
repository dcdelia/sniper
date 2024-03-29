// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#include "pin.H"
#include <iostream>

#include "../config.h"
#include "memory.h"


// helper methods
inline MEM_MASK getRWX(SEC section);
#define MEM_READABLE			0x1
#define MEM_WRITEABLE			0x2
#define MEM_EXECUTABLE			0x4
#define MEM_ACCESSIBLE			0x8
#define MEM_IS_READABLE(x)		((x) & (MEM_READABLE | MEM_ACCESSIBLE))
#define MEM_IS_WRITEABLE(x)		((x) & (MEM_WRITEABLE | MEM_ACCESSIBLE))
#define MEM_IS_EXECUTABLE(x)	((x) & (MEM_EXECUTABLE| MEM_ACCESSIBLE))

#define MEM_GET_PAGE(addr)		((addr) >> OS_PAGE_OFFSET_BITS)

#define MAXADDR 0xffffffff

// global storage
MEM_MASK pages[OS_NUM_PAGES]; // 4GB address space
std::vector<struct_section> dllTextRanges;

// Code in the following DLLs access sections allocated
// within the DLLs that our hooks fail to capture (for
// instance for MUILanguages). We whitelist for now.
//
// TODO use a shadow stack to distinguish caller, in case an
// attacker starts playing with us we shall whitelist only
// calls originating in Windows modules (modulo ROP...).
char* whitelistedDLLs[] = { "gdi32.dll",
							"msctf.dll",
							"comctl32.dll",
							"windowscodecs.dll",
							"kernelbase.dll",
							"msvcrt.dll" };


REG spilled[2]; // operands that potentially need rewriting

void MEMORY_Init() {
	if (_rwKnob) {
		spilled[0] = PIN_ClaimToolRegister();
		spilled[1] = PIN_ClaimToolRegister();
		if (spilled[0] == REG_INVALID() || spilled[1] == REG_INVALID()) {
			SOK_LOG_AR("Could not spill registers for MEMORY protection");
			PIN_ExitProcess(1);
		}
	}

	// determine page size (TODO: check also dwAllocationSize for our hooks?)
	// btw, some folks recommend GetNativeSystemInfo under WoW64
	W::SYSTEM_INFO sysInfo;
	W::GetSystemInfo(&sysInfo);
	UINT32 pageSize = sysInfo.dwPageSize;
	if (pageSize != OS_PAGE_SIZE) {
		SOK_LOG_AR("Please recompile your tool with %08x as page size!", pageSize);
		PIN_ExitProcess(1);
	}

	// add specific memory areas that Pin does not process otherwise
	MEMORY_AddPebAddress();
	MEMORY_AddKUserShareData();
	MEMORY_AddProcessHeaps();

	// for debugging purposes: would add every valid region
	//MEMORY_AddMappedMemory(NULL, MAXADDR, true, NULL);

}

/**********************************************************

This function is responsible for update our memory map if
any changes were performed around the given addresses.

***********************************************************/

int MEMORY_AuxRegisterArea(ADDRINT start, ADDRINT size, MEM_MASK mask) {
	UINT32 pageIdxStart = MEM_GET_PAGE(start);
	UINT32 pageIdxEnd = MEM_GET_PAGE(start + size - 1);
	if (size == 0) pageIdxEnd = pageIdxStart;
	int ret = 0;
	MEM_MASK lastMask = -1;
	do {
		MEM_MASK m = pages[pageIdxStart];
		if (m) {
			if (m != mask) {
				if (lastMask != m) {
					//cout << "COFFEE " << hex << start << " " << hex << pageIdxStart << " " << hex << (ADDRINT)m << " " << hex << (ADDRINT)mask << endl;
					lastMask = m;
				}
				ret |= 0x1;
			}
			ret |= 0x2; // 0x1 for wrong, 0x2 for found
		}
		pages[pageIdxStart] = mask;
	} while (pageIdxStart++ != pageIdxEnd);
	return ret;
}

/**********************************************************

This function registers new regions inside our map.

***********************************************************/

void MEMORY_RegisterArea(ADDRINT start, ADDRINT size, MEM_MASK mask) {
	UINT32 pageIdxStart = MEM_GET_PAGE(start);
	UINT32 pageIdxEnd = MEM_GET_PAGE(start + size - 1);
	if (size == 0) pageIdxEnd = pageIdxStart;
	/*cout << "LOG: setting permissions for pages " << hex << pageIdxStart
		<< " to " << hex << pageIdxEnd << endl;*/
	do {
		pages[pageIdxStart] = mask;
	} while (pageIdxStart++ != pageIdxEnd);
}

/**********************************************************

This function updates permissions of a region if the current
ones for Windows changed wrt those in our map.

***********************************************************/

void MEMORY_CheckPermissionsForArea(ADDRINT start, ADDRINT size, MEM_MASK mask) {
	UINT32 pageIdxStart = MEM_GET_PAGE(start);
	UINT32 pageIdxEnd = MEM_GET_PAGE(start + size - 1);
	if (size == 0) pageIdxEnd = pageIdxStart;
	// permissions are consistent within a region
	do {
		pages[pageIdxStart] = mask;
	} while (pageIdxStart++ != pageIdxEnd);
}

/**********************************************************

This function is similar to MEMORY_CheckPermissionsForArea
but additionally returns if permissions had changed.

***********************************************************/

bool MEMORY_CheckPermissionsForAreaStar(ADDRINT start, ADDRINT size, MEM_MASK mask) {
	bool changed = false;
	UINT32 pageIdxStart = MEM_GET_PAGE(start);
	UINT32 pageIdxEnd = MEM_GET_PAGE(start + size - 1);
	MEM_MASK lastMask = -1;
	if (size == 0) pageIdxEnd = pageIdxStart;
	do {
		MEM_MASK curMask = pages[pageIdxStart];
		if (curMask != mask) {
			changed = true;
			if (lastMask != curMask) {
				SOK_LOG_AR("OLD MASK : %08x\n NEW: %08x\n PAGE: %08x", (UINT32)curMask, (UINT32)mask, pageIdxStart);
				lastMask = curMask;
			}
		}
		pages[pageIdxStart] = mask;
	} while (pageIdxStart++ != pageIdxEnd);

	return changed;
}

/**********************************************************

This function unregisters regions from our map. To be called
in hooks as regions are released.

***********************************************************/

void MEMORY_UnregisterArea(ADDRINT start, size_t size) {
	
	UINT32 pageIdxStart = MEM_GET_PAGE(start);
	UINT32 pageIdxEnd = MEM_GET_PAGE(start+size-1);
	if (size == 0) pageIdxEnd = pageIdxStart;
	do {
		if (!pages[pageIdxStart]) {
			SOK_LOG_AR("WARNING: permissions were not set for page %08x %08x %08x", pageIdxStart, start, size);
		}
		pages[pageIdxStart] = 0;
	} while (pageIdxStart++ != pageIdxEnd);
}

/**********************************************************

This function checks if a given address is not in a Free
region and is either inside a DLL or a non-Private region.
When so, it triggers a function that registers the
enclosing region in the memory map.

***********************************************************/

bool MEMORY_CheckWhitelist(ADDRINT address, ADDRINT eip) {

	bool changed = FALSE;
	bool insideDll = FALSE;

	W::MEMORY_BASIC_INFORMATION mem;
	W::VirtualQuery((W::LPCVOID)address, &mem, sizeof(mem));

	ADDRINT startAddr = (ADDRINT)mem.BaseAddress;
	ADDRINT size = mem.RegionSize;
	MEM_MASK mask = MEMORY_WinToPinCast(mem.Protect);

	for (std::vector<struct_section>::iterator it = dllTextRanges.begin(); it != dllTextRanges.end(); ++it) {
		if (it->start <= eip && eip < it->end) {
			insideDll = TRUE;
			break;
		}
	}

	if (mem.State != MEM_FREE && (mem.Type != MEM_PRIVATE || insideDll)) {
		if (mask != 0) {
			int ret = MEMORY_AuxRegisterArea(startAddr, size, mask);
			if (!ret || ret & 0x1) changed = true;

			if (!ret) {
				SOK_LOG_AR("ADDED REGION %08x %08x %08x %08x %08x", startAddr, size, (UINT32)mask, mem.Protect, mem.AllocationProtect);
			}	else if (ret & 0x1) {
				SOK_LOG_AR("FIXED REGION %08x %08x %08x %08x %08x", startAddr, size, (UINT32)mask, mem.Protect, mem.AllocationProtect);
			}	
		}
	}

	return changed;
}

/**********************************************************

This function checks if memory operand passed as argument
for a memory read is a valid address and raises an exception
accordingly to hide the presence of Pin.

***********************************************************/

ADDRINT validateReadAux(ADDRINT val, ADDRINT eip, THREADID tid, CONTEXT *ctx) {

	MEMORY_CheckWhitelist(val, eip);

	MEM_MASK mask = pages[MEM_GET_PAGE(val)];

	if (mask == 0) { // region not in the map/no permissions
		EXCEPTION_INFO exc;
		// 0xc0000005 is Windows code for memory access violation
		PIN_InitWindowsExceptionInfo(&exc, 0xc0000005, eip);
		//PIN_SetContextReg(ctx, REG_INST_PTR, PIN_GetContextReg(ctx, REG_INST_PTR) + 0x1); // add 0x1 to get the right address
		PIN_RaiseException(ctx, tid, &exc);
	}
	else if (!(mask & MEM_ACCESSIBLE)) { // region is not accessible
		// Pin doesn't handle guarded pages correctly only when
		// fetching code, but data read/write accesses are fine
		SOK_LOG_AR("(IM)POSSIBLE PAGE GUARD BUG IN PIN");
	} else if (!(mask & MEM_READABLE)) { // region is not readable
		EXCEPTION_INFO exc;
		PIN_InitWindowsExceptionInfo(&exc, 0xc0000005, val);
		//PIN_SetContextReg(ctx, REG_INST_PTR, PIN_GetContextReg(ctx, REG_INST_PTR) + 0x1); // add 0x1 to get the right address
		PIN_RaiseException(ctx, tid, &exc);
	} else {
		// nothing to do: address has been cleared
	}

	return val;
}

/**********************************************************

This function is used in the instrumentation to rewrite an
operand with the value contained in the scratch register.

***********************************************************/

ADDRINT PIN_FAST_ANALYSIS_CALL rewriteSelf(ADDRINT addr) {
	return addr;
}


/**********************************************************

This function checks if memory operand passed as argument 
is readable in order to trigger "then call" instrumentation.

***********************************************************/

ADDRINT PIN_FAST_ANALYSIS_CALL validateRead(ADDRINT addr) {
	return !MEM_IS_READABLE(pages[MEM_GET_PAGE(addr)]);
}


/**********************************************************

This function checks if memory operand passed as argument
is writable in order to trigger "then call" instrumentation.

***********************************************************/

ADDRINT PIN_FAST_ANALYSIS_CALL validateWrite(ADDRINT addr) {
	return !MEM_IS_WRITEABLE(pages[MEM_GET_PAGE(addr)]);
}


/**********************************************************

This function checks if memory operand passed as argument
for a memory write is a valid address and raises an
exception accordingly to hide the presence of Pin.

***********************************************************/

ADDRINT validateWriteAux(ADDRINT val, ADDRINT eip, THREADID tid, CONTEXT *ctx) {
	// see validateReadAux which is symmetrical
	MEMORY_CheckWhitelist(val, eip);

	MEM_MASK mask = pages[MEM_GET_PAGE(val)];

	if (mask == 0) {
		EXCEPTION_INFO exc;
		PIN_InitWindowsExceptionInfo(&exc, 0xc0000005, eip);
		PIN_RaiseException(ctx, tid, &exc);
	} else if (!(mask & MEM_ACCESSIBLE)) {
		SOK_LOG_AR("(IM)POSSIBLE PAGE GUARD BUG IN PIN");
	}
	else if (!(mask & MEM_WRITEABLE)) {
		EXCEPTION_INFO exc;
		PIN_InitWindowsExceptionInfo(&exc, 0xc0000005, eip);
		PIN_RaiseException(ctx, tid, &exc);
	}
	else {
		// nothing to do: address has been cleared
	}

	return val;
}

/**********************************************************

This function check if specific memory address is PIN reserved 
or is legal. In case that this memory location is used by Pin, 
this call raise an exception.

***********************************************************/

void denyTransfer(ADDRINT eip, CONTEXT *ctx, THREADID tid, ADDRINT addr) {
	MEM_MASK mask = pages[MEM_GET_PAGE(addr)];
	if (!(mask & MEM_ACCESSIBLE)) {
		EXCEPTION_INFO exc;
		PIN_InitWindowsExceptionInfo(&exc, 0x80000001, eip);
		PIN_RaiseException(ctx, tid, &exc);
	}
	else if (!(mask & MEM_EXECUTABLE)) {
		EXCEPTION_INFO exc;
		PIN_InitWindowsExceptionInfo(&exc, 0xc0000005, eip);
		PIN_RaiseException(ctx, tid, &exc);
	}
}

ADDRINT PIN_FAST_ANALYSIS_CALL validateJumpOrCall(ADDRINT addr) {
	return !MEM_IS_EXECUTABLE(pages[MEM_GET_PAGE(addr)]);
}

void validateRetAux(ADDRINT eip, CONTEXT *ctx, THREADID tid, ADDRINT *pRetAddr) {
	denyTransfer(eip, ctx, tid, *pRetAddr);
}

ADDRINT PIN_FAST_ANALYSIS_CALL validateRet(ADDRINT *pRetAddr) {
	return !MEM_IS_EXECUTABLE(pages[MEM_GET_PAGE(*pRetAddr)]);
}

/**********************************************************

This function validates an instruction fetch depending on
the permissions from the map. It raises exceptions for
guarded pages and non-executable regions.

***********************************************************/

void denyFetch(ADDRINT eip, CONTEXT *ctx, THREADID tid) {
	MEM_MASK mask = pages[MEM_GET_PAGE(eip)];
	if (!(mask & MEM_ACCESSIBLE)) {
		EXCEPTION_INFO exc;
		// Windows code for guarded page violation
		PIN_InitWindowsExceptionInfo(&exc, 0x80000001, eip);
		PIN_RaiseException(ctx, tid, &exc);
	}
	else if (!(mask & MEM_EXECUTABLE)) {
		EXCEPTION_INFO exc;
		PIN_InitWindowsExceptionInfo(&exc, 0xc0000005, eip);
		PIN_RaiseException(ctx, tid, &exc);
	}
}

// helper method to check for executable permissions
ADDRINT PIN_FAST_ANALYSIS_CALL validateFetch(ADDRINT eip) {
	return !MEM_IS_EXECUTABLE(pages[MEM_GET_PAGE(eip)]);
}

// helper for conditional instrumentation of code fetches
static void MEMORY_ProtectInstructionFetch(INS ins) {
	INS_InsertIfCall(ins, IPOINT_BEFORE,
		(AFUNPTR)validateFetch,
		IARG_FAST_ANALYSIS_CALL,
		IARG_INST_PTR,
		IARG_END);
	INS_InsertThenCall(ins, IPOINT_BEFORE,
		(AFUNPTR)denyFetch,
		IARG_INST_PTR,
		IARG_CONTEXT,
		IARG_THREAD_ID,
		IARG_END);
}


/**********************************************************

This function is a helper method for inserting conditional
instrumentation on indirect transfers (ret instructions,
jmp to register/memory) and in paranoid mode also on direct
ones (think of SMC).

***********************************************************/

static void MEMORY_ProtectTransfers(INS ins, INT32 cat) {
	// enforcing RWX and Guard pages on control transfers
	if (cat == XED_CATEGORY_RET) {
		INS_InsertIfCall(ins, IPOINT_BEFORE,
			(AFUNPTR)validateRet,
			IARG_FAST_ANALYSIS_CALL,
			IARG_REG_VALUE, REG_STACK_PTR,
			IARG_END);
		INS_InsertThenCall(ins, IPOINT_BEFORE,
			(AFUNPTR)validateRetAux,
			IARG_INST_PTR,
			IARG_CONTEXT,
			IARG_THREAD_ID,
			IARG_REG_VALUE, REG_STACK_PTR,
			IARG_END);
	}
	else if (cat == XED_CATEGORY_CALL) {
		if (INS_IsDirectCall(ins)) { // credits: iCi ACSAC18
			#if MEMORY_NX_PARANOID_OLD
			INS_InsertIfCall(ins, IPOINT_BEFORE,
				(AFUNPTR)validateJumpOrCall,
				IARG_FAST_ANALYSIS_CALL,
				IARG_ADDRINT,
				INS_DirectBranchOrCallTargetAddress(ins),
				IARG_END);
			INS_InsertThenCall(ins, IPOINT_BEFORE,
				(AFUNPTR)denyTransfer,
				IARG_INST_PTR,
				IARG_CONTEXT,
				IARG_THREAD_ID,
				IARG_ADDRINT,
				INS_DirectBranchOrCallTargetAddress(ins),
				IARG_END);
			#endif
		}
		else {
			INS_InsertIfCall(ins, IPOINT_BEFORE,
				(AFUNPTR)validateJumpOrCall,
				IARG_FAST_ANALYSIS_CALL,
				IARG_BRANCH_TARGET_ADDR,
				IARG_END);
			INS_InsertThenCall(ins, IPOINT_BEFORE,
				(AFUNPTR)denyTransfer,
				IARG_INST_PTR,
				IARG_CONTEXT,
				IARG_THREAD_ID,
				IARG_BRANCH_TARGET_ADDR,
				IARG_END);
		}
	}
	// TODO: if it stays like this, merge with Call
	else if (cat == XED_CATEGORY_UNCOND_BR) { 
		if (INS_IsDirectBranch(ins)) { // credits: iCi ACSAC18
			#if MEMORY_NX_PARANOID_OLD
			INS_InsertIfCall(ins, IPOINT_BEFORE,
				(AFUNPTR)validateJumpOrCall,
				IARG_FAST_ANALYSIS_CALL,
				IARG_ADDRINT,
				INS_DirectBranchOrCallTargetAddress(ins),
				IARG_END);
			INS_InsertThenCall(ins, IPOINT_BEFORE,
				(AFUNPTR)denyTransfer,
				IARG_INST_PTR,
				IARG_CONTEXT,
				IARG_THREAD_ID,
				IARG_ADDRINT,
				INS_DirectBranchOrCallTargetAddress(ins),
				IARG_END);
			#endif
		} else {
			INS_InsertIfCall(ins, IPOINT_BEFORE,
				(AFUNPTR)validateJumpOrCall,
				IARG_FAST_ANALYSIS_CALL,
				IARG_BRANCH_TARGET_ADDR,
				IARG_END);
			INS_InsertThenCall(ins, IPOINT_BEFORE,
				(AFUNPTR)denyTransfer,
				IARG_INST_PTR,
				IARG_CONTEXT,
				IARG_THREAD_ID,
				IARG_BRANCH_TARGET_ADDR,
				IARG_END);
		}
	}
	else if (cat == XED_CATEGORY_COND_BR) {
		if (INS_IsDirectBranch(ins)) { // credits: iCi ACSAC18
			#if MEMORY_NX_PARANOID_OLD
			INS_InsertIfCall(ins, IPOINT_BEFORE,
				(AFUNPTR)validateJumpOrCall,
				IARG_FAST_ANALYSIS_CALL,
				IARG_ADDRINT,
				INS_DirectBranchOrCallTargetAddress(ins),
				IARG_END);
			INS_InsertThenCall(ins, IPOINT_BEFORE,
				(AFUNPTR)denyTransfer,
				IARG_INST_PTR,
				IARG_CONTEXT,
				IARG_THREAD_ID,
				IARG_ADDRINT,
				INS_DirectBranchOrCallTargetAddress(ins),
				IARG_END);
			#endif
		}
		else {
			INS_InsertIfCall(ins, IPOINT_BEFORE,
				(AFUNPTR)validateJumpOrCall,
				IARG_FAST_ANALYSIS_CALL,
				IARG_BRANCH_TARGET_ADDR,
				IARG_END);
			INS_InsertThenCall(ins, IPOINT_BEFORE,
				(AFUNPTR)denyTransfer,
				IARG_INST_PTR,
				IARG_CONTEXT,
				IARG_THREAD_ID,
				IARG_BRANCH_TARGET_ADDR,
				IARG_END);
		}
	}
}

/**********************************************************

This function is a callback which divides memory operands
of instructions in read and write types, and for each of
them inserts two specific hook functions in order to check
if their operands should be rewritten.

***********************************************************/

static void MEMORY_ProtectMemoryRW(INS ins, INT32 cat) {
	// with _paranoidKnob ESP is seen as a general-purpose register
	UINT32 numMemOps = INS_MemoryOperandCount(ins);

	for (UINT32 opIdx = 0; opIdx < numMemOps; opIdx++) {

		AFUNPTR migatte, nogokui;
		if (INS_MemoryOperandIsRead(ins, opIdx)) {
			migatte = AFUNPTR(validateRead);
			nogokui = AFUNPTR(validateReadAux);
			if (!_paranoidKnob) {
				if (cat == XED_CATEGORY_POP) {
					continue;
				}
			}
		}
		else if (INS_MemoryOperandIsWritten(ins, opIdx)) { // && INS_IsMov(ins)) {
			migatte = AFUNPTR(validateWrite);
			nogokui = AFUNPTR(validateWriteAux);
			if (_paranoidKnob) {
				if (INS_IsCall(ins)) continue;
			else	
				// was: !INS_IsMov(ins) && !INS_OperandIsFixedMemop(ins, opIdx) && INS_OperandIsImplicit(ins, opIdx)
				if (cat == XED_CATEGORY_CALL || cat == XED_CATEGORY_PUSH) {
					continue;
				}
			}
		}
		else {
			continue;
		}
		ASSERT(opIdx < 2, "Having more than two memory operands is unsupported!");
		REG scratchReg = spilled[opIdx];
		INS_InsertCall(ins, IPOINT_BEFORE,
			(AFUNPTR)rewriteSelf,
			IARG_FAST_ANALYSIS_CALL,
			IARG_MEMORYOP_EA, opIdx,
			IARG_RETURN_REGS, scratchReg,
			IARG_END);
		INS_InsertIfCall(ins, IPOINT_BEFORE,
			(AFUNPTR)migatte,
			IARG_FAST_ANALYSIS_CALL,
			IARG_MEMORYOP_EA, opIdx,
			IARG_END);
		INS_InsertThenCall(ins, IPOINT_BEFORE,
			(AFUNPTR)nogokui,
			IARG_MEMORYOP_EA, opIdx,
			IARG_INST_PTR,
			IARG_RETURN_REGS, scratchReg,
			IARG_THREAD_ID,
			IARG_CONTEXT,
			IARG_END);
		INS_RewriteMemoryOperand(ins, opIdx, scratchReg);

	}
}

// generic Pin callback (see main.cpp)
void MEMORY_InstrumentINS(INS ins) {

	INT32 cat = INS_Category(ins);

	if (_rwKnob) {
		MEMORY_ProtectMemoryRW(ins, cat);
	}

	// NX and PAGE GUARD protection
	if (_nxKnob) {
		if (_paranoidKnob)
			MEMORY_ProtectInstructionFetch(ins);
		else
			MEMORY_ProtectTransfers(ins, cat);
	}

}

// generic Pin callback (see main.cpp)
void MEMORY_UnloadImage(IMG img) {
#if MEMORY_VERBOSE
	ADDRINT imgStart = IMG_LowAddress(img);
	ADDRINT imgEnd = IMG_HighAddress(img);

	SOK_LOG_AR("-> Unloading image [%08x;%08x]", imgStart, imgEnd);

	if (IMG_IsMainExecutable(img)) {
		SOK_LOG_AR(" from main executable");
	}
	else {
		SOK_LOG_AR("%s", IMG_Name(img).c_str());
	}
#endif

	for (SEC section = IMG_SecHead(img);
		SEC_Valid(section);
		section = SEC_Next(section)) {
		ADDRINT secStart = SEC_Address(section);
		ADDRINT secSize = SEC_Size(section);
		MEM_MASK rwx = getRWX(section);
#if MEMORY_VERBOSE
		SOK_LOG_AR("Section %s [%08x;%08x] RWX: %08x", SEC_Name(section).c_str(), secStart, secStart + secSize, (UINT32)rwx);
#endif
		MEMORY_UnregisterArea(secStart, secSize);
	}
}

int strcicmp(char const *a, char const *b) { // credits: https://stackoverflow.com/a/5820991
	for (;; a++, b++) {
		int d = tolower((unsigned char)*a) - tolower((unsigned char)*b);
		if (d != 0 || !*a)
			return d;
	}
}

// generic Pin callback (see main.cpp)
void MEMORY_LoadImage(IMG img) {

	ADDRINT imgStart = IMG_LowAddress(img);
	ADDRINT imgEnd = IMG_HighAddress(img);

#if MEMORY_VERBOSE
	SOK_LOG_AR("-> Loading image [%08x;%08x]", imgStart, imgEnd);
	if (IMG_IsMainExecutable(img)) {
		SOK_LOG_AR(" from main executable");
	}
	else {
		SOK_LOG_AR("%s", IMG_Name(img).c_str());
	}
#endif

	//MEMORY_AddMappedMemory(imgStart, imgEnd, false);
	//MEMORY_AddMappedMemory(NULL, MAXADDR, false);
	
	UINT32 numReg = IMG_NumRegions(img);
	for (size_t i = 0; i < numReg; i++) {
		ADDRINT hAddr = IMG_RegionHighAddress(img, i);
		ADDRINT lAddr = IMG_RegionLowAddress(img, i);
		MEMORY_AddMappedMemory(lAddr, hAddr, true, NULL);
	}

	bool whiteListed = false;
	const char* imgName = IMG_Name(img).c_str();
	char tmp[MAX_PATH];
	for (size_t i = 0; imgName[i]; ++i) { // strlen :-)
		tmp[i] = tolower(imgName[i]);
	}
	std::string imgNameStr(tmp);

	for (size_t i = 0; i < sizeof(whitelistedDLLs)/sizeof(char*); ++i) {
		if (imgNameStr.find(whitelistedDLLs[i]) != std::string::npos) {
			whiteListed = true;
			break;
		}
	}

	for (SEC section = IMG_SecHead(img); SEC_Valid(section); section = SEC_Next(section)) {
		ADDRINT secStart = SEC_Address(section);
		ADDRINT secSize = SEC_Size(section);

		// DLLs have only .text as executable section (I guess?)
		if (whiteListed && SEC_Name(section).compare(".text") == 0) {
			struct_section sec;
			sec.start = secStart;
			sec.end = secStart + secSize;
			dllTextRanges.push_back(sec);
		}

		MEM_MASK rwx = getRWX(section);
#if MEMORY_VERBOSE
		SOK_LOG_AR("Section %s [%08x;%08x] RWX: %08x", SEC_Name(section).c_str(), secStart, secStart + secSize, (UINT32)rwx);
#endif
		// memory hook
		MEMORY_RegisterArea(secStart, secSize, rwx);
	}
	
}

/**********************************************************

Helper that converts Windows permissions to our mask.

***********************************************************/

MEM_MASK MEMORY_WinToPinCast(UINT32 permissions) {
	// https://docs.microsoft.com/en-us/windows/desktop/memory/memory-protection-constants

	// CFI stuff not available in VS2010
	#ifndef PAGE_TARGETS_INVALID
	#define PAGE_TARGETS_INVALID	0x40000000
	#endif
	#ifndef PAGE_TARGETS_NO_UPDATE
	#define PAGE_TARGETS_NO_UPDATE	0x40000000
	#endif

	// standard modifiers
	// PAGE_GUARD 0x100 => needs special handling
	// PAGE_NOCACHE 0x200
	// PAGE_WRITECOMBINE 0x400
	MEM_MASK mask;
	UINT32 clearMask = ~(PAGE_NOCACHE | PAGE_WRITECOMBINE |
						 PAGE_TARGETS_INVALID | PAGE_TARGETS_NO_UPDATE);

	switch (permissions & clearMask) {
	case PAGE_EXECUTE:
		mask = MEM_EXECUTABLE | MEM_READABLE; break;
	case PAGE_EXECUTE_READ:
		mask = MEM_EXECUTABLE | MEM_READABLE; break;
	case PAGE_EXECUTE_READWRITE:
	case PAGE_EXECUTE_WRITECOPY:
		mask = MEM_EXECUTABLE | MEM_READABLE | MEM_WRITEABLE; break;
	case PAGE_READONLY:
		mask = MEM_READABLE; break;
	case PAGE_READWRITE:
	case PAGE_WRITECOPY:
		mask = MEM_READABLE | MEM_WRITEABLE; break;
	default:
		mask = 0; // PAGE_NOACCESS
	}

	if (mask && !(permissions & PAGE_GUARD)) {
		mask |= MEM_ACCESSIBLE;
	}

	// TODO: PAGE_TARGETS_NO_UPDATE
	return mask;
}

void MEMORY_OnThreadStart(CONTEXT *ctxt) {
	ADDRINT base;
	MEM_MASK mask;
	
	// register stack region
	ADDRINT currentSP = PIN_GetContextReg(ctxt, REG_STACK_PTR);
	ADDRINT end = currentSP;
	W::MEMORY_BASIC_INFORMATION mbi;
	W::SIZE_T numBytes = W::VirtualQuery((W::LPCVOID)currentSP, &mbi, sizeof(mbi));
	// credits: Arancino project
	if (mbi.State == MEM_COMMIT || mbi.Type == MEM_PRIVATE) {
		end = (ADDRINT)mbi.BaseAddress + mbi.RegionSize;
	}
	#define MAX_STACK_SIZE 0x100000
	if (end <= MAX_STACK_SIZE) { // check integer underflow
		base = 0;
	} else {
		base = end - MAX_STACK_SIZE;
	}
	ADDRINT size = end - base;
	mask = MEMORY_WinToPinCast(mbi.Protect);
	MEMORY_RegisterArea(base, size, mask);
	SOK_LOG_AR("Thread stack %08x %08x", currentSP, end);

	// TEB needs special handling too
	ADDRINT tebAddr = (ADDRINT)W::NtCurrentTeb();
	MEMORY_QueryWindows(tebAddr, &base, &size, &mask);
	MEMORY_RegisterArea(base, size, mask);

}

/**********************************************************

This function uses VirtualQuery to retrieve memory info.

***********************************************************/

void MEMORY_QueryWindows(ADDRINT address, ADDRINT *base, ADDRINT *size, MEM_MASK *mask) {
	W::MEMORY_BASIC_INFORMATION memInfo;
	W::VirtualQuery((W::LPCVOID)address, &memInfo, sizeof(memInfo));

	*base = (ADDRINT)memInfo.BaseAddress;
	*size = (ADDRINT)memInfo.RegionSize;
	*mask = MEMORY_WinToPinCast(memInfo.Protect);
}

/**********************************************************

This function adds to our memory map all special buffers
allocated by the system, retriving them from PEB.

***********************************************************/

VOID MEMORY_AddPebAddress() {

#define ARRAYSIZE 8

	PEB *peb;
	__asm {
		mov eax, fs:30h
		mov peb, eax
	}

	ADDRINT addresses[ARRAYSIZE] = { 0 };
	addresses[0] = (ADDRINT)peb;
	addresses[1] = (ADDRINT)(peb->pShimData);
	addresses[2] = (ADDRINT)(peb->ApiSetMap);
	addresses[3] = (ADDRINT)(peb->AnsiCodePageData);
	addresses[4] = (ADDRINT)(peb->ReadOnlySharedMemoryBase);
	addresses[5] = (ADDRINT)(peb->pContextData);
	addresses[6] = (ADDRINT)(peb->SystemDefaultActivationContextData);
	addresses[7] = (ADDRINT)(peb->ActivationContextData);

	for (int i = 0; i < sizeof(addresses)/sizeof(ADDRINT); i++) {
		if (!addresses[i]) continue;
		ADDRINT startAddr, size;
		MEM_MASK mask;
		MEMORY_QueryWindows(addresses[i], &startAddr, &size, &mask);
		MEMORY_RegisterArea(startAddr, size, mask);
	}

}

/**********************************************************

This function registers in our map heap-allocated buffers.

***********************************************************/

VOID MEMORY_AddProcessHeaps() {

	W::SIZE_T BytesToAllocate;
	W::PHANDLE aHeaps;
	W::PROCESS_HEAP_ENTRY Entry;
	W::DWORD NumberOfHeaps;
	UINT32 lastBlockEndAddr = 0;

	NumberOfHeaps = W::GetProcessHeaps(0, NULL);

	//Allocating space for the ProcessHeaps Addresses
	W::SIZETMult(NumberOfHeaps, sizeof(*aHeaps), &BytesToAllocate);
	aHeaps = (W::PHANDLE)W::HeapAlloc(W::GetProcessHeap(), 0, BytesToAllocate);//RtlAllocateHeap (???)

	W::GetProcessHeaps(NumberOfHeaps, aHeaps);

	for (size_t i = 0; i < NumberOfHeaps; ++i) {
		Entry.lpData = NULL;
		while (HeapWalk(aHeaps[i], &Entry) != FALSE) {

			ADDRINT startAddr, size;
			MEM_MASK mask;
			MEMORY_QueryWindows((ADDRINT)Entry.lpData, &startAddr, &size, &mask);
			MEMORY_RegisterArea(startAddr, size, mask);

			lastBlockEndAddr = (UINT32)Entry.lpData + Entry.cbData;		
		}
	}

}

/**********************************************************

This function adds to our memory map the LUSER_SHARED_DATA
page shared with the kernel.

***********************************************************/

VOID MEMORY_AddKUserShareData() {

	ADDRINT startAddr, size;
	MEM_MASK mask;

	MEMORY_QueryWindows(OS_KUSER_SHARED_DATA_ADDRESS, &startAddr, &size, &mask);
	MEMORY_RegisterArea(startAddr, size, mask);

}

/**********************************************************

This function adds to our memory map an addresses and its
enclosing range, obtained by querying Windows.

***********************************************************/

bool MEMORY_AddMappedMemory(ADDRINT start, ADDRINT end, bool print, ADDRINT eip) {

	W::MEMORY_BASIC_INFORMATION mem;
	W::SIZE_T numBytes;
	ADDRINT address = start;
	W::PVOID maxAddr = 0;

	int count = 0;

	bool changed = FALSE;

	//cout << "LOADED DLLs SO FAR: " << dllTextRanges.size() << endl;
	while (1) {

		numBytes = W::VirtualQuery((W::LPCVOID)address, &mem, sizeof(mem));

		// workaround for not getting stuck on the last valid block (see above)
		if ((maxAddr && maxAddr >= mem.BaseAddress) || end <= (ADDRINT)mem.BaseAddress) break;
		maxAddr = mem.BaseAddress;

		ADDRINT startAddr = (ADDRINT)mem.BaseAddress;
		ADDRINT size = mem.RegionSize;
		MEM_MASK mask = MEMORY_WinToPinCast(mem.Protect);

		bool insideDll = FALSE;

		if (eip != NULL) {
			for (std::vector<struct_section>::iterator it = dllTextRanges.begin(); it != dllTextRanges.end(); ++it) {
				if (it->start <= eip && eip < it->end) {
					insideDll = TRUE;
				}
			}
		}

		if (mem.State != MEM_FREE && (mem.Type != MEM_PRIVATE || insideDll)) {

			++count;
			
			if (mask != 0) {
				int ret = MEMORY_AuxRegisterArea(startAddr, size, mask);
				if (!ret || ret & 0x1) changed = true;

				if (print) {
					if (!ret) {
						SOK_LOG_AR("ADDED REGION %08x %08x %08x %08x %08x", startAddr, size, (UINT32)mask, mem.Protect, mem.AllocationProtect);
					}
					else if (ret & 0x1) {
						SOK_LOG_AR("FIXED REGION %08x %08x %08x %08x %08x", startAddr, size, (UINT32)mask, mem.Protect, mem.AllocationProtect);
					}
				}
			}
		}

		address += mem.RegionSize;
	}
	return changed;
}

/**********************************************************

This function add to our memory map addresses currently not
mapped and falling within the provided boundaries.

***********************************************************/

bool MEMORY_AddMappedMemoryStar(ADDRINT start, ADDRINT end, bool print) {

	W::MEMORY_BASIC_INFORMATION mem;
	W::SIZE_T numBytes;
	ADDRINT address = start;
	W::PVOID maxAddr = 0;

	int count = 0;
	bool changed = false;

	while (1) {

		numBytes = W::VirtualQuery((W::LPCVOID)address, &mem, sizeof(mem));

		// workaround for not getting stuck on the last valid block (see above)
		if ((maxAddr && maxAddr >= mem.BaseAddress) || end <= (ADDRINT)mem.BaseAddress) break;
		maxAddr = mem.BaseAddress;

		ADDRINT startAddr = (ADDRINT)mem.BaseAddress;
		ADDRINT size = mem.RegionSize;
		MEM_MASK mask = MEMORY_WinToPinCast(mem.Protect);
		if (mem.State != MEM_FREE && mem.Type != MEM_PRIVATE) {

			++count;

			if (mask != 0) {
				// TODO detect changes!
				changed = changed || MEMORY_CheckPermissionsForAreaStar(startAddr, size, mask);
			}
		}

		address += mem.RegionSize;
	}
	return changed;

}

// helper method to build permission mask when processing a SEC object
inline MEM_MASK getRWX(SEC section) {
	// ASSUMPTION: Pin does not load sections with PAGE_GUARD enabled
	// bit 0: R, bit 1: W, bit 2: X
	return MEM_ACCESSIBLE |
		(SEC_IsReadable(section) ? 1 : 0) | // ternary to suppress warning
		((SEC_IsWriteable(section) ? 1 : 0) << 1) |
		((SEC_IsExecutable(section) ? 1 : 0) << 2);
}