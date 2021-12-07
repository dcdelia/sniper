#include "config.h"
namespace W { // MEH I will have to fix the Enum eventually
	#include <windows.h>
	#undef IN
	#undef OUT
}

#include "tracer.h"
#include "itree.h"
#include "prototypes/prototypes.h"
#include "logger.h"
#include "argsprinter.h"

#include <iostream>
#include <string>
#include <set>

/* smaller configurations used when testing */
//char* supportedDLLs[] = { "user32.dll", "msvcrt.dll", "gdi32.dll" };
//char* supportedDLLs[] = { "kernel32.dll", "user32.dll", "msvcrt.dll", "gdi32.dll" };
//char* supportedDLLs[] = { "kernel32.dll" };
//char* supportedDLLs[] = { "kernel32.dll", "user32.dll", "gdi32.dll", "oleaut32.dll", "mscvrt.dll", "kernelbase.dll" };
//char* supportedDLLs[] = { "msvcrt.dll" };

// list a supported DLL name here to enable instrumentation
char* supportedDLLs[] = { "advapi32.dll", "crypt32.dll", "gdi32.dll", "iphlpapi.dll", "kernel32.dll", "kernelbase.dll", "ole32.dll", "oleaut32.dll", "shell32.dll", "user32.dll", "wininet.dll", "ws2_32.dll"};

itreenode_t* intervalTree;

size_t callCnt = 0; // thread-unsafe but that's okay I guess

// bookkeeping for instrumentation purposes
std::vector<monitoredDLL> monitoredDLLs;
std::set<ADDRINT> instrumentedRAs;
std::set<ADDRINT> alreadyInstrumented;

#ifdef __LP64__
inline void printArgumentsOnEntry(tlsinfo *tdata, libcall_info_t* prototype, ADDRINT* esp_entry,
								  CONTEXT* pContext, callinfo* cinfo) {
#else
inline void printArgumentsOnEntry(tlsinfo *tdata, libcall_info_t* prototype, ADDRINT* esp_entry) {
#endif
	uint32_t numArgs = prototype->argnum;
#if LOG_ARG_COUNTS
	BaseStats::prototypes[prototype]++; // no initialization, trust Pin STL library :)
	if (numArgs > 0)
		BaseStats::argApiCalls += numArgs;
	else BaseStats::apiCallsNoArgs++;
#endif
	if (numArgs) {
		// index 0 is return type
		uint32_t idx = 1;
		uint32_t sp = 1;
		for (idx = 1; idx <= numArgs; ++idx) {
			libcall_arg_info_t &argInfo = prototype->lib_args[idx];
			#if LOG_ARG_COUNTS
			if (argInfo.in_out_flag == OUT || argInfo.in_out_flag == INOUT)
				BaseStats::argOutApiCalls++;
			#endif
#ifdef __LP64__
			bool shallPrint = !(argInfo.in_out_flag == OUT);
			bool mayNeedStore = !(argInfo.in_out_flag == IN);
			// first four arguments will be in registers, the rest on stack
			// TODO64: XMM0L, XMM1L, XMM2L and XMM3L for floating-point arguments
			//         while 16 byte-wide stuff gets passed by reference
			if (idx == 1) {
				ADDRINT reg = PIN_GetContextReg(pContext, REG_GCX);
				if (shallPrint) printArg(tdata, argInfo, reg, esp_entry + sp);
				if (mayNeedStore) cinfo->outRegs.rcx = reg;
			}
			else if (idx == 2) {
				ADDRINT reg = PIN_GetContextReg(pContext, REG_GDX);
				if (shallPrint) printArg(tdata, argInfo, reg, esp_entry + sp);
				if (mayNeedStore) cinfo->outRegs.rdx = reg;
			}
			else if (idx == 3) {
				ADDRINT reg = PIN_GetContextReg(pContext, REG_R8);
				if (shallPrint) printArg(tdata, argInfo, reg, esp_entry + sp);
				if (mayNeedStore) cinfo->outRegs.r8 = reg;
			}
			else if (idx == 4) {
				ADDRINT reg = PIN_GetContextReg(pContext, REG_R9);
				if (shallPrint) printArg(tdata, argInfo, reg, esp_entry + sp);
				if (mayNeedStore) cinfo->outRegs.r9 = reg;
			}
			else {
				if (shallPrint) printArg(tdata, argInfo, esp_entry[sp], esp_entry + sp);
				++sp;
			}
#else
			// inspect IN, INOUT, UNK (aka skip OUT)
			if (argInfo.in_out_flag == OUT) {
				++sp;
				continue;
			}
			//logFun(tdata, "[%d] %s = %p\n", idx, argInfo.arg_name, esp_entry[idx]);
			printArg(tdata, argInfo, esp_entry[sp], esp_entry + sp);
			++sp;
			if (argInfo.arg_type == NKT_DBFUNDTYPE_SignedQuadWord || argInfo.arg_type == NKT_DBFUNDTYPE_UnsignedQuadWord ||
				argInfo.arg_type == NKT_DBFUNDTYPE_Double || argInfo.arg_type == NKT_DBFUNDTYPE_LongDouble) {
				++sp; // two slots taken
			}
#endif
		}
	}
}

// helper method - trigger delayed instrumentation of RA
inline void checkRAforInstrumentation(ADDRINT ra, const char* dllName) {
	if (instrumentedRAs.count(ra) == 0) {
		PIN_MutexLock(&mutex);
		retObj robj = { ra,  NULL};

		// Insert in map
		retToDll.insert(std::pair<ADDRINT, const char*>(ra, dllName));

		instrumentedRAs.insert(ra);
		PIN_RemoveInstrumentationInRange(ra, ra);
		PIN_MutexUnlock(&mutex);;
	}
}

// helper method - remove stale stack entries and add new one
inline VOID updateStackOnEntry(callstack &cstack, callinfo cinfo, tlsinfo* tdata) {
	//bool cond = false;
	ADDRINT esp_val = cinfo.esp;
	while (!cstack.empty()) {
		callinfo &top = cstack.back();
		if (esp_val >= top.esp) {
			exportEntry *entry = (exportEntry*)top.data;
			libcall_info_t* prototype = entry->prototype; 
			//mycerr << "STALE SHADOW STACK ENTRY FOUND FOR " << entry->name << std::endl;
			if (prototype) {
				#if VERBOSE_OUTPUT
				logFun(tdata, "(%d) Removing stale entry %p (from %s to %p) for upcoming %p\n", cstack.size(), top.esp, prototype->func_name, top.ra, esp_val);
				#endif
			}
			else {
				#if VERBOSE_OUTPUT
				logFun(tdata, "(%d) Removing stale entry %p (from %s with no prototype to %p) for upcoming %p\n", cstack.size(), top.esp, entry->name, top.ra, esp_val);
				#endif
			}
			//mycerr << "NOT TOP OF THE STACK!" << std::endl;
			cstack.pop_back();
			//cond = true;
		}
		else break;
	}
	//if (cond) mycerr << "DONE" << std::endl;

	cstack.push_back(cinfo);
}

/* TODO use this when we will discard logging info
#if TRACE_PREDECESSOR
VOID entryCallback(THREADID tid, ADDRINT* ESP, void* data, ADDRINT EIP) {
#else
VOID entryCallback(THREADID tid, ADDRINT* ESP, void* data) {
#endif */
#ifdef __LP64__
VOID entryCallback(THREADID tid, ADDRINT *ESP, void* data, ADDRINT EIP, const char* dllName, CONTEXT *pContext) {
#else
VOID entryCallback(THREADID tid, ADDRINT* ESP, void* data, ADDRINT EIP, const char* dllName) {
#endif
	BaseStats::apiCallsAll++;
	LOG_TIME_ENTRY();
	itreenode_t* node = itree_search(intervalTree, *ESP);
	if (node) {
		//mycout << "Ignoring call made in " << node->dll_name << std::endl;
		exportEntry *e = (exportEntry*)data;
		tlsinfo *scdata = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
#if TRACE_PREDECESSOR
		fprintf(scdata->logfile, "last-EIP was %p\n", scdata->lastEIP);
#endif	
#if PRINT_LIB_CALLS
		fprintf(scdata->logfile, "Discarding call to %s at %p with RA %p (module is %s)\n", e->name, EIP, *ESP, node->dll_name->c_str());
#endif
		std::string &dllName = *(std::string*)(node->data);
		BaseStats::sitesForIntApiCalls[dllName]++;
		LOG_TIME_EXIT(BaseStats::entryApiDiscard);
		return;
	}

	tlsinfo *tdata = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
	callstack &cstack = tdata->cstack;

	// prune internal calls
	if (!cstack.empty()) {
		callinfo &top = cstack.back();
		if (top.ra == *ESP && top.esp == (ADDRINT)ESP) {
			exportEntry* e = (exportEntry*)top.data;

			BaseStats::apiCallsTail++;
			//mycout << e->dllPath << std::endl;
			//mycout << e->name << std::endl;
			BaseStats::sitesForTailApiCalls[e->dllPath]++;

#if PRINT_TAIL_CALLS
			logFun(tdata, "Discarding internal call to %s at %p\n", e->name, EIP);
#endif
			LOG_TIME_EXIT(BaseStats::entryApiDiscard);
			return;
		}
	}

	// return address is at *ESP
	checkRAforInstrumentation(*ESP, dllName);

	// update call stack
	++callCnt;
#ifdef __LP64__
	callinfo cinfo = { *ESP, (ADDRINT)ESP, data, {0} };
#else
	callinfo cinfo = { *ESP, (ADDRINT)ESP, data };
#endif

#if TRACE_PREDECESSOR
	logFun(tdata, "last-EIP was %p\n", tdata->lastEIP);
	logFun(tdata, "EIP: %p\n", EIP);
#endif

#ifndef __LP64__ // deferred for 64-bit case as we should save OUT args
	updateStackOnEntry(cstack, cinfo, tdata);
#endif


	// GIORDANO preferisce che venga fatto in questo modo o ci mena
	BaseStats::apiCalls++;
	exportEntry *entry = (exportEntry*)data;
	libcall_info_t* prototype = entry->prototype;
	if (prototype) {
		tdata->callnumber += 1;

		const char* fun = prototype->func_name;
		//LOG_BISHOP(tdata, "(%d) Function call to %s!%s with RA %p and ESP %p\n", cstack.size(), dllName, fun, (void*)*ESP, ESP);
		printApiName(fun, dllName, true, tdata, (uint32_t)cstack.size(), (void*)*ESP, ESP);
		#ifdef __LP64__
		// saves also register values for output arguments
		printArgumentsOnEntry(tdata, prototype, ESP, pContext, &cinfo);
		updateStackOnEntry(cstack, cinfo, tdata);
		#else
		printArgumentsOnEntry(tdata, prototype, ESP);
		#endif
	} else {
		const char* fun = entry->name;
		//LOG_BISHOP(tdata, "(%d) Unsupported call to %s!%s with RA %p and ESP %p\n", cstack.size(), dllName, fun, (void*)*ESP, ESP);
		printApiName(fun, dllName, false, tdata, (uint32_t)cstack.size(), (void*)*ESP, ESP);
		#if LOG_ARG_COUNTS
		//BaseStats::sptch++;
		#endif
		#ifdef __LP64__
		updateStackOnEntry(cstack, cinfo, tdata);
		#endif
	}
	LOG_TIME_EXIT(BaseStats::entryApi);
}

inline libcall_info_t* lookupPrototype(dllNameMapOfMap::iterator &mmIt, size_t &prototypesFound, size_t &prototypesMissing, exportEntry &e, const std::string &pinRtnName) {
	dllNameMap::iterator mIt = mmIt->second.find(std::string(e.name));
	if (mIt != mmIt->second.end()) { // TODO hoist end? :-)
		//mycout << "PROTOTYPE FOUND" << std::endl;
		++prototypesFound;
		return mIt->second;
	}
	else {
		mIt = mmIt->second.find(pinRtnName);
		if (mIt != mmIt->second.end()) {
			//mycout << "PROTOTYPE FOUND USING RTN_NAME " << pinRtnName << std::endl;
			++prototypesFound;
			return mIt->second;
		}
		else {
			//mycerr << "PROTOTYPE NOT FOUND FOR " << e.name << std::endl;
			++prototypesMissing;
			return NULL;
		}
	}
}

inline std::string getIMGname(IMG img) {
	const char* imgName = IMG_Name(img).c_str();
	char tmp[256];
	size_t i;
	for (i = 0; imgName[i]; ++i) {
		tmp[i] = tolower(imgName[i]);
	}
	tmp[i] = 0; // well... no bounds checking :-)
	return std::string(tmp);
}

inline void addToIntervalTree(ADDRINT imgStart, ADDRINT imgEnd, std::string &str) {
	std::string *data = new std::string(str);
	if (intervalTree == NULL) {
		intervalTree = itree_init(imgStart, imgEnd, (void*)data);
	}
	else {
		// TODO sanity check for interval already present?
		itree_insert(intervalTree, imgStart, imgEnd, (void*)data);
	}
}

inline void removeFromIntervalTree(ADDRINT imgStart, ADDRINT imgEnd) {
	// search for it first: we want to avoid memory leak on data
	if (itreenode_t *node = itree_search(intervalTree, imgStart)) {
		std::string *str = (std::string*)node->data;
		if (imgStart == node->start_addr && imgEnd == node->end_addr) {
			mycout << "Unloading DLL " << *str << std::endl;
			intervalTree = itree_delete(intervalTree, imgStart, imgEnd);
			delete str;
		}
		else {
			mycout << "Abnormal unload: desired is [" << imgStart << ", "
				<< imgEnd << "] but found range is [" << node->start_addr
				<< ", " << node->end_addr << " for " << *str << std::endl;
		}
	}
}

VOID TRACER_UnloadImage(IMG img) {
	ADDRINT imgStart = IMG_LowAddress(img);
	ADDRINT imgEnd = IMG_HighAddress(img);

	removeFromIntervalTree(imgStart, imgEnd);
}


VOID TRACER_LoadImage(IMG img) {
	if (IMG_IsMainExecutable(img)) return; // we only want DLLs

	std::string imgNameStr = getIMGname(img);

	bool instrument = false;
	size_t suppDLLidx;
	for (suppDLLidx = 0; suppDLLidx < sizeof(supportedDLLs) / sizeof(char*); ++suppDLLidx) {
		if (imgNameStr.find(supportedDLLs[suppDLLidx]) != std::string::npos) {
			instrument = true;
			break;
		}
	}

	ADDRINT imgStart = IMG_LowAddress(img); // get base address
	ADDRINT imgEnd = IMG_HighAddress(img);

	// interval tree
	if ((imgNameStr.find("windows\\system32\\") != std::string::npos) ||
		(imgNameStr.find("windows\\syswow64\\") != std::string::npos) ||
		(imgNameStr.find("windows\\winsxs\\") != std::string::npos) || 
		(imgNameStr.find("windows\\microsoft.net\\") != std::string::npos)) {
		mycout << "Loading Windows DLL: " << imgNameStr
				  << " at " << std::hex << imgStart
				  << " till " << std::hex << imgEnd << std::endl;
		PIN_MutexLock(&mutex);
		addToIntervalTree(imgStart, imgEnd, imgNameStr);
		PIN_MutexUnlock(&mutex);
	}
	else {
		mycout << "> Loading " << imgNameStr
			<< " at " << std::hex << imgStart << std::endl;
	}

	// instrumentation only for supported DLLs
	if (!instrument) return;

	mycout << "> About to instrument " << imgNameStr
			  << " at " << std::hex << imgStart
		      << " till " << std::hex << imgEnd << std::endl;

	// monitoredDLLs
	std::string shortName = std::string(supportedDLLs[suppDLLidx]);
#if 1
	// debugging mode: verify if already present
	size_t count = monitoredDLLs.size();
	for (size_t i = 0; i < count; ++i) {
		if (monitoredDLLs[i].shortName == shortName) {
			mycerr << "WARNING I have already monitored this!" << std::endl;
			return;
		}
	}
#endif
	monitoredDLLs.push_back(monitoredDLL());
	monitoredDLL &dll = monitoredDLLs.back(); // SHIT

	dll.shortName = shortName;
	dll.dllPath = std::string(IMG_Name(img)); // shall make lookup easier on exit

	// we make a copy of the string as we will need it later
	const char* theDllPath = strdup(dll.dllPath.c_str());
	parseExportTable(theDllPath, imgStart, dll.entries);

	// look up hashmap for quick retrieval of prototypes
	bool hasPrototypes = false;
	dllNameMapOfMap::iterator mmIt = dllArgsMapOfMap.find(dll.shortName.c_str());
	if (mmIt != dllArgsMapOfMap.end()) {
		//mycout << "ARRIVA IL VESCOVO" << std::endl; // LOG_BISHOP FTW :-)
		// SNIPER has prototypes for the DLL
		hasPrototypes = true;
	}
	/*
	else {
		mycerr << "NO PROTOTYPE INFORMATION AVAILABLE" << std::endl;
		mycerr << dll.shortName << std::endl;
		mycerr << dllArgsMapOfMap.size() << std::endl;
	}*/

	size_t prototypesFound = 0, prototypesMissing = 0;
	size_t invalid = 0;
	std::vector<std::pair<const char*, ADDRINT>> duplicated;

	// acquire lock (e.g. for RTN_FindByAddress)
	PIN_MutexLock(&mutex);

	size_t rtnNotFound = dll.entries.size(); // easier if decremented
	const char *dllName = strrchr(IMG_Name(img).c_str(), '\\') + 1;

	BaseStats::sitesForTailApiCalls.insert(std::pair<const char*, UINT32>(theDllPath, 0));
	BaseStats::sitesForIntApiCalls.insert(std::pair<std::string, UINT32>(imgNameStr, 0));
	BaseStats::sitesForIntSysCalls.insert(std::pair<std::string, UINT32>(imgNameStr, 0));
	//BaseStats::intSysCallMap.insert(std::pair<const char*, UINT32>(dllName, 0));

	for (dllEntryList::iterator it = dll.entries.begin(), end = dll.entries.end();
			it != end; ++it) {
		exportEntry *e = *it;
		ADDRINT exportAddr = imgStart + e->rva;
		if (alreadyInstrumented.count(exportAddr)) {
			duplicated.push_back(std::make_pair(e->name, e->rva));
			continue;
		}

		if (imgEnd < exportAddr) {
			mycerr << "POSSIBLE BUG: RVA is outside IMG for " << e->name << std::endl;
			continue;
		}
		RTN rtn = RTN_FindByAddress(exportAddr);
		if (rtn == RTN_Invalid()) {
			// note that export forwarders are ruled out in exports.cpp
			++invalid;
			//mycerr << "Invalid RTN for " << std::hex << exportAddr
			//		  << " aka " << e.name << std::endl;
			continue; 	// TODO when shall we define a function instead?
		}
	
		// the mismatch likely involves symbols vs export name, however 
		// in some cases the PyreBox DB matches with Pin's routine name
		const std::string &pinRtnName = RTN_Name(rtn);
#if 0
		if (pinRtnName != e->name) {
			mycerr << "HELP MARCO: " << RTN_Name(rtn) << " vs " << e.name
					  << " for " << std::hex << exportAddr << std::endl;
		}
#endif

		// now we can play with instrumentation
		RTN_Open(rtn);

#if TRACE_ENTRY_INS
		// version 1: RTN_InsHead(rtn) if we need other instructions too
		// (so that we can look them up using operator next)
		//INS head = RTN_InsHead(rtn);

		// version 2: RTN_InsHeadOnly(rtn) if we handle ret through RAs 
		INS head = RTN_InsHeadOnly(rtn);
		if (head == INS_Invalid()) {
			mycerr << "Cannot locate first instruction statically" << std::endl;
			RTN_Close(rtn);
			continue;
		}
		if (INS_Address(head) != exportAddr) {
			mycerr << "First instruction for Pin not aligned with RVA" << std::endl;
			RTN_Close(rtn);
			continue;
		}
#endif

		// look up parameter
		AFUNPTR callback = (AFUNPTR)entryCallback; // just one for now
		libcall_info_t* data = NULL; // TODO do I actually check this?
		if (hasPrototypes) {
			data = lookupPrototype(mmIt, prototypesFound, prototypesMissing, *e, pinRtnName);
			e->prototype = data; // NULL is a fine assignment here	
		}

		/*// insert basic logging
		INS_InsertCall(head,
			IPOINT_BEFORE,
			(AFUNPTR)BaseStats::countApiCall,
			IARG_FAST_ANALYSIS_CALL,
			IARG_END);*/

		// insert instrumentation
#ifdef __LP64__ // otherwise too much stuff to pass as argument
		REGSET regsIn;
		REGSET_Clear(regsIn);
		REGSET_Insert(regsIn, REG_GCX);
		REGSET_Insert(regsIn, REG_GDX);
		REGSET_Insert(regsIn, REG_R8);
		REGSET_Insert(regsIn, REG_R9);
		REGSET regsOut;
		REGSET_Clear(regsOut);
#endif

#if TRACE_ENTRY_INS
	#ifdef __LP64__
		INS_InsertCall(head, IPOINT_BEFORE,
			callback,
			IARG_THREAD_ID,
			IARG_REG_VALUE, REG_STACK_PTR,
			IARG_PTR, e, // TODO eventually use union or drop calls without prototype?
			IARG_REG_VALUE,
			REG_INST_PTR, // TODO discard when we won't need logging unless TRACE_PREDECESSOR
			IARG_ADDRINT, dllName,
			IARG_PARTIAL_CONTEXT, &regsIn, &regsOut,
			IARG_END);
	#else
		INS_InsertCall(head, IPOINT_BEFORE,
			callback,
			IARG_THREAD_ID,
			IARG_REG_VALUE,
			REG_STACK_PTR,
			IARG_PTR, e, // TODO eventually use union or drop calls without prototype?
			IARG_REG_VALUE,
			REG_INST_PTR, // TODO discard when we won't need logging unless TRACE_PREDECESSOR
			IARG_ADDRINT, dllName,
			IARG_END);
	#endif
#else
	#ifdef __LP64__
		RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)entryCallback,
			IARG_THREAD_ID,
			IARG_REG_VALUE, REG_STACK_PTR,
			IARG_PTR, e, // TODO eventually use union or drop calls without prototype?
			IARG_REG_VALUE,
			REG_INST_PTR, // TODO discard when we won't need logging unless TRACE_PREDECESSOR
			IARG_ADDRINT, dllName,
			IARG_PARTIAL_CONTEXT, &regsIn, &regsOut,
			IARG_END);
	#else
		RTN_InsertCall(rtn, IPOINT_BEFORE, (AFUNPTR)entryCallback,
			IARG_THREAD_ID,
			IARG_REG_VALUE,
			REG_STACK_PTR,
			IARG_PTR,
			e, // TODO eventually use union or drop calls without prototype?
			IARG_REG_VALUE,
			REG_INST_PTR, // TODO discard when we won't need logging unless TRACE_PREDECESSOR
			IARG_ADDRINT,
			dllName,
			IARG_END);
		#endif
#endif
		RTN_Close(rtn);

		// mark as instrumented
		e->entryInstrumented = true;
		alreadyInstrumented.insert(exportAddr);
		rtnNotFound--;
	}

	// release lock
	PIN_MutexUnlock(&mutex);

	if (rtnNotFound) {
		mycout << "Entries that could not be mapped to a RTN: "
				  << std::dec << rtnNotFound << std::endl;
	}

	if (invalid) {
		mycout << "Export entries likely to be data: "
				  << std::dec << invalid << std::endl;
	}

	if (hasPrototypes) {
		mycout << "[PROTOTYPES] Found: " << std::dec << prototypesFound
				  << " Missing: " << prototypesMissing << std::endl;
	}

	if (!duplicated.empty()) {
		mycout << "AVOIDED DUPLICATED INSTRUMENTATION FOR:";
		for (std::vector<std::pair<const char*, ADDRINT>>::iterator it = duplicated.begin(),
			end = duplicated.end(); it != end; ++it) {
			mycout << " " << it->first << " (" << std::hex << it->second << ")";
		}
		mycout << std::endl;
	}
}