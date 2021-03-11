#include "config.h"
#include "pin.H"

namespace W {
#include "windows.h"
}

CHAR* syscallIDs[MAXSYSCALLS] = { 0 };

/**********************************************************

This function parses the ntdll library in order to create
an array for syscalls, taking syscall number as index of
the array and name of syscall as cell content.

***********************************************************/

VOID EnumSyscalls() {

	unsigned char *image = (unsigned char *)W::GetModuleHandle("ntdll");
	W::IMAGE_DOS_HEADER *dos_header = (W::IMAGE_DOS_HEADER *) image;
	W::IMAGE_NT_HEADERS *nt_headers = (W::IMAGE_NT_HEADERS *)(image + dos_header->e_lfanew);
	W::IMAGE_DATA_DIRECTORY *data_directory = &nt_headers->
		OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT];
	W::IMAGE_EXPORT_DIRECTORY *export_directory = (W::IMAGE_EXPORT_DIRECTORY *)(image + data_directory->VirtualAddress);
	// RVAs from image base
	W::DWORD *address_of_names = (W::DWORD*)(image + export_directory->AddressOfNames);
	W::DWORD *address_of_functions = (W::DWORD*)(image + export_directory->AddressOfFunctions);
	UINT16 *address_of_name_ordinals = (W::UINT16*)(image + export_directory->AddressOfNameOrdinals);
	// NumberOfNames can be 0: in that case the module will export by ordinal only 
	W::DWORD number_of_names = MIN(export_directory->NumberOfFunctions, export_directory->NumberOfNames);
	size_t ntcalls = 0, zwcalls = 0;

	for (W::DWORD i = 0; i < number_of_names; i++) {
		// AddressOfNameOrdinals contains the ordinals associated with the function names in AddressOfNames
		const char *name = (const char *)(image + address_of_names[i]);
		// AddressOfFunctions points to an array of RVAs of the functions/symbols in the module
		unsigned char *addr = image + address_of_functions[address_of_name_ordinals[i]];
		if (!memcmp(name, "Zw", 2) || !memcmp(name, "Nt", 2)) {
			// does the signature match one of these cases?
			// 1:   mov eax, syscall_number ; mov ecx, some_value
			// 2:   mov eax, syscall_number ; xor ecx, ecx
			// 3:   mov eax, syscall_number ; mov edx, 0x7ffe0300
			// TODO remember to add one more case when we go for Windows 8+
			if (addr[0] == 0xb8 && (addr[5] == 0xb9 || addr[5] == 0x33 || addr[5] == 0xba)) {
				ADDRINT syscall_number = *(UINT32*)(addr + 1);
				if (!syscallIDs[syscall_number] || !memcmp(name, "Nt", 2)) {
					syscallIDs[syscall_number] = strdup(name);
				}
			}
		}
	}

}