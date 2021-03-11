#include "config.h"
#include "tracer.h"
#include "logger.h"

namespace W {
#include "windows.h"
}

// credits: valerino (added address extraction and forwarder detection)
// https://github.com/juntalis/dypywin32/blob/master/util/src/dll2def/pe3264h.cpp
// TODO we should extend this other code that parses the file directly
// but requires hardwired offsets for displacements in data structures
// https://stackoverflow.com/a/34552962 (only names, no addresses)

#define MakePtr( cast, ptr, addValue ) (cast)( (W::DWORD_PTR)(ptr) + (W::DWORD_PTR)(addValue))
#define GetImgDirEntryRVA( pNTHdr, IDE ) \
	(pNTHdr->OptionalHeader.DataDirectory[IDE].VirtualAddress)
#define GetImgDirEntrySize( pNTHdr, IDE ) \
	(pNTHdr->OptionalHeader.DataDirectory[IDE].Size)

W::PIMAGE_SECTION_HEADER peGetEnclosingSectionHeader(W::DWORD rva, W::PIMAGE_NT_HEADERS32 pNTHeader);
W::LPVOID peGetPtrFromRVA(W::DWORD rva, W::PIMAGE_NT_HEADERS32 pNTHeader, W::PBYTE imageBase);

// TODO update with code from DeadShot project
VOID parseExportTable(const char* dllPath, ADDRINT baseAddress, dllEntryList &entries) {
	W::HANDLE hSrcFile = W::CreateFile(dllPath, GENERIC_READ, FILE_SHARE_READ,
		NULL, OPEN_EXISTING, 0, NULL);
	W::HANDLE hMapSrcFile = W::CreateFileMapping(hSrcFile, NULL, PAGE_READONLY, 0, 0, NULL);
	W::PBYTE pImageBase = (W::PBYTE)W::MapViewOfFile(hMapSrcFile, FILE_MAP_READ, 0, 0, 0);

	W::PIMAGE_DOS_HEADER dosHeader = (W::PIMAGE_DOS_HEADER)pImageBase;

	// get pointers to 32 and 64 bit versions of the header.
	W::PIMAGE_NT_HEADERS32 pNTHeader = MakePtr(W::PIMAGE_NT_HEADERS32, dosHeader, dosHeader->e_lfanew);
	//W::PIMAGE_NT_HEADERS64 pNTHeader64 = (W::PIMAGE_NT_HEADERS64)pNTHeader;

	if (pNTHeader->OptionalHeader.Magic == IMAGE_NT_OPTIONAL_HDR64_MAGIC) {
		mycerr << "64-BIT HEADER UNSUPPORTED YET" << std::endl;
		return;
	}

	W::PIMAGE_EXPORT_DIRECTORY pExportDir;
	W::PIMAGE_SECTION_HEADER header;
	W::PDWORD pdwFunctions = NULL;
	W::PDWORD pszFuncNames = NULL;
	W::PWORD pwOrdinals = NULL;
	W::DWORD exportsStartRVA, exportsEndRVA;

	exportsStartRVA = GetImgDirEntryRVA(pNTHeader, IMAGE_DIRECTORY_ENTRY_EXPORT);
	exportsEndRVA = exportsStartRVA + GetImgDirEntrySize(pNTHeader, IMAGE_DIRECTORY_ENTRY_EXPORT);

	header = peGetEnclosingSectionHeader(exportsStartRVA, pNTHeader);
	if (!header) {
		mycerr << "COULD NOT FIND EXPORTS HEADER IN PE!" << std::endl;
		return;
	}

	pExportDir = (W::PIMAGE_EXPORT_DIRECTORY)peGetPtrFromRVA(exportsStartRVA, pNTHeader, pImageBase);
	pdwFunctions = (W::PDWORD)peGetPtrFromRVA(pExportDir->AddressOfFunctions, pNTHeader, pImageBase);
	pwOrdinals = (W::PWORD)peGetPtrFromRVA(pExportDir->AddressOfNameOrdinals, pNTHeader, pImageBase);
	pszFuncNames = (W::PDWORD)peGetPtrFromRVA(pExportDir->AddressOfNames, pNTHeader, pImageBase);
	if (!pExportDir || !pdwFunctions || !pwOrdinals || !pszFuncNames) {
		mycerr << "SOME PE FIELDS ARE JUST NOT OKAY!" << std::endl;
		return;
	}

	mycout << "Number of exports found in " << dllPath << ": "
		   << std::dec << pExportDir->NumberOfFunctions << std::endl;
	size_t retrieved = 0, forwarders = 0;

	W::DWORD fixAddr = header->VirtualAddress - header->PointerToRawData;
	//if (fixAddr) mycerr << "AIUTAMI CARDINALE CON GLI OFFSET: " << std::hex << fixAddr << std::endl;
	for (size_t j = 0; j < pExportDir->NumberOfNames; ++j) {
		++retrieved;
		//W::DWORD ordinal = pwOrdinals[j];
		W::DWORD addr_name = pszFuncNames[j];
		W::DWORD rva = pdwFunctions[pwOrdinals[j]];
		W::PCHAR name = (W::PCHAR)(pImageBase + addr_name - fixAddr);
		//mycerr << std::dec << j << " name: " << name << " " << std::hex << rva 
		//		 <<  " at " << std::hex << baseAddress+rva << std::endl;
		
		// https://reverseengineering.stackexchange.com/a/21110
		if (exportsStartRVA <= rva && rva < exportsEndRVA) {
			forwarders++;
			continue;
		}

		// populate export entry in set from caller
		//exportEntry e = { strdup(name), rva , false, NULL };
		entries.push_back(new exportEntry(strdup(name), rva , false, NULL, dllPath));
	}


	mycout << "Forwarders found: " << std::dec << forwarders << std::endl;

	size_t missing = pExportDir->NumberOfFunctions - retrieved;
	if (pExportDir->NumberOfFunctions != retrieved) {
		mycerr << "> Not retrieved: " << std::dec << missing
			   << " (names available: "
			   << pExportDir->NumberOfNames << ")" << std::endl;
	}

	W::UnmapViewOfFile(pImageBase);
	W::CloseHandle(hMapSrcFile);
	W::CloseHandle(hSrcFile);
}

// macros adapted from WinNT.h for W namespace
#define MYFIELD_OFFSET(type, field)    ((W::LONG)(W::LONG_PTR)&(((type *)0)->field))
#define MYIMAGE_FIRST_SECTION( ntheader ) ((W::PIMAGE_SECTION_HEADER)        \
    ((W::ULONG_PTR)(ntheader) +                                            \
     MYFIELD_OFFSET( W::IMAGE_NT_HEADERS, OptionalHeader ) +                 \
     ((ntheader))->FileHeader.SizeOfOptionalHeader   \
    ))

W::PIMAGE_SECTION_HEADER peGetEnclosingSectionHeader(W::DWORD rva, W::PIMAGE_NT_HEADERS32 pNTHeader) {
	W::PIMAGE_SECTION_HEADER section = MYIMAGE_FIRST_SECTION(pNTHeader);
	unsigned i;

	for (i = 0; i < pNTHeader->FileHeader.NumberOfSections; i++, section++)
	{
		W::DWORD size = section->Misc.VirtualSize;
		if (0 == size)
			size = section->SizeOfRawData;

		if ((rva >= section->VirtualAddress) && (rva < (section->VirtualAddress + size)))
			return section;
	}

	return 0;
}

W::LPVOID peGetPtrFromRVA(W::DWORD rva, W::PIMAGE_NT_HEADERS32 pNTHeader, W::PBYTE imageBase) {
	W::PIMAGE_SECTION_HEADER pSectionHdr;
	INT delta;

	pSectionHdr = peGetEnclosingSectionHeader(rva, pNTHeader);
	if (!pSectionHdr)
		return 0;

	delta = (INT)(pSectionHdr->VirtualAddress - pSectionHdr->PointerToRawData);
	return (W::PVOID)(imageBase + rva - delta);
}
