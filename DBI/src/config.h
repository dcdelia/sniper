#pragma once
#include "pin.H"

#define MAXSYSCALLS		0x200	// this should be enough for Win7 and Win10

// for synchronizing instrumentation insertion
extern PIN_MUTEX mutex;

// hard-wired values for knobs can be useful during testing
#define USE_KNOBS 0

#define USE_SCZTOON	0 // SCZ logging facility for statistics (used for the paper)
#if USE_SCZTOON
#define SIZE_SCZTOON	5*1024*1024	// 5 MB (TODO reduce with many threads?)
#define SIZE_SCZ		2048		// max bytes written at a time
#endif

#if USE_KNOBS
// DBI anti-evasion
extern BOOL _nxKnob;
extern BOOL _paranoidKnob;
extern BOOL _rwKnob;
extern BOOL _leakKnob;
#else
// DBI anti-evasion (for now off by default)
#define _paranoidKnob	false
#define _nxKnob			false
#define _rwKnob			false
#define _leakKnob		false
#endif