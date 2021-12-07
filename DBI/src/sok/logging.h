// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#pragma once
#include "pin.H"

#define SOK_LOGPATH "C:\\pin319\\" // TODO
#define SOK_LOGNAME "sok-dbi.log"
#define SOK_LOG_BUILD 1

#define SOK_LOG_AR(fmt, ...) \
	do { \
		if (!SOK_LOG_BUILD) break; \
		SokLogging::logMain(fmt"\n", __VA_ARGS__); \
	} while (0)


class SokLogging {

public:
	static FILE* mainLog;

	static VOID Init();
	static VOID Shutdown();
	static VOID logMain(const char * fmt, ...);

};