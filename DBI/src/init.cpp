#include "config.h"
#include "tracer.h"
#include "prototypes/prototypes.h"

#include <iostream>

#if SPILL_REGISTER
REG tracerTLS; // faster than TLS, but we can do that too
#else
TLS_KEY TRACER_tls_key = INVALID_TLS_KEY;
#endif

VOID TRACER_Init() {
#if SPILL_REGISTER
	tracerTLS = PIN_ClaimToolRegister();
#else
	TRACER_tls_key = PIN_CreateThreadDataKey(NULL);
	if (TRACER_tls_key == INVALID_TLS_KEY) {
		std::cerr << "Cannot initialize TLS key for TRACER" << std::endl;
		PIN_ExitProcess(1);
	}
#endif
	TRACER_InitPrototypes();
}

VOID TRACER_InitializeTLS(THREADID tid) {
	tlsinfo* tdata = new tlsinfo;
	tdata->syscall.watched = false; // POD: not needed?
	tdata->callnumber = 0;

	if (PIN_SetThreadData(TRACER_tls_key, (void*)tdata, tid) == FALSE) {
		std::cerr << "PIN_SetThreadData failed for TRACER" << std::endl;
		PIN_ExitProcess(1);
	}

	TRACER_ThreadInitLogger(tid, tdata);
}

VOID TRACER_CloseThread(THREADID tid) {
	tlsinfo *tdata = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
	TRACER_ThreadExitLogger(tid, tdata);
}