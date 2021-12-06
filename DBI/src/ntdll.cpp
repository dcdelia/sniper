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
			// does the signature match one of these cases? https://gist.github.com/wbenny/b08ef73b35782a1f57069dff2327ee4d
			// 1:   > WoW64 on Windows XP and Windows 7
			//      mov eax, syscall_number ; mov ecx, imm32 ; lea edx, [esp+04h] ; call fs:[C0h]
			//		mov eax, syscall_number ; xor ecx, ecx ; lea edx, [esp+04h] ; call fs:[C0h]
			//		B8 ?? ?? ?? ?? ; [33 C9 | B9 ?? ?? ?? ??] ; 8D 54 24 04 ; 64 FF 15 C0 00 00 00
			//		epilogue is add esp, 4 ; retn [??] on Windows 7 while XP has no add
			//		83 C4 04 ; [C2 ?? ?? | C3]
			// 2:   > WoW64 on Windows 8 and 8.1 - TODO untested, need a 64-bit Win8 VM :-)
			//		mov eax, syscall_number; call large dword ptr fs:0C0h ; retn [??] 
			//		B8 ?? ?? ?? ?? ; 64 FF 15 C0 00 00 00 ; [C2 ?? ?? | C3]  
			// 3:   > WoW64 on Windows 10
			//		mov eax, syscall_number; mov edx, imm32; call edx ; retn [??]
			//		B8 ?? ?? ?? ?? ; B9 ?? ?? ?? ??] ; FF D2 ; [C2 ?? ?? | C3]  
			// 4:   > x86 - Windows XP and Windows 7
			//      mov eax, syscall_number ; mov edx, 0x7ffe0300 ; call dword near [edx] ; retn [??] for XP SP3 or 7
			//		mov eax, syscall_number ; mov edx, 0x7ffe0300 ; call edx ; retn [??] for XP before SP3
			//      B8 ?? ?? ?? ?? ; BA 00 03 FE 7F; [FF D2 | FF 12] ; [C2 ?? ?? | C3]
			// 5:	> x86 - Windows 8, 8.1, 10 - TODO untested, need a 32-bit Win8/Win10 VM :)
			//		mov eax, syscall_number ; call $+?? ; retn [??] ; mov edx, esp ; sysenter ; ret
			//		B8 ?? ?? ?? ?? ; E8 ?? 00 00 00 ; [C2 ?? ?? | C3] ; 8B D4 ; 0F 34 ; C3
			if (addr[0] == 0xb8 && (addr[5] == 0xB9		// case 1 and 3
									|| addr[5] == 0x33	// case 1
									//|| addr[5] == 0x64	// case 2 - untested!
									|| addr[5] == 0xBA	// case 4
									//|| addr[5] == 0xE8  // case 5 - untested!
									)) {
				// on Windows 10 the syscall ordinal will be in the two least significant bytes
				// while the remaining two may be non-zero; we ignore them by reading an UINT16
				UINT16 syscall_number = *(UINT16*)(addr + 1);
				if (!syscallIDs[syscall_number] || (!memcmp(name, "Nt", 2) && !memcmp(name, "Zw", 2))) {
					syscallIDs[syscall_number] = strdup(name);
				}
			}
		}
	}

}