// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#include "logging.h"

#include <iostream>

FILE* SokLogging::mainLog;

std::string getCurDateAndTime() {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer, 80, "%Y_%m_%d_%I_%M_%S", timeinfo);
	return std::string(buffer);
}

VOID SokLogging::Init() {	
	std::string path = std::string(SOK_LOGPATH);
	mainLog = fopen(path.append(SOK_LOGNAME).c_str(), "a");
	//SOK_LOG_AR("Starting analysis...");
}

VOID SokLogging::Shutdown() {
	fclose(SokLogging::mainLog);
}

VOID SokLogging::logMain(const char* fmt, ...) {
	if (!SokLogging::mainLog) return; // TODO shall we quit Pin instead?
	va_list args;
	va_start(args, fmt);
	vfprintf(SokLogging::mainLog, fmt, args);
	va_end(args);

	fflush(SokLogging::mainLog);
}
