#pragma once
#include "pin.H"
#include "tracer.h"
#include "logger.h"
#include "prototypes/pyrebox.h"
#include "prototypes/prototypes.h"

// Verbosity
#define VERBOSE_OUTPUT 0

// Debug Mode
#define DEBUG_MODE 0

// Mask testers
#define TEST(mask, var) (((mask) & (var)) != 0)
#define TESTANY(mask, var) (((mask) & (var)) != 0)
#define TESTALL(mask, var) (((mask) & (var)) == (mask))

#define SYSARG_MISC_HAS_TYPE(flags) \
    (TESTANY(SYSARG_COMPLEX_TYPE|SYSARG_INLINED|SYSARG_HAS_TYPE, (flags)))

// Format specifiers
#define PFX "%p"
#define PIFX "0x%x"

// String size
#define STRING_SIZE 256

// Size of chars
#define CHAR_SIZE sizeof(char)
#define WCHAR_SIZE sizeof(wchar_t)

VOID printApiName(const char* exportName, const char* dllName, bool isKnown, tlsinfo* tdata, int stackSize, void* retAddr, ADDRINT* sp);
VOID printApiExecuted(const char* exportName, const char* dllName, bool isKnown, tlsinfo* tdata, int stackSize, ADDRINT sp, int offset);
VOID printArg(tlsinfo* tdata, libcall_arg_info_t &argInfo, ADDRINT argValue, ADDRINT* sp);
VOID printLongRet(tlsinfo* tdata, libcall_arg_info_t &argInfo, ADDRINT EAX, ADDRINT EDX);
VOID printDoubleRet(tlsinfo* tdata, libcall_arg_info_t &argInfo);
