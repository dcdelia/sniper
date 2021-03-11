#pragma once
#include "../config.h"
#include "pyrebox.h"

#include <string>

typedef std::map<std::string, libcall_info_t*> dllNameMap;
typedef std::map<std::string, dllNameMap> dllNameMapOfMap;
typedef std::map<std::string, lib_const_values_t*> enumNameMap;

extern dllNameMapOfMap dllArgsMapOfMap;
extern enumNameMap enumMap;

VOID TRACER_InitPrototypes();