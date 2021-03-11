// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#include "fpu.h"

#include <iostream>

// we spill a register in Pin for keeping a shadow FPU IP
REG spilledFpu;

VOID FPU_Init() {

	spilledFpu = PIN_ClaimToolRegister();

}

/**********************************************************

This function updates the FPU structure in order to fake
the address of last executed FPU instruction.

***********************************************************/

VOID PIN_FAST_ANALYSIS_CALL FPU_UpdateFPUStatus(ADDRINT regValue, ADDRINT op) {

	PIN_SafeCopy((VOID *)(op + FPUIPOFFSET), &regValue, sizeof(ADDRINT));

}

/**********************************************************

This function returns a fake instruction address for each
FPU instruction. Currently we return "spilledFpu" from the
caller (see instrumentation in function FPU_InstrumentINS).

***********************************************************/

ADDRINT PIN_FAST_ANALYSIS_CALL FPU_UpdateLastFpuIns(ADDRINT addr) { 

	return addr;

}

/**********************************************************

This function enables FPU patching only for specific
instructions, namely those that can leak the FPU IP.

***********************************************************/

VOID FPU_InstrumentINS(INS ins) {

	if (INS_Category(ins) == XED_CATEGORY_X87_ALU) {

		// we could be using opcodes for more efficient lookup
		std::string code = INS_Disassemble(ins);
		
		if (code.find("fwait") != std::string::npos) return;

		if (code.find("fnstenv") != std::string::npos ||
			code.find("fstenv") != std::string::npos ||
			code.find("fsave") != std::string::npos ||
			code.find("fnsave") != std::string::npos ||
			code.find("fxsave") != std::string::npos) {
			
			INS_InsertCall(ins, IPOINT_AFTER,
				(AFUNPTR)FPU_UpdateFPUStatus,
				IARG_FAST_ANALYSIS_CALL,
				IARG_REG_VALUE, spilledFpu,
				IARG_MEMORYOP_EA, 0,
				IARG_END);
				
		}
		else { // TODO optimize only for instructions that change FPU state?

			INS_InsertCall(ins, IPOINT_AFTER,
				(AFUNPTR)FPU_UpdateLastFpuIns,
				IARG_FAST_ANALYSIS_CALL,
				IARG_INST_PTR,
				IARG_RETURN_REGS, spilledFpu,
				IARG_END);
				
		}

		/* for debugging purposes
		UINT32 opc = 0; //need this
		ADDRINT addr = INS_Address(ins);
		USIZE size = INS_Size(ins);
		PIN_SafeCopy(&opc, (void*)addr, size);
		cout << INS_Disassemble(ins) << " 0x" << hex << opc << " " << size << endl;
		opc &= 0xFF;
		cout << INS_Disassemble(ins) << " N0x" << hex << opc << endl;
		if (opc == 0x9B) return;
		if (opc == 0xD9 || 0xDD) cout << INS_Disassemble(ins) << endl;;
		*/
	}

}