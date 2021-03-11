#include "config.h"
#include "tracer.h"
#include "sysprinter.h"
#include "argsprinter.h"
#include "logger.h"
#include "itree.h"

#include "syscalls/drsyscall.h"

namespace W {
#include "windows.h"
}

extern CHAR* syscallIDs[MAXSYSCALLS]; // from ntdll.cpp

DR::syscall_info_t* syscallIDtoInfo[MAXSYSCALLS] = { 0 };


static ADDRINT ntdllImgStart, ntdllImgEnd;

static W::BOOL isWow64;

bool checkCallSiteNTDLLWin32(itreenode_t* node, ADDRINT ESP) {
	ADDRINT addr = *(ADDRINT*)ESP;
	if (addr < ntdllImgStart || addr > ntdllImgEnd) return false;

	// not much black magic: retn [say 10h] or ret
	// C2 10 00
	uint8_t bytes[3] = { 0xFF, 0xFF, 0xFF }; // TODO =-1 but 0 might be fine as well
	PIN_SafeCopy(bytes, (void*)addr, 6);

	if (!((bytes[0] == 0xC2 && bytes[2] == 0x00) || bytes[0] == 0xC3)) {
		mycerr << "Didn't meet a retN or ret but those instead: " <<
			std::hex << (ADDRINT)bytes[0] << " " << (ADDRINT)bytes[1] <<
			" " << (ADDRINT)bytes[2] << " for" << addr << std::endl;
		ASSERT(false, "Check implementation for NTDLL call sites");
		return false;
	}

	// the RA for the caller will be at ESP+4
	//mycerr << "OK I can handle this..." << std::endl;
	ADDRINT ra = *((ADDRINT*)ESP + 1);

	node = itree_search(intervalTree, ra);
	if (node) {
		//mycerr << "Syscall originated in " << node->dll_name
		//		 << " and would resume at " << ra << std::endl;
		return false;
	}

	mycout << "Syscall likely from program resuming at " << std::hex << ra << std::endl;

	return true;
}

bool checkCallSiteNTDLLWow64(itreenode_t* node, ADDRINT ESP){
	ADDRINT addr = *(ADDRINT*)ESP;
	// if (node->dll_name.find("windows\\syswow64\\ntdll.dll") == string::npos)
	if (addr < ntdllImgStart || addr > ntdllImgEnd) return false;
	
	// black magic: add esp, 4 followed by retn [say 10h] or ret
	// 83 C4 04
	// C2 10 00
	uint8_t bytes[6] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }; // TODO 0 might be fine too
	PIN_SafeCopy(bytes, (void*)addr, 6);
	if (!(bytes[0] == 0x83 && bytes[1] == 0xC4 && bytes[2] == 0x04)) {
		mycerr << "Didn't meet an add esp, 4 but those instead: " <<
			std::hex << (ADDRINT)bytes[0] << " " << (ADDRINT)bytes[1] <<
			" " << (ADDRINT)bytes[2] << " for" << addr << std::endl;
		ASSERT(false, "Check implementation for NTDLL call sites");
		return false;
	}
	
	if (!((bytes[3] == 0xC2 && bytes[5] == 0x00) || bytes[3] == 0xC3)) {
		mycerr << "Didn't meet a retN or ret but those instead: " <<
			std::hex << (ADDRINT)bytes[3] << " " << (ADDRINT)bytes[4] <<
			" " << (ADDRINT)bytes[5] << " for" << addr << std::endl;
		ASSERT(false, "Check implementation for NTDLL call sites");
		return false;
	}

	// the RA for the caller will be at ESP+4
	//mycerr << "OK I can handle this..." << std::endl;
	ADDRINT ra = *((ADDRINT*)ESP + 1);
	//mycerr << "RA should be " << std::hex << ra << std::endl;

	node = itree_search(intervalTree, ra);
	if (node) {
		//mycerr << "Syscall originated in " << node->dll_name
		//		  << " and would resume at " << ra << std::endl;
		return false;
	}
	
	mycout << "Syscall likely from program resuming at " << std::hex << ra << std::endl;
	
	return true;
}

inline VOID retrieveSyscallArgs(ADDRINT number, syscallinfo &scinfo, CONTEXT *ctx, SYSCALL_STANDARD std, tlsinfo *tdata) {
#if 1
	mycout << "RETRIEVING ARGS FOR SYSCALL " << number << std::endl;
	/*if (syscallIDs[number]) {
		mycout << "SYSCALL NAME SHALL BE " << syscallIDs[number] << std::endl;
	}*/
#endif

	// Return immediately if we have a weird syscall number
	if (number >= MAXSYSCALLS) {
		mycerr << "SYSCALL NUMBER TOO HIGH !" << std::endl;
		scinfo.watched = false;
		return;
	}

	DR::syscall_info_t* info = syscallIDtoInfo[number];

	// Return if info not available
	if (!info) {
		mycerr << "INFO NOT AVAILABLE IN DRSYSCALL " << std::endl;
		scinfo.watched = false;
		return;
	}

	// Just print name if args are UNKNOWN
	if (!info->flags) {
		// unsupported syscall or UNKNOWN type for args
		// #define UNKNOWN 0 in drsyscall.cpp
		mycout << "SYSCALL HAS ARGS MARKED WITH UNKNOWN" << std::endl;

		// Printing name for unsupported system call
		if (info->name) {
			printSyscallName(info->name, false, tdata);
		}

		scinfo.watched = false;
		return;
	}
	
	// Print name for supported system call
	tdata->callnumber += 1;
	printSyscallName(info->name, true, tdata);
	mycout << "SYSCALL IS " << info->name << std::endl;
	
	// Secondary table processing here
	if (TEST(SYSINFO_SECONDARY_TABLE, info->flags)) {
		mycout << "PROCESSING OF SECONDARY TABLE NEEDED" << std::endl;

		uint code;
		int arr_size;

		if (info->arg_count < 1) {
			mycerr << "Error: at least 1 arg for code" << std::endl;
			scinfo.watched = false;
			return;
		}

		/* The param # to use for the code is stored in the 1st entry
		* (the entries are not otherwise used, as we'll switch to the
		* other table).
		*/

		code = PIN_GetSyscallArgument(ctx, std, info->arg[0].param);
		arr_size = (info->num).secondary;

		if (code >= arr_size) { // TODO check what to do for cast warning
			mycerr << "Code for secondary table out of bounds" << std::endl;
			scinfo.watched = false;
			return;
		}

		DR::syscall_info_t* sec_syscall = ((DR::syscall_info_t*)(info->num_out)) + code;
		info = sec_syscall;
	}

	scinfo.sysinfo = info;
	size_t numArgs = info->arg_count, last = -1;
	// i is the ordinal idx, j iterates over the array
	for (size_t i = 0, j = 0; i < numArgs; ) {
		DR::sysinfo_arg_t* arg = &info->arg[j];
		if (arg->param == last) {
			j++;
			continue;
		}
		last = i;
		scinfo.args[i] = PIN_GetSyscallArgument(ctx, std, i);

		// Arg printing here
		printSyscallArg(arg, scinfo.args[i], tdata, true);

		++i;
	}
	scinfo.watched = true;
}


VOID TRACER_SyscallEntry(THREADID tid, CONTEXT *ctx, SYSCALL_STANDARD std) {
	BaseStats::sysCallsAll++;
	LOG_TIME_ENTRY();
	ADDRINT ESP = PIN_GetContextReg(ctx, REG_STACK_PTR);
	itreenode_t* node = itree_search(intervalTree, *(ADDRINT*)ESP);
	std::string &dllName = *(std::string*)(node->data);
	if (node) {
		//mycout << "Leaving out syscall since caller is in " << node->dll_name << " at " << *(ADDRINT*)ESP << std::endl;
		if (isWow64) {
			if (!checkCallSiteNTDLLWow64(node, ESP)) {
				BaseStats::sitesForIntSysCalls[dllName]++;
				LOG_TIME_EXIT(BaseStats::entrySysDiscard);
				return;
			}
		}
		else {
			if (!checkCallSiteNTDLLWin32(node, ESP)) {
				BaseStats::sitesForIntSysCalls[dllName]++;
				LOG_TIME_EXIT(BaseStats::entrySysDiscard);
				return;
			}
		}
		
	}

	// fetch TLS
	tlsinfo *tls = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
	syscallinfo &scinfo = tls->syscall;

	// get syscall info
	ADDRINT syscall_number = PIN_GetSyscallNumber(ctx, std);
	if (syscall_number == 0xFFFFFFFF) {
		mycerr << "Possible int 2d case" << std::endl;
		scinfo.watched = false; // possibly redundant (better safe than sorry though)
		LOG_TIME_EXIT(BaseStats::entrySysDiscard); // well, shouldn't really count
		return;
	}
	mycout << "Syscall number " << std::hex << syscall_number << std::endl;
	scinfo.ordinal = syscall_number;

	BaseStats::sysCalls++;

	// populate arguments and set scinfo.watched
	retrieveSyscallArgs(syscall_number, scinfo, ctx, std, tls);
	LOG_TIME_EXIT(BaseStats::entrySys);
}

VOID TRACER_SyscallExit(THREADID tid, CONTEXT *ctx, SYSCALL_STANDARD std) {
	LOG_TIME_ENTRY();
	tlsinfo *tls = static_cast<tlsinfo*>(PIN_GetThreadData(TRACER_tls_key, tid));
	syscallinfo &scinfo = tls->syscall;
	if (!scinfo.watched) {
		// TODO we have some weird cases like the code cache
		/*
		ADDRINT ESP = PIN_GetContextReg(ctx, REG_STACK_PTR);
		node_t* node = bintree_search(intervalTree, *(ADDRINT*)ESP);
		if (!node) mycerr << "RETURNING FROM UNWATCHED SYSCALL " << *(ADDRINT*)ESP << std::endl;
		*/
		LOG_TIME_EXIT(BaseStats::exitSysDiscard);
		return; // IS THIS POSSIBLE THOUGH? CONTEXT_CHANGE_CALLBACK?
	}

	
	mycout << "LEAVING FROM SYSCALL " << std::hex << scinfo.ordinal << std::endl;
	DR::syscall_info_t* info = (DR::syscall_info_t*)scinfo.sysinfo;

	//--Check error number to determine whether system call has succeeded or not
	int errnumber = PIN_GetSyscallErrno(ctx, std);
	if (!errnumber) {
		LOG_BISHOP(tls, "\t%u \tsucceeded -- ntdll!%s =>\n", tls->callnumber, info->name);
	}
	else LOG_BISHOP(tls, "\t%u \tfailed (error=0x%x) -- ntdll!%s =>\n", tls->callnumber, errnumber, info->name);

	//--Print return value
	DR::sysinfo_arg_t* ret = (DR::sysinfo_arg_t*)malloc(sizeof(DR::sysinfo_arg_t));

	ret->param = -1;
	ret->size = sizeof(ADDRINT);
	ret->type_name = NULL;
	ret->flags = DRSYS_PARAM_RETVAL | SYSARG_INLINED;
	ret->misc = info->return_type;

	printSyscallArg(ret, PIN_GetSyscallReturn(ctx, std), tls, false);

	// Print args
	size_t numArgs = info->arg_count, last = -1;
	// i is the ordinal idx, j iterates over the array
	for (size_t i = 0, j = 0; i < numArgs; ) {
		DR::sysinfo_arg_t* arg = &info->arg[j];
		if (arg->param == last) {
			j++;
			continue;
		}
		last = i;

		//Print only if output
		if (TEST(SYSARG_WRITE, arg->flags)) {
			// Arg printing here
			printSyscallArg(arg, scinfo.args[i], tls, false);
		}
		++i;

	}

	free(ret);
	scinfo.watched = false; // clear flag
	LOG_TIME_EXIT(BaseStats::exitSys);
}


typedef NTSYSAPI W::PIMAGE_NT_HEADERS NTAPI _RtlImageNtHeader(
	W::PVOID ModuleAddress
);

VOID TRACER_SyscallInit() {
	W::IsWow64Process(W::GetCurrentProcess(), &isWow64); // TODO use different code

	W::HMODULE image = W::GetModuleHandle("ntdll");

	// credits https://www.oipapio.com/question-547093 as
	// I couldn't use GetModuleInformation from psapi.dll
	// (unless I wanted to load the library dynamically)
	_RtlImageNtHeader* fun = (_RtlImageNtHeader*)W::GetProcAddress(image, "RtlImageNtHeader");
	W::PIMAGE_NT_HEADERS headers = fun(image);

	ntdllImgStart = (ADDRINT)headers->OptionalHeader.ImageBase; // == (ADDRINT)image
	ntdllImgEnd = ntdllImgStart + headers->OptionalHeader.SizeOfImage;

	//mycout << "ntdll starts at " << std::hex << ntdllImgStart << std::endl;
	//mycout << "ntdll ends at " << std::hex << ntdllImgEnd << std::endl;

	std::map<std::string, DR::syscall_info_t*> fastLookupMap; // you wish :-)
	for (size_t i = 0; i < syscall_ntdll_info_size; ++i) {
		DR::syscall_info_t* info = &syscall_ntdll_info[i];
		fastLookupMap.insert(std::pair<std::string, DR::syscall_info_t*>(std::string(info->name), info));
	}

	std::map<std::string, DR::syscall_info_t*>::iterator end = fastLookupMap.end();
	for (size_t i = 0; i < MAXSYSCALLS; i++) {
		CHAR* name = syscallIDs[i];
		if (!name) continue;
		std::string str(name);
		std::map<std::string, DR::syscall_info_t*>::iterator it = fastLookupMap.find(str);
		if (it == end) {
			mycerr << "CANNOT FIND SYSCALL INFO FOR " << str << std::endl;
			// TODO drop syscall or check for NULL in callback?
		}
		else {
			syscallIDtoInfo[i] = it->second;
		}
	}

}