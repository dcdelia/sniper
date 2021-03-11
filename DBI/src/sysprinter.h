// A large fraction of the code here is adapted from drltrace
// Credits: https://github.com/mxmssh/drltrace/
// drltrace is released under BSD 3-Clause License

#pragma once
#include "pin.H"
#include "tracer.h"
#include "logger.h"
#include "argsprinter.h"
#include "syscalls/drsyscall.h"
#include "syscalls/sysenums.h"

const char * const param_type_names[] = {
	"<invalid>",                /* DRSYS_TYPE_INVALID */
	"<unknown>",                /* DRSYS_TYPE_UNKNOWN */
	"void",                     /* DRSYS_TYPE_VOID */
	"bool",                     /* DRSYS_TYPE_BOOL */
	"int",                      /* DRSYS_TYPE_INT */
	"int",                      /* DRSYS_TYPE_SIGNED_INT */
	"unsigned int",             /* DRSYS_TYPE_UNSIGNED_INT */
	"size_t",                   /* DRSYS_TYPE_SIZE_T */
	"HANDLE",                   /* DRSYS_TYPE_HANDLE */
	"NTSTATUS",                 /* DRSYS_TYPE_NTSTATUS */
	"ATOM",                     /* DRSYS_TYPE_ATOM */
	"LCID",                     /* DRSYS_TYPE_LCID */
	"LPARAM",                   /* DRSYS_TYPE_LPARAM */
	"HMODULE",                  /* DRSYS_TYPE_HMODULE */
	"HFILE",                    /* DRSYS_TYPE_HFILE */
	"void *",                   /* DRSYS_TYPE_POINTER */
	"<struct>",                 /* DRSYS_TYPE_STRUCT */
	"char *",                   /* DRSYS_TYPE_CSTRING */
	"wchar_t *",                /* DRSYS_TYPE_CWSTRING */
	"char[]",                   /* DRSYS_TYPE_CARRAY */
	"wchar_t[]",                /* DRSYS_TYPE_CWARRAY */
	"char **",                  /* DRSYS_TYPE_CSTRARRAY */
	"UNICODE_STRING",           /* DRSYS_TYPE_UNICODE_STRING */
	"LARGE_STRING",             /* DRSYS_TYPE_LARGE_STRING */
	"OBJECT_ATTRIBUTES",        /* DRSYS_TYPE_OBJECT_ATTRIBUTES */
	"SECURITY_DESCRIPTOR",      /* DRSYS_TYPE_SECURITY_DESCRIPTOR */
	"SECURITY_QOS",             /* DRSYS_TYPE_SECURITY_QOS */
	"PORT_MESSAGE",             /* DRSYS_TYPE_PORT_MESSAGE */
	"CONTEXT",                  /* DRSYS_TYPE_CONTEXT */
	"EXCEPTION_RECORD",         /* DRSYS_TYPE_EXCEPTION_RECORD */
	"DEVMODEW",                 /* DRSYS_TYPE_DEVMODEW */
	"WNDCLASSEXW",              /* DRSYS_TYPE_WNDCLASSEXW */
	"CLSMENUNAME",              /* DRSYS_TYPE_CLSMENUNAME */
	"MENUITEMINFOW",            /* DRSYS_TYPE_MENUITEMINFOW */
	"ALPC_PORT_ATTRIBUTES",     /* DRSYS_TYPE_ALPC_PORT_ATTRIBUTES */
	"ALPC_SECURITY_ATTRIBUTES", /* DRSYS_TYPE_ALPC_SECURITY_ATTRIBUTES */
	"LOGFONTW",                 /* DRSYS_TYPE_LOGFONTW */
	"NONCLIENTMETRICSW",        /* DRSYS_TYPE_NONCLIENTMETRICSW */
	"ICONMETRICSW",             /* DRSYS_TYPE_ICONMETRICSW */
	"SERIALKEYSW",              /* DRSYS_TYPE_SERIALKEYSW */
	"struct sockaddr",          /* DRSYS_TYPE_SOCKADDR */
	"struct msghdr",            /* DRSYS_TYPE_MSGHDR */
	"struct msgbuf",            /* DRSYS_TYPE_MSGBUF */
	"LARGE_INTEGER",            /* DRSYS_TYPE_LARGE_INTEGER */
	"ULARGE_INTEGER",           /* DRSYS_TYPE_ULARGE_INTEGER */
	"IO_STATUS_BLOCK",          /* DRSYS_TYPE_IO_STATUS_BLOCK */
	"<function>",               /* DRSYS_TYPE_FUNCTION */
	"BITMAPINFO",               /* DRSYS_TYPE_BITMAPINFO */
	"ALPC_CONTEXT_ATTRIBUTES",  /* DRSYS_TYPE_ALPC_CONTEXT_ATTRIBUTES */
	"ALPC_MESSAGE_ATTRIBUTES",  /* DRSYS_TYPE_ALPC_MESSAGE_ATTRIBUTES */
	"T2_SET_PARAMETERS",        /* DRSYS_TYPE_T2_SET_PARAMETERS */
};

extern std::map<std::string, const_values_t*> mapOfConsts;

#define NUM_PARAM_TYPE_NAMES \
    (sizeof(param_type_names)/sizeof(param_type_names[0]))

VOID printSyscallName(const char* name, bool isKnown, tlsinfo *tdata);
VOID printSyscallArg(DR::sysinfo_arg_t* arg, ADDRINT value, tlsinfo *tdata, bool isEntry);