#include "config.h"
namespace W { // MEH I will have to fix the Enum eventually
	#include <windows.h>
	#undef IN
	#undef OUT
}

#include "tracer.h"
#include "logger.h"
#include "argsprinter.h"

#include <iostream>
#include <vector>

std::vector<retObj> pendingRets;
std::map < ADDRINT, const char* > retToDll;

inline VOID printArgsOnExit(libcall_info_t* prototype, tlsinfo *tdata, ADDRINT EAX, ADDRINT EDX, ADDRINT* esp_entry) {
	//logFun(tdata, "Return value: %p\n", EAX);
	
	libcall_arg_info_t &retInfo = prototype->lib_args[0];

	// Print retval if LONGLONG case
	if (retInfo.arg_type == NKT_DBFUNDTYPE_SignedQuadWord || retInfo.arg_type == NKT_DBFUNDTYPE_UnsignedQuadWord) {
		printLongRet(tdata, prototype->lib_args[0], EAX, EDX);
	}
	// Print retval for DOUBLE case
	else if (retInfo.arg_type == NKT_DBFUNDTYPE_Double || retInfo.arg_type == NKT_DBFUNDTYPE_LongDouble) {
		printDoubleRet(tdata, prototype->lib_args[0]);
	}
	else printArg(tdata, prototype->lib_args[0], EAX, esp_entry);
	
	size_t numArgs = prototype->argnum;
	if (numArgs) {
		// index 0 is return type
		size_t idx = 1;
		size_t sp = 1;
		for (idx; idx <= numArgs; ++idx) {
			libcall_arg_info_t &argInfo = prototype->lib_args[idx];
			// inspect INOUT, OUT, UNK (aka skip IN)
			if (argInfo.in_out_flag == IN) continue;

			printArg(tdata, argInfo, esp_entry[sp], esp_entry + sp);
			if (argInfo.arg_type == NKT_DBFUNDTYPE_SignedQuadWord || argInfo.arg_type == NKT_DBFUNDTYPE_UnsignedQuadWord) {
				++sp;
			}
			++sp;

			//logFun(tdata, "[%d] %s = %p\n", idx, argInfo.arg_name, esp_entry[idx]);
		}
	}
}

inline VOID printOnExit(ADDRINT ESP, ADDRINT EAX, ADDRINT EDX, tlsinfo *tdata, callinfo &cinfo, size_t stackEntries, const char* dllName) {
	exportEntry *expEntry = (exportEntry*)cinfo.data;
	libcall_info_t* prototype = expEntry->prototype;
	int offset = ESP - cinfo.esp - 4;
	if (prototype) {
		const char* fun = prototype->func_name;

		printApiExecuted(fun, dllName, true, tdata, stackEntries, ESP, offset);

		//logFun(tdata, "(%d) Clean return with ret [%d] to ESP %p for %s\n", stackEntries, offset, ESP, fun);
		printArgsOnExit(prototype, tdata, EAX, EDX, (ADDRINT*)cinfo.esp);
	}
	else {
		const char* fun = expEntry->name;

		printApiExecuted(fun, dllName, false, tdata, stackEntries, ESP, offset);

		//logFun(tdata, "(%d) Clean return with ret [%d] to ESP %p for %s\n", stackEntries, offset, ESP, fun);
		//logFun(tdata,, "Return value: %p\n", EAX);

		LOG_BISHOP(tdata, "\tretval: %p\n", EAX);
	}
}

VOID printStack(tlsinfo* tdata, callstack &cstack) {
	for (callstack::iterator it = cstack.begin(), end = cstack.end(); it != end; ++it) {
		callinfo &cinfo = *it;
		logFun(tdata, "Entry on call stack\n");
		exportEntry* e = (exportEntry*)cinfo.data;
		logFun(tdata, "RA %p ESP %p %s\n", cinfo.ra, cinfo.esp, e->name);
	}
}

VOID exitCallback(THREADID tid, ADDRINT ESP, ADDRINT EIP, ADDRINT EAX, ADDRINT EDX, const char* dllName) {
	LOG_TIME_ENTRY();
	tlsinfo *tdata = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
	callstack &cstack = tdata->cstack;

	size_t entries = cstack.size();
	size_t origEntries = entries;
	if (entries == 0) {
		// TODO do we need this? I think I wouldn't be instrumenting the RA otherwise
		//if (bintree_search(intervalTree, *((ADDRINT*)ESP)+1)) { // debug mode only?
		
#if TRACE_PREDECESSOR
		logFun(tdata, "previous EIP was %p\n", tdata->lastEIP);
		mycerr << "LAST EIP: " << tdata->lastEIP << std::endl;
#endif
		if (BaseStats::emptyStackAtSite.count(EIP) == 0) {
			BaseStats::emptyStackAtSite[EIP] = 1;
			mycerr << "POSSIBLY MISSED CALL: EMPTY STACK AT " << EIP << std::endl;
		}
		else BaseStats::emptyStackAtSite[EIP] += 1; // watch out for ++ :-)
//#if DEBUG_MODE
		mycerr << "EMPTY STACK AT " << EIP << std::endl;
		logFun(tdata, "EMPTY STACK AT %p FOR RA %p !!!\n", ESP, EIP);
//#endif

		LOG_TIME_EXIT(BaseStats::exitApiDiscard);
		return;
	}

	// TODO use reverse iterator
	int curIdx = entries - 1;
	callinfo &cinfo = cstack[curIdx];
	bool found = false;
	do {
		if (cinfo.ra == EIP) {
			found = true;
			break;
		}
		if (--curIdx < 0) break;
		cinfo = cstack[curIdx];
	} while (1);

#if TRACE_PREDECESSOR
	logFun(tdata, "exit - previous EIP was %p\n", tdata->lastEIP);
#endif
	//logFun(tdata, "exit-EIP: %p\n", EIP);

	if (curIdx == entries - 1) { // simple pop case
		if (ESP <= cinfo.esp) {
			mycerr << "FUCKED UP ESP 1" << std::endl;
			#if DEBUG_MODE
			logFun(tdata, "%d FUCKED UP ESP 1\n", entries);
			#endif
			LOG_TIME_EXIT(BaseStats::exitApiDiscard);
		}
		else {
			// things went down nicely :-)
			cstack.pop_back(); 
			//logFun(tdata, "%d Clean return\n", entries);
			printOnExit(ESP, EAX, EDX, tdata, cinfo, entries, dllName);
			LOG_TIME_EXIT(BaseStats::exitApi);
		}
	}
	else {
		if (curIdx == -1) {
#if TRACE_PREDECESSOR
			logFun(tdata, "previous EIP was %p\n", tdata->lastEIP);
			mycerr << "LAST EIP: " << tdata->lastEIP << std::endl;
#endif
			std::cerr << "CFG JOIN? NOTHING LEFT AT " << std::hex << EIP << std::endl;
			#if DEBUG_MODE
			logFun(tdata, "%d NOTHING LEFT AT %p (ESP is %p)\n", entries, EIP, ESP)
			#endif

			LOG_TIME_EXIT(BaseStats::exitApiDiscard);
			printStack(tdata, cstack); // TODO do we need this?
		} else if (ESP <= cinfo.esp) {
			mycerr << "FUCKED UP ESP 2" << std::endl;
			#if DEBUG_MODE
			logFun(tdata, "%d FUCKED UP ESP (%p) 2 AT %p\n", entries, ESP, EIP);
			#endif
			LOG_TIME_EXIT(BaseStats::exitApiDiscard);
		}
		else {
			mycerr << "CLEARING SHADOW STACK FOR " << std::dec << curIdx << std::endl;
			#if DEBUG_MODE
			logFun(tdata, "%d CLEARING SHADOW STACK FOR %d AT %p\n", entries, curIdx, EIP);
			#endif
			cstack.resize(curIdx); // flush curIdx and remaining elements
			LOG_TIME_EXIT(BaseStats::exitApiDiscard);
		}
	}

}

#if TRACE_PREDECESSOR
VOID PIN_FAST_ANALYSIS_CALL tracePredecessorCallback(THREADID tid, ADDRINT EIP) {
	tlsinfo *tdata = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
	tdata->lastEIP = tdata->curEIP;
	tdata->curEIP = EIP;
}
#endif


VOID TRACER_Instruction(INS ins) {

#if TRACE_PREDECESSOR
	INS_InsertCall(ins, IPOINT_BEFORE,
		(AFUNPTR)tracePredecessorCallback,
		IARG_FAST_ANALYSIS_CALL,
		IARG_THREAD_ID,
		IARG_REG_VALUE,
		REG_INST_PTR,
		IARG_END);
#endif

	ADDRINT addr = INS_Address(ins);
	if (instrumentedRAs.count(addr) == 0) return;
	//mycerr << "INSTRUMENTING RA " << std::hex << addr << std::endl;

	// Get DllName
	const char* dllName = retToDll[addr];
	retToDll.erase(addr);
	
	INS_InsertCall(ins, IPOINT_BEFORE,
				(AFUNPTR)exitCallback,
				//IARG_FAST_ANALYSIS_CALL,
				IARG_THREAD_ID,
				IARG_REG_VALUE,
				REG_STACK_PTR,
				IARG_REG_VALUE,
				REG_INST_PTR,
				IARG_REG_VALUE,
				REG_EAX,
				IARG_REG_VALUE,
				REG_EDX,
				IARG_ADDRINT, 
				dllName, // TODO check whether we need this
				IARG_END);
}
