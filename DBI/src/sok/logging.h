// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#pragma once
#include "pin.H"

#define LOGPATH "C:\\pin311\\"
#define LOGNAME "sok-dbi.log"
#define LOG_BUILD 1

#define LOG_AR(fmt, ...) \
	do { \
		if (!LOG_BUILD) break; \
		SokLogging::logMain(fmt"\n", __VA_ARGS__); \
	} while (0)


class SokLogging {

public:
	static FILE* mainLog;

	static VOID Init();
	static VOID Shutdown();
	static VOID logMain(const char * fmt, ...);

};