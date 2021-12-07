#include "../config.h"
#include "../tracer.h"
#include "../sysprinter.h"
#include "../logger.h"
#include "prototypes.h"
#include "pyrebox.h"

dllNameMapOfMap dllArgsMapOfMap;
enumNameMap enumMap;

typedef struct {
	libcall_info_t* arr;
	size_t entries;
	char* dllName;
} supportedLibs;

supportedLibs myLibs[] = {
	{ Kernel32_info, Kernel32arraySize, "kernel32.dll" },
	{ KernelBase_info, KernelBasearraySize, "kernelbase.dll" },
	{ Gdi32_info, Gdi32arraySize, "gdi32.dll" },
	{ User32_info, User32arraySize, "user32.dll" },
	{ OleAut32_info, OleAut32arraySize, "oleaut32.dll" },
	{ AdvAPI32_info, AdvAPI32arraySize, "advapi32.dll" },
	{ Crypt32_info, Crypt32arraySize, "crypt32.dll" },
	{ IPHlpApi_info, IPHlpApiarraySize, "iphlpapi.dll" },
	{ Ole32_info, Ole32arraySize, "ole32.dll" },
	{ shell32_info, shell32arraySize, "shell32.dll" },
	{ WinInet_info, WinInetarraySize, "wininet.dll" },
	{ WS2_32_info, WS2_32arraySize, "ws2_32.dll" },
};


VOID TRACER_InitPrototypes() {
	// capolavori del cardinale che programma, o forse del germano vescovo?
	for (size_t i = 0; i < sizeof(myLibs) / sizeof(supportedLibs); ++i) {
		supportedLibs &lib = myLibs[i];
		mycerr << "PROCESSING " << lib.dllName << " ("
			   << std::dec << lib.entries << " entries)" << std::endl;
		
		std::pair<dllNameMapOfMap::iterator, bool> ret = dllArgsMapOfMap.insert(std::pair<std::string, dllNameMap>(lib.dllName, dllNameMap()));
		dllNameMap &map = ret.first->second;

		for (size_t j = 0; j < lib.entries; ++j) {
			map[std::string(lib.arr[j].func_name)] = &lib.arr[j];
		}
	}

	// Init map of constants del cardinale
	for (unsigned i = 0; i < EnumarraySize; i++) {
		enumMap.insert(std::make_pair(libcalls_const_struct_array[i].enum_name, libcalls_const_struct_array[i].enum_values));
	}

	// Init map of enums for system calls
	size_t mapSize = get_const_arrays_num();
	for (size_t i = 0; i < mapSize; i++) {

		const_values_t *named_consts = const_struct_array[i];
		mapOfConsts.insert(std::make_pair(named_consts[0].const_name, named_consts));

	}
}