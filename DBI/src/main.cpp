// This is a partial snapshot of the DBI variant of the SNIPER API tracer
// from the research article "Designing Robust API Monitoring Solutions"
//
// Reference: https://arxiv.org/abs/2005.00323
//
// Upon publication of the article we will release the full-fledged code
// which includes 64-bit and floating-point support, along with the GUI
// and strategy (a) from the paper for hooking exit events. This snapshot
// embodies strategy (b) and features the DLL selection that we used in
// the evaluation, however more prototypes can simply be added by using
// the adapted Deviare2 parser that we will release shortly.
//
// Main developers: Daniele Cono D'Elia and Simone Nicchi
//
// Note: a few variable/macro names and strings may not make sense to you
// from an exquisitely technical point of view, but allowed us to keep
// things entertaining and retain our sanity in the darkest days of the
// development. We will polish everything for the official release :-)

#include "pin.H"
#include <iostream>

#include "config.h"

// tracer components
#include "tracer.h"
#include "logger.h"

// DBI anti-evasion + hooks
#include "sok/memory.h"
#include "sok/hooks.h"
#include "sok/fpu.h"
#include "sok/logging.h"

// ntdll.cpp: map between ordinal and syscall name
extern CHAR* syscallIDs[MAXSYSCALLS];
VOID EnumSyscalls();

// [anti-evasion] we use TLS for now only to track state across syscall enter and exit
TLS_KEY tls_key = INVALID_TLS_KEY;

#if USE_KNOBS
BOOL _nxKnob;
BOOL _paranoidKnob;
BOOL _rwKnob;
BOOL _leakKnob;
#endif

// check USE_KNOB in config.h to see if they are enabled
KNOB <BOOL> KnobNX(KNOB_MODE_WRITEONCE, "pintool",
	"nx", "false", "enable NX protection");

KNOB <BOOL> KnobParanoid(KNOB_MODE_WRITEONCE, "pintool",
	"paranoid", "false", "enable NX full protection");

KNOB <BOOL> KnobRW(KNOB_MODE_WRITEONCE, "pintool",
	"read_write", "false", "enable read/write protection");

KNOB <BOOL> KnobLeak(KNOB_MODE_WRITEONCE, "pintool",
	"leak", "false", "enable FPU context protection");


INT32 Usage() {
	std::cout << "Welcome to SNIPER :-)\n" << std::endl;

	std::cout << KNOB_BASE::StringKnobSummary() << std::endl;

	return -1;
}

VOID antiDBIEvasionConfig() {
	SokLogging::Init();

#if USE_KNOBS
	_leakKnob = KnobLeak.Value();
	_rwKnob = KnobRW.Value();
	_nxKnob = KnobNX.Value();
	_paranoidKnob = KnobParanoid.Value();
#endif

	if (_rwKnob || _nxKnob) {
		// obtain a TLS key
		tls_key = PIN_CreateThreadDataKey(NULL);
		if (tls_key == INVALID_TLS_KEY) {
			LOG_AR("Cannot initialize TLS");
			PIN_ExitProcess(1);
		}
	}
}

VOID FiniCallback(INT32 code, VOID *v) {
	// base statistics
	BaseStats::printStats();

	SokLogging::Shutdown();
}

VOID OnThreadStart(THREADID tid, CONTEXT *ctxt, INT32, VOID *) {
	// DBI anti-evasion library
	if (_rwKnob || _nxKnob) {
		HOOKS_SetTLSKey(tid);
		MEMORY_OnThreadStart(ctxt);
	}

	// logging
	TRACER_InitializeTLS(tid);
}

VOID OnThreadFini(THREADID tid, const CONTEXT *ctxt, INT32, VOID *) {
	// TODO close log (when we will have one)
	TRACER_CloseThread(tid);
}

VOID Instruction(INS ins, VOID *v) {
	// DBI anti-evasion library
	if (_rwKnob || _nxKnob)
		MEMORY_InstrumentINS(ins);
	if (_leakKnob)
		FPU_InstrumentINS(ins);

	// API tracing
	TRACER_Instruction(ins);
}

VOID Image(IMG img, VOID* v) {
	// DBI anti-evasion library
	if (_rwKnob || _nxKnob) {
		MEMORY_LoadImage(img);
	}

	// API tracing
	TRACER_LoadImage(img);
}

VOID ImageUnload(IMG img, VOID* v) {
	// DBI anti-evasion library
	if (_rwKnob || _nxKnob) {
		MEMORY_UnloadImage(img);
	}

	// API tracing
	TRACER_UnloadImage(img);
}

VOID SyscallEntry(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std, void *v) {
	// anti-evasion
	if (_rwKnob || _nxKnob) {
		HOOKS_SyscallEntry(thread_id, ctx, std);
	}

	// API tracing
	TRACER_SyscallEntry(thread_id, ctx, std);
}

VOID SyscallExit(THREADID thread_id, CONTEXT *ctx, SYSCALL_STANDARD std, void *v) {
	if (_rwKnob || _nxKnob) {
		HOOKS_SyscallExit(thread_id, ctx, std);
	}

	// API tracing
	TRACER_SyscallExit(thread_id, ctx, std);
}

// used for debugging purposes
/*
VOID CONTEXT_ChangeContext(THREADID threadIndex, CONTEXT_CHANGE_REASON reason, const CONTEXT * ctxtFrom, CONTEXT * ctxtTo, INT32 info) {
	if (reason == CONTEXT_CHANGE_REASON_EXCEPTION) {
		ADDRINT _eip;
		PIN_GetContextRegval(ctxtFrom, REG_INST_PTR, reinterpret_cast<UINT8*>(&_eip));
		// [...] do what you need to do when debugging :-)
	}
}

VOID OnContextChange(THREADID threadIndex, CONTEXT_CHANGE_REASON reason, const CONTEXT *ctxtFrom, CONTEXT *ctxtTo, INT32 info, VOID *v) {
	CONTEXT_ChangeContext(threadIndex, reason, ctxtFrom, ctxtTo, info);
}

EXCEPT_HANDLING_RESULT InternalExceptionHandler(THREADID tid, EXCEPTION_INFO *pExceptInfo, PHYSICAL_CONTEXT *pPhysCtxt, VOID *v) {

	std::cout << PIN_ExceptionToString(pExceptInfo).c_str() <<
		" Code: " << pExceptInfo->GetExceptCode() << endl; // TODO use macro to print

	return EHR_CONTINUE_SEARCH;
}
*/

int main(int argc, char *argv[]) {

	PIN_InitSymbols();
	if (PIN_Init(argc, argv)) {
		return Usage();
	}

	// initialize some stuff
	antiDBIEvasionConfig();

	// init tracer (just TLS as of now)
	TRACER_Init();

	// anti-evasion stuff
	if (_rwKnob || _nxKnob) {
		MEMORY_Init();
	}
	if (_leakKnob) {
		FPU_Init();
	}

	// syscall instrumentation
	EnumSyscalls(); // parse ntdll for ordinals
	TRACER_SyscallInit(); // get ntdll range
	PIN_AddSyscallEntryFunction(SyscallEntry, NULL);
	PIN_AddSyscallExitFunction(SyscallExit, NULL);

	// anti-evasion syscall hooks
	HOOKS_Init();

	// INS instrumentation
	INS_AddInstrumentFunction(Instruction, NULL);

	// IMG instrumentation
	IMG_AddInstrumentFunction(Image, NULL);
	IMG_AddUnloadFunction(ImageUnload, NULL);

	// use for debugging purposes
	//PIN_AddContextChangeFunction(OnContextChange, NULL);
	//PIN_AddInternalExceptionHandler(InternalExceptionHandler, NULL);

	// events
	PIN_AddThreadStartFunction(OnThreadStart, NULL);
	PIN_AddThreadFiniFunction(OnThreadFini, NULL);
	
	PIN_AddFiniFunction(FiniCallback, NULL);

	PIN_StartProgram();

	return 0;
}
