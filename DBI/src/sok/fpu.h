// The following code is borrowed from our sok-dbi-security
// Source: https://github.com/season-lab/sok-dbi-security

#pragma once
#include "pin.H"

#include "logging.h"

#define FPUIPOFFSET 0xc

VOID FPU_Init();
VOID FPU_InstrumentINS(INS ins);
VOID PIN_FAST_ANALYSIS_CALL FPU_UpdateFPUStatus(ADDRINT regValue, ADDRINT op);
ADDRINT PIN_FAST_ANALYSIS_CALL FPU_UpdateLastFpuIns(ADDRINT addr);
