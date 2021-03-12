#pragma once
#include "config.h"
#include <iostream>
#include <fstream>
#include <intrin.h>

#define LOGPATH "C:\\pin315\\sniper\\"
#define LOG_ENABLED		1
#define LOG_ARG_COUNTS	1

#define USE_RDTSCP		0


#define LOG_BISHOP(tdata, fmt, ...) \
	do { \
		if (!LOG_ENABLED) break; \
		logFun(tdata, fmt, __VA_ARGS__); \
	} while (0)

VOID TRACER_ThreadInitLogger(THREADID tid, tlsinfo* tdata);
VOID TRACER_ThreadExitLogger(THREADID tid, tlsinfo* tdata);
VOID logFun(tlsinfo* tdata, const char* fmt, ...);

// logger messages to file or cout
#define TRACER_LOGTOFILE	1
#if TRACER_LOGTOFILE
extern std::ofstream _cout;
#define mycout _cout
#define mycerr _cout
#else
#define mycout std::cout
#define mycerr std::cerr
#endif

typedef union {
	struct {
		UINT32 LowPart;
		UINT32 HighPart;
	} av;
	UINT64 QuadPart;
} timer;

// basic statistics
namespace BaseStats {

#if LOG_ARG_COUNTS
	//extern UINT32 sptch; // unsupported calls logged
	extern UINT32 apiCallsNoArgs;
	extern UINT32 argApiCalls;
	extern UINT32 argOutApiCalls;
	//extern UINT32 argSysCalls;
	//extern UINT32 argOutSysCalls;
	extern std::map<libcall_info_t*, UINT32> prototypes;
#endif

	extern UINT32 apiCalls;
	extern UINT32 apiCallsAll;
	extern UINT32 apiCallsTail;
	extern UINT32 sysCalls;
	extern UINT32 sysCallsAll;

	extern std::map<const char*, UINT32> sitesForTailApiCalls;
	extern std::map<std::string, UINT32> sitesForIntApiCalls;
	extern std::map<std::string, UINT32> sitesForIntSysCalls;
	extern std::map<const char*, UINT32> intSysCallMap;

	extern std::map<ADDRINT, UINT32> emptyStackAtSite;

	void printStats();
	void PIN_FAST_ANALYSIS_CALL countApiCall();

	//extern UINT64 rdtscElapsed;
	extern timer entryApi, entryApiDiscard, exitApi, exitApiDiscard;
	extern timer entrySys, entrySysDiscard, exitSys, exitSysDiscard;

#if USE_RDTSCP
#define LOG_TIME_ENTRY()	UINT64 tStart, tEnd; do { \
								UINT32 hi, lo;\
								__asm { \
									__asm lfence \
									__asm rdtscp \
									__asm lfence \
									__asm mov lo, eax \
									__asm mov hi, edx \
								} \
								tStart = ((UINT64)hi << 32) + lo; \
							} while(0)

#define LOG_TIME_EXIT()	do { \
								UINT32 hi, lo;\
								__asm { \
									__asm lfence \
									__asm rdtscp \
									__asm lfence \
									__asm mov lo, eax \
									__asm mov hi, edx \
								} \
								tEnd = ((UINT64)hi << 32) + lo; \
								if (tEnd > tStart) BaseStats::rdtscElapsed += tEnd-tStart; \
							} while (0)
#else
#define LOG_TIME_ENTRY()	timer tStart, tEnd; do { \
								W::QueryPerformanceCounter((W::LARGE_INTEGER*)&tStart); \
							} while(0)

#define LOG_TIME_EXIT(t)		do { \
								W::QueryPerformanceCounter((W::LARGE_INTEGER*)&tEnd);\
								if (tEnd.QuadPart > tStart.QuadPart) \
									t.QuadPart += tEnd.QuadPart-tStart.QuadPart; \
							} while(0)
#endif

};