#include "config.h"
#include "tracer.h"
#include "logger.h"

#include <fstream>

#if TRACER_LOGTOFILE
std::ofstream mycout("scztoon.txt");
#endif

namespace W {
	#include <windows.h>
}

namespace BaseStats {
	//UINT64 rdtscElapsed = 0;
	timer entryApi = { 0 }, entryApiDiscard = { 0 }, exitApi = { 0 }, exitApiDiscard = { 0 };
	timer entrySys = { 0 }, entrySysDiscard = { 0 }, exitSys = { 0 }, exitSysDiscard = { 0 };

	UINT32 apiCalls = 0, apiCallsAll = 0, apiCallsTail = 0;
	UINT32 sysCalls = 0, sysCallsAll = 0;

#if LOG_ARG_COUNTS
	std::map<libcall_info_t*, UINT32> prototypes;
	UINT32 apiCallsNoArgs = 0;
	UINT32 argApiCalls = 0, argOutApiCalls = 0;
	//UINT32 argSysCalls = 0, argOutSysCalls = 0;
	//UINT32 sptch = 0;
#endif

	std::map<const char*, UINT32> sitesForTailApiCalls;
	std::map<std::string, UINT32> sitesForIntApiCalls;
	std::map<std::string, UINT32> sitesForIntSysCalls;
	std::map<const char*, UINT32> intSysCallMap;

	std::map<ADDRINT, UINT32> emptyStackAtSite; // for debugging

	void PIN_FAST_ANALYSIS_CALL countApiCall() {
		apiCallsAll++;
	}

	inline void printStatsAux(char* str, W::LARGE_INTEGER &khz, timer &entry, timer &entryDiscard,
								timer &exit, timer &exitDiscard, UINT32 &calls, UINT32 &allCalls) {
		#define getS(x)			((x)/(double)khz.QuadPart)
		#define getSt(x)		getS(x.QuadPart)
		#define getAvgU(x,y)	(getS(x)/(double)(y)*(double)1000000)
		#define getAvgUt(x,y)	(getSt(x)/(double)(y)*(double)1000000)

		UINT64 qpcTotal = entry.QuadPart + entryDiscard.QuadPart
						  + exit.QuadPart + exitDiscard.QuadPart;
		//mycout << "Recorded QPC events (timeTotal): " << std::dec << qpcTotal << std::endl;
		double timeTotal = getS(qpcTotal);
		UINT32 discarded = allCalls - calls;

		mycout << "Total time for " << str << "calls: " << timeTotal << std::endl;
		mycout << "Avg (us, total/all): " << getAvgU(qpcTotal, allCalls) << std::endl;
		mycout << "Avg (us, total/recorded): " << getAvgU(qpcTotal, calls) << std::endl;

		mycout << "Recorded " << str << "calls: " << std::dec << calls << std::endl;
		mycout << "Discarded " << str << "calls: " << std::dec << discarded << std::endl;

		mycout << "Time for recorded: " << getS(entry.QuadPart + exit.QuadPart) << std::endl;
		mycout << "Time for discard: " << getS(entryDiscard.QuadPart + exitDiscard.QuadPart) << std::endl;

		mycout << "Time for " << str << "Entry-recorded: " << getSt(entry) << std::endl;
		mycout << "Time for " << str << "Exit-recorded: " << getSt(exit) << std::endl;

		mycout << "Time for " << str << "Entry-discard: " << getSt(entryDiscard) << std::endl;
		mycout << "Time for " << str << "Exit-discard: " << getSt(exitDiscard) << std::endl;

		mycout << "Avg (us, entry-recorded): " << getAvgUt(entry, calls) << std::endl;
		mycout << "Avg (us, exit-recorded): " << getAvgUt(exit, calls) << std::endl;

		mycout << "Avg (us, entry-discard): " << getAvgUt(entryDiscard, discarded) << std::endl;
		mycout << "Avg (us, exit-discard): " << getAvgUt(exitDiscard, discarded) << std::endl;
	}

	void printStats() { 
		mycout << std::endl << std::endl << "***** REPORT FROM THE BISHOP *****" << std::endl;

		mycout << std::endl << "=====" << std::endl;
		mycout << "Debug" << std::endl;
		mycout << "=====" << std::endl;

		if (emptyStackAtSite.empty()) {
			mycout << "Nothing to log here." << std::endl;
		}
		else {
			mycout << "Possibly missed call(s) at: " << std::endl;
			for (std::map<ADDRINT, UINT32>::iterator it = emptyStackAtSite.begin(),
				end = emptyStackAtSite.end(); it != end; ++it) {
				mycout << std::hex << it->first << " [" << std::dec << it->second << "]" << std::endl;
			}
		}

		mycout << std::endl << "===============" << std::endl;
		mycout << "Call information" << std::endl;
		mycout << "===============" << std::endl;
		mycout << "Syscalls: " << std::dec << sysCalls << std::endl;
		mycout << "Syscalls (all): " << std::dec << sysCallsAll << std::endl;

		for (std::map<std::string, UINT32>::iterator it = sitesForIntSysCalls.begin(),
			end = sitesForIntSysCalls.end(); it != end; ++it) {
			if (it->second == 0) continue;
			mycout << "Internal syscalls with site in " << it->first << ": "
				   << it->second << std::endl;
		}

		mycout << "Libcalls: " << std::dec << apiCalls << std::endl;
		mycout << "Libcalls (tail): " << std::dec << apiCallsTail << std::endl;
		mycout << "Libcalls (all): " << std::dec << apiCallsAll << std::endl;

		for (std::map<std::string, UINT32>::iterator it = sitesForIntApiCalls.begin(),
			end = sitesForIntApiCalls.end(); it != end; ++it) {
			if (it->second == 0) continue;
			mycout << "Internal libcalls with site in " << it->first << ": "
				   << std::dec << it->second <<  std::endl;
		}

		for (std::map<const char*, UINT32>::iterator it = sitesForTailApiCalls.begin(),
			end = sitesForTailApiCalls.end(); it != end; ++it) {
			if (it->second == 0) continue;
			mycout << "Tail libcalls with site in " << it->first << ": "
				   << std::dec << it->second << std::endl;
		}

		#if LOG_ARG_COUNTS
		UINT32 apiWithNoArgs = 0, apiWithArgs = 0, apiWithOutOrInOutArgs = 0;
		UINT32 scz0 = 0, scz1 = 0, scz2 = 0;
		for (std::map<libcall_info_t*, UINT32>::iterator it = prototypes.begin(),
				end = prototypes.end(); it != end; ++it) {
			scz0 += it->second;
			int numArgs = it->first->argnum;
			if (numArgs > 0) {
				apiWithArgs++;
				scz1 += numArgs * it->second;
				bool marco = false;
				for (int idx = 1; idx <= numArgs; ++idx) {
					libcall_arg_info_t &argInfo = it->first->lib_args[idx];
					// hard-wired constants or Windows headers petrify it :)
					if (argInfo.in_out_flag == 2 || argInfo.in_out_flag == 1) { 
						marco = true;
						scz2 += it->second;
					}
				}
				if (marco) apiWithOutOrInOutArgs++;
 			}
			else apiWithNoArgs++;
		}

		double avgNumArgs = argApiCalls / (double)apiCalls;
		double avgNumOutArgs = argOutApiCalls / (double)apiCalls;
		mycout << std::endl << "===============" << std::endl;
		mycout << "Argument analysis" << std::endl;
		mycout << "===============" << std::endl;

		mycout << "Number of recorded calls: " << apiCalls << std::endl;
		//mycout << "Weird SCZ: " << sptch << std::endl;
		mycout << "Total number of args: " << argApiCalls << std::endl;
		mycout << "Total number of [IN]OUT args: " << argOutApiCalls << std::endl;
		mycout << "SCZ 012: " << scz0 << " " << scz1 << " " << scz2 << std::endl;
		mycout << "Avg number of args: " << avgNumArgs << std::endl;
		mycout << "Avg number of [IN]OUT args: " << avgNumOutArgs << std::endl;

		mycout << "Distinct APIS with no args: " << apiWithNoArgs << std::endl;
		mycout << "Distinct APIS with args: " << apiWithArgs << std::endl;
		mycout << "Distinct APIs with [IN]OUT args: " << apiWithOutOrInOutArgs << std::endl;
		double frac1 = apiWithOutOrInOutArgs / (double)(apiWithArgs + apiWithNoArgs);
		double frac2 = apiWithOutOrInOutArgs / (double)(apiWithArgs);
		mycout << "Fractions of distinct APIs with [IN]OUT args: " << frac1 << " " << frac2 << std::endl;
		#endif

		mycout << std::endl << "===============" << std::endl;
		mycout << "Time information" << std::endl;
		mycout << "===============" << std::endl;

		W::LARGE_INTEGER khz;
		W::QueryPerformanceFrequency(&khz);
		//mycout << "Frequency: " << khz.QuadPart << std::endl;

#if USE_RDTSCP
		mycout << "Recorded cycles: " << rdtscElapsed << std::endl;
		mycout << "Apx time: " << rdtscElapsed/(double)khz.QuadPart << std::endl;
		// this is the wrong way to go...
#else
		printStatsAux("lib", khz, entryApi, entryApiDiscard, exitApi,
						exitApiDiscard, apiCalls, apiCallsAll);
		mycout << std::endl;

		printStatsAux("sys", khz, entrySys, entrySysDiscard, exitSys,
						exitSysDiscard, sysCalls, sysCallsAll);
#endif

	}
};

#if USE_SCZTOON
inline BOOL scztoonIsFull(tlsinfo* tdata) {
	return tdata->drops+SIZE_SCZ >= SIZE_SCZTOON;
}

void scztoonToDisk(tlsinfo* tdata) {
	PIN_LockClient();
	if (!tdata->logfile) goto EXIT;
	int ret = fwrite(tdata->scztoon, tdata->drops, 1, tdata->logfile);
	if (ret != 1) {
		mycerr << "Cannot empty scztoon to file: " << errno << std::endl;
	}
EXIT:
	PIN_UnlockClient();
	tdata->drops = 0;
}
#endif

VOID TRACER_ThreadInitLogger(THREADID tid, tlsinfo* tdata) {
	OS_MkDir(LOGPATH, 755); // dirty hack

	char buf[256];
	sprintf(buf, LOGPATH LOGNAME, tid); // sorry I know macro concatenation is ugly :-)
	tdata->logfile = fopen(buf, "wb");
	if (!tdata->logfile) mycerr << "CANNOT CREATE LOGFILE" << std::endl;

#if USE_SCZTOON
	tdata->scztoon = (char*)malloc(SIZE_SCZTOON);
	tdata->drops = 0;
#endif
}

VOID TRACER_ThreadExitLogger(THREADID tid, tlsinfo* tdata) {
#if USE_SCZTOON
	// flush buffer to disk
	mycout << "EMPTYING SCZTOON FOR EXITING THREAD " << tid << std::endl;
	if (tdata->drops > 0) scztoonToDisk(tdata);
	free(tdata->scztoon); // for now we do it here
#endif

	if (tdata->logfile) fclose(tdata->logfile);
}

#if USE_SCZTOON
VOID logFun(tlsinfo* tdata, const char* fmt, ...) {
	if (scztoonIsFull(tdata)) {
		scztoonToDisk(tdata);
	}

	va_list args;
	va_start(args, fmt);
	int ret = vsnprintf(tdata->scztoon+tdata->drops, SIZE_SCZ, fmt, args);
	va_end(args);

	if (ret > 0) tdata->drops += ret;
}
#else
VOID logFun(tlsinfo* tdata, const char* fmt, ...) {
	if (!tdata->logfile) return; // TODO shall we quit Pin instead?
	va_list args;
	va_start(args, fmt);
	vfprintf(tdata->logfile, fmt, args);
	va_end(args);

	fflush(tdata->logfile);
}
#endif