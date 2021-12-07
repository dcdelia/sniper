#pragma once
#include "pin.H"
#include "itree.h"
#include "prototypes/prototypes.h"
#include <set>

// including "syscalls/drsyscall.h" would fuck up all the IN/OUT macros
#define MAX_ARGS_IN_ENTRY	18

#define SPILL_REGISTER		0 // TODO if we want more performance (possibly?)
#define TRACE_PREDECESSOR	0 // for debugging purposes
#define TRACE_ENTRY_INS		1 // instead of using RTN_InsertCall()
#define PRINT_LIB_CALLS		0 // to print which calls within libraries get discarded
#define PRINT_TAIL_CALLS	1 // to print which internal tail calls get discarded

// type declarations
typedef struct {
	ADDRINT retAddr;
	void*	data;
} retObj;

#ifdef __LP64__
typedef union {
	struct {
		ADDRINT rcx;
		ADDRINT rdx;
		ADDRINT r8;
		ADDRINT r9;
	};
	ADDRINT regs[4];
} outregs_t;
#endif

typedef struct {
	ADDRINT	ra; // == *esp
	ADDRINT	esp;
	void* data;
#ifdef __LP64__
	outregs_t outRegs;
#endif
} callinfo;

typedef std::vector<callinfo> callstack;

typedef struct {
	bool watched;
	ADDRINT ordinal;
	//std::vector<ADDRINT> args;
	ADDRINT args[MAX_ARGS_IN_ENTRY];
	void* sysinfo;
} syscallinfo;

typedef struct {
	callstack cstack;
	syscallinfo syscall;
	FILE* logfile;
	uint callnumber;
#if USE_SCZTOON
	char *scztoon; // buffer for logging
	UINT32 drops;
#endif
#if TRACE_PREDECESSOR
	ADDRINT curEIP;
	ADDRINT lastEIP;
#endif
} tlsinfo; // for TLS/spilled REG

// DLL parsing

typedef struct exportEntry {
	char* name;
	ADDRINT rva;
	bool entryInstrumented;
	libcall_info_t* prototype;
	const char* dllPath;

	// not having unordered sets is so annoying...
	bool operator <(const exportEntry& e) const	{
		return rva < e.rva;
	}

	exportEntry(char* name, ADDRINT rva, bool entryInstrumented, libcall_info_t* prototype, const char* dllPath) {
		this->name = name;
		this->rva = rva;
		this->entryInstrumented = entryInstrumented;
		this->prototype = prototype;
		this->dllPath = dllPath;
	}
} exportEntry;

typedef std::vector<exportEntry*> dllEntryList;

typedef struct {
	std::string dllPath;
	std::string shortName;
	dllEntryList entries;
} monitoredDLL;


// shared data
extern TLS_KEY TRACER_tls_key;
extern itreenode_t *intervalTree;
extern std::vector<retObj> pendingRets;
extern std::map < ADDRINT, const char*> retToDll;

// exports.cpp
VOID parseExportTable(const char* dllPath, ADDRINT baseAddress, dllEntryList &set);

// image.cpp
extern std::set<ADDRINT> instrumentedRAs;
VOID TRACER_LoadImage(IMG img);
VOID TRACER_UnloadImage(IMG img);

// init.cpp
VOID TRACER_Init();
VOID TRACER_InitializeTLS(THREADID tid);
VOID TRACER_CloseThread(THREADID tid);

// ins.cpp
VOID TRACER_Instruction(INS ins);

// logger.cpp
VOID TRACER_ThreadInitLogger(THREADID tid, tlsinfo* tdata);
VOID TRACER_ThreadExitLogger(THREADID tid, tlsinfo* tdata);

// syscalls.cpp
VOID TRACER_SyscallEntry(THREADID tid, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID TRACER_SyscallExit(THREADID tid, CONTEXT *ctx, SYSCALL_STANDARD std);
VOID TRACER_SyscallInit();