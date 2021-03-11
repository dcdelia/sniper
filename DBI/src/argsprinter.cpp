#include "argsprinter.h"
#include "tracer.h"
#include "logger.h"
#include "prototypes/pyrebox.h"
#include "prototypes/prototypes.h"
namespace W {
#include <windows.h>
}

const char* arginout[4] = {
	"IN",
	"INOUT",
	"OUT",
	"UNK"
};

// Attempts to print macro names
void print_enum(libcall_arg_info_t &argInfo, tlsinfo* tdata, bool pointer, ADDRINT argValue) {

	int iterator = 0;
	lib_const_values_t *named_consts;
	lib_const_values_t *named_consts_save;
	bool has_out = false;
	int size = sizeof(int);
	ADDRINT deref = 0;
	bool readValue = false;

	// Build type string
	std::string type_str = "enum";
	if (pointer) {
		type_str.append("*");
	}
	// Update type name with enum name if its non null
	if (argInfo.arg_type_name != NULL) {
		type_str.append("|" + std::string(argInfo.arg_type_name));
	}

	/* Trying to find enum_name in the hashtable */
	// Check for enum_name existence
	if (argInfo.arg_type_name == NULL || enumMap.count(argInfo.arg_type_name) == 0) {
		// No matching enum_name -> Print immediately, differentiating between pointer and value

		// Discriminate between pointer or not
		if (pointer) {

			if (argValue == NULL) {
				LOG_BISHOP(tdata, "<null>");
			}
			else {
				LOG_BISHOP(tdata, PFX, (void*)argValue);
			}
		}
		else {
			LOG_BISHOP(tdata, PIFX, argValue);
		}

		//If pointer, read value
		if (pointer && argValue != NULL) {

			//PIN_SafeCopy returns number of bytes read
			//Note that if we have a pointer to void, we don't know how large the actual pointed region is
			if (PIN_SafeCopy(&deref, (void *)argValue, size) == size) {

				LOG_BISHOP(tdata, " => 0x%x", deref);

			}


		}

		// Print arg info
		LOG_BISHOP(tdata, " (%s%s%stype=%s, size=" PIFX ")\n",
			(argInfo.arg_name == NULL) ? "" : "name=",
			(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
			(argInfo.arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			size);

		return;

	};

	// If pointer, read value
	if (pointer) {

		if (argValue != NULL && PIN_SafeCopy(&deref, (void *)argValue, size) == size) {
			readValue = true;
		}


		// If a value cannot be read print pointer value with info and return
		if (!readValue) {

			if (argValue == NULL) {
				LOG_BISHOP(tdata, "<null>");
			}
			else {
				LOG_BISHOP(tdata, PFX, (void*)argValue);
			}

			LOG_BISHOP(tdata, " (%s%s%stype=%s, size=" PIFX ")\n",
				(argInfo.arg_name == NULL) ? "" : "name=",
				(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
				(argInfo.arg_name == NULL) ? "" : ", ",
				(type_str.empty()) ? "\"\"" : type_str.c_str(),
				size);
			return;
		}

	}

	// In case I have a pointer and I got to this point I have to dereference in log
	if (pointer) {
		LOG_BISHOP(tdata, PFX, (void*)argValue);
		LOG_BISHOP(tdata, " => ");
	}

	//Set value for enum resolution
	int value;
	if (readValue) {
		value = (int)deref;
	}
	else value = argValue;

	//Enum present -> Get corresponding struct
	named_consts = enumMap[argInfo.arg_type_name];

	/* There are a lot of named constants with incremental values
	* (e.g. REG_NONE 0, REG_SZ 1, REG_EXPAND_SZ 2, REG_BINARY 3).
	* So, firstly, we're trying to determine such cases.
	*/
	named_consts_save = named_consts;
	while (named_consts_save->const_name != NULL) {
		if (value == named_consts_save->value) {
			if (has_out)
				LOG_BISHOP(tdata, " or ");

			LOG_BISHOP(tdata, "%s", named_consts_save->const_name);

			has_out = true;
		}
		named_consts_save++;
	}
	//I cant print resolved macro and return
	if (has_out) {

		//Print arg info
		LOG_BISHOP(tdata, " (%s%s%stype=%s, value=0x%x, size=" PIFX ")\n",
			(argInfo.arg_name == NULL) ? "" : "name=",
			(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
			(argInfo.arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			argValue,
			size);

		return;
	}

	/* If not, we perform linear search for composite named constants
	* (e.g. FILE_SHARE_READ | FILE_SHARE_WRITE). We're using linear
	* search instead of random access b/c current table entries may
	* contain the same values for different named constants as well as
	* combination values, which make it difficult, such as:
	* ...
	* {0x00800000, "FILE_OPEN_FOR_FREE_SPACE_QUERY"},
	* {0x00ffffff, "FILE_VALID_OPTION_FLAGS"},
	* ...
	*/
	has_out = false;
	while (named_consts->const_name != NULL) {
		if (TESTALL(named_consts->value, value)) {
			if (has_out)
				LOG_BISHOP(tdata, "|");
			/* FIXME i#1550: We don't perform additional search to
			* include entries with the same values in the output.
			* Ideally the tables shouldn't contain such entries.
			*/
			LOG_BISHOP(tdata, "%s", named_consts->const_name);
			has_out = true;
		}
		named_consts++;
	}
	//Entry not found
	//-> Print value and info and return
	if (!has_out) {
		LOG_BISHOP(tdata, PIFX, argValue);

		//Print arg info
		LOG_BISHOP(tdata, " (%s%s%stype=%s, size=" PIFX ")\n",
			(argInfo.arg_name == NULL) ? "" : "name=",
			(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
			(argInfo.arg_name == NULL) ? "" : ", ",
			(type_str.empty()) ? "\"\"" : type_str.c_str(),
			size);

		return;
	}

	// Print resolved macro
	LOG_BISHOP(tdata, " (%s%s%stype=%s, value=0x%x, size=" PIFX ")\n",
		(argInfo.arg_name == NULL) ? "" : "name=",
		(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
		(argInfo.arg_name == NULL) ? "" : ", ",
		(type_str.empty()) ? "\"\"" : type_str.c_str(),
		value,
		size);

}

//Prints value for complex types, i.e. structs, unions, tyepdefs, arrays
//TODO: unwrapping of complex types, e.g. structs-> For now just print address and type_name for every type
// Do it like strings
//Reminder:
//Structs: value, reference, pointer, pointer-to-pointer
//Union: see structs
//Tyepdef: value, pointer, pointer-to-pointer
//Array: pointer
//Enumeration: value, pointer
void print_complex_value(libcall_arg_info_t &argInfo, tlsinfo* tdata, std::string &type_str, ADDRINT argValue, bool pointer, bool pointerToPointer, bool reference, int type) {

	//Append * / ** / & to arg type name depending on whether we have a pointer/pointer-to-pointer/reference
	if (pointer) {
		type_str.append("*");
	}
	if (pointerToPointer) {
		type_str.append("**");
	}
	if (reference) {
		type_str.append("&");
	}

	//Update type name for unions/structs with complex structure specific name
	if ((type == NKT_DBOBJCLASS_Struct || type == NKT_DBOBJCLASS_Union) && (argInfo.arg_type_name != NULL)) {
		type_str.append("|" + std::string(argInfo.arg_type_name));
	}

	if (argValue == NULL) {
		LOG_BISHOP(tdata, "<null>");
	}
	else {
		// Print addresses without unwrapping
		LOG_BISHOP(tdata, PFX, (void*)argValue);
	}

}

//Print String
//-> Crap printed because some functions MAY not use a null terminated string (e.g. MultibyteToWideChar)
//-> Would need to check other args to determined whether string is null terminated or not
void print_string(ADDRINT pointer_str, bool is_wide, tlsinfo* tdata, std::string &type_str, bool pointer, bool pointerToPointer)
{
	// Append * or ** to arg type name depending on whether we have a pointer or pointer-to-pointer
	if (pointer) {
		type_str.append("*");
	}
	if (pointerToPointer) {
		type_str.append("**");
	}


	// If pointer-to-pointer print address and return
	if (pointerToPointer) {
		LOG_BISHOP(tdata, PFX, (void*)pointer_str);
		return;
	}

	// Init variables for bad memory check
	ADDRINT deref = 0;
	unsigned charSize = (is_wide) ? sizeof(wchar_t) : sizeof(char);

	// Print string
	if (pointer_str == NULL)
		LOG_BISHOP(tdata, "<null>");
	else {

		if ((PIN_SafeCopy(&deref, (void*)pointer_str, charSize) == 0)) {
			LOG_BISHOP(tdata, "<invalid memory>");
		}
		else {

			// Get Address at the end of page (last 12 bits)
			ADDRINT pageEndAddress = pointer_str | 0xFFF;

			//LOG_BISHOP(tdata, "Start: %x  ", pointer_str );
			//LOG_BISHOP(tdata, "End: %x ", pageEndAddress);

			uint untilPageEnd = pageEndAddress - pointer_str + 1;

			//LOG_BISHOP(tdata, "Diff: %x", untilPageEnd);

			// Init str array
			char str_c[STRING_SIZE*CHAR_SIZE];
			wchar_t str_w[STRING_SIZE*WCHAR_SIZE];


			// We are within the page
			if (STRING_SIZE*charSize < untilPageEnd) {

				if (is_wide) {

					// Trying to read
					if (PIN_SafeCopy(str_w, (void *)pointer_str, STRING_SIZE*charSize) == STRING_SIZE*charSize) {

						// Check if \0 is present
						int endstring = false;
						for (int i = 0; i < STRING_SIZE; ++i) {
							if (str_w[i] == '\0') {
								endstring = true;
								break;
							}
						}

						if (endstring) {
							LOG_BISHOP(tdata, "%ls", str_w);
						}
						else {
							LOG_BISHOP(tdata, "<Unk: 0x%4x >", str_w);
						}
					}
					else {

						// We read less bytes than expected!
						LOG_BISHOP(tdata, "<Invalid memory>");

					}

				}
				else {

					// Trying to read
					if (PIN_SafeCopy(str_c, (void *)pointer_str, STRING_SIZE*charSize) == STRING_SIZE*charSize) {

						// Check if \0 is present
						int endstring = false;
						for (int i = 0; i < STRING_SIZE; ++i) {
							if (str_c[i] == '\0') {
								endstring = true;
								break;
							}
						}

						if (endstring) {
							LOG_BISHOP(tdata, "%s", str_c);
						}
						else {
							LOG_BISHOP(tdata, "<Unk: 0x%4x >", str_c);
						}
					}
					else {

						// We read less bytes than expected!
						LOG_BISHOP(tdata, "<Invalid memory>");

					}
				}

			}
			else {

				// We are across the boundary
				uint n_bytes_left = STRING_SIZE*charSize - untilPageEnd;
				//LOG_BISHOP(tdata, "\nAcross - Total: %u - Until page end: %u - Left: %u\n", STRING_SIZE*charSize, untilPageEnd, n_bytes_left);

				if (is_wide) {

					// Read the first untilPageEnd bytes
					if (PIN_SafeCopy(str_w, (void *)pointer_str, untilPageEnd) == untilPageEnd
						&& PIN_SafeCopy(str_w + untilPageEnd, (void *)(pageEndAddress + 1), n_bytes_left) == n_bytes_left) {

						// Check if \0 is present
						int endstring = false;
						for (int i = 0; i < STRING_SIZE; ++i) {
							if (str_w[i] == '\0') {
								endstring = true;
								break;
							}
						}

						if (endstring) {
							LOG_BISHOP(tdata, "%ls", pointer_str);
						}
						else {
							LOG_BISHOP(tdata, "<Unk: 0x%4x >", pointer_str);
						}

					}
					else {

						// We read less bytes than expected!
						LOG_BISHOP(tdata, "<Invalid memory>");

					}

				}
				else {

					// Trying to read
					// Read the first untilPageEnd bytes
					if (PIN_SafeCopy(str_c, (void *)pointer_str, untilPageEnd) == untilPageEnd
						&& PIN_SafeCopy(str_c + untilPageEnd, (void *)(pageEndAddress + 1), n_bytes_left) == n_bytes_left) {


						// Check if \0 is present
						int endstring = false;
						for (int i = 0; i < STRING_SIZE; ++i) {
							if (str_c[i] == '\0') {
								endstring = true;
								break;
							}
						}

						if (endstring) {
							LOG_BISHOP(tdata, "%s", pointer_str);
						}
						else {
							LOG_BISHOP(tdata, "<Unk: 0x%4x >", pointer_str);
						}

					}
					else {

						// We read less bytes than expected!
						LOG_BISHOP(tdata, "<Invalid memory>");

					}
				}
			}
		}

	}

}


// Print long long
VOID print_longlong(tlsinfo* tdata, const char* format, libcall_arg_info_t &argInfo, bool pointer, bool leading_zeros, ADDRINT* sp) {

	ADDRINT low_ll = 0;
	ADDRINT high_ll = 0;
	W::LONGLONG ll = 0;
	size_t size = argInfo.size / 2;

	if (PIN_SafeCopy(&low_ll, (void *)sp, size) != size) {
		LOG_BISHOP(tdata, "<Invalid Memory>");
		return;
	}
	//LOG_BISHOP(tdata, "LOW : 0x%x\n", low_ll);

	//ADDRINT* high_pointer = sp + 1;
	if (PIN_SafeCopy(&high_ll, (void *)(sp + 1), size) != size) {
		LOG_BISHOP(tdata, "<Invalid Memory>");
		return;
	}
	//LOG_BISHOP(tdata, "HIGH : 0x%x\n", high_ll);

	// Get the value
	ll = (W::LONGLONG)high_ll << 32 | low_ll;

	// Do the printing here
	if (!pointer) {
		LOG_BISHOP(tdata, format, ll);
	}
	else {
		std::string format_complete = std::string(" => ") + std::string(format);
		const char* format_complete_cstr = format_complete.c_str();
		LOG_BISHOP(tdata, (leading_zeros ? " => %p" : format_complete_cstr), ll);
	}

}


// Print double
VOID print_double(tlsinfo* tdata, const char* format, libcall_arg_info_t &argInfo, bool pointer, bool leading_zeros, ADDRINT* sp) {

	double d = 0;

	// Copy double
	if (PIN_SafeCopy(&d, (void *)sp, argInfo.size) != argInfo.size) {
		LOG_BISHOP(tdata, "<Invalid Memory>");
		return;
	}

	// Do the printing here
	if (!pointer) {
		LOG_BISHOP(tdata, format, d);
	}
	else {
		std::string format_complete = std::string(" => ") + std::string(format);
		const char* format_complete_cstr = format_complete.c_str();
		LOG_BISHOP(tdata, (leading_zeros ? " => %p" : format_complete_cstr), d);
	}

}

// Print value greater than ADDRINT
VOID print_large_value(tlsinfo* tdata, const char* format, std::string &type_str, libcall_arg_info_t &argInfo, bool pointer, bool leading_zeros, ADDRINT* sp) {


	if (type_str.find("LONGLONG") != std::string::npos || type_str.find("ULONGLONG") != std::string::npos) {
		print_longlong(tdata, format, argInfo, pointer, leading_zeros, sp);
		return;
	}
	else if (type_str.find("double") != std::string::npos || type_str.find("long double") != std::string::npos) {
		print_double(tdata, format, argInfo, pointer, leading_zeros, sp);
		return;
	}

	//LOG_BISHOP(tdata, PFX, (void*)argValue);
}


// Print values of simple types
// For correct format specifiers see: http://www.cplusplus.com/reference/cstdio/printf/
void print_simple_value(libcall_arg_info_t &argInfo, bool leading_zeroes, tlsinfo* tdata, std::string &type_str, ADDRINT argValue, bool pointer, bool pointerToPointer, const char* format, ADDRINT* sp)
{

	// Final value for leading zeroes
	bool leading_zeroes_def = false;

	// Append * or ** to arg type name depending on whether we have a pointer or pointer-to-pointer
	if (pointer) {
		type_str.append("*");
	}
	if (pointerToPointer) {
		type_str.append("**");
	}

	// Print or not with leading zeroes
	if (pointer || pointerToPointer || leading_zeroes) {

		// Capture NULL case
		if ((pointer || pointerToPointer) && argValue == NULL) {
			LOG_BISHOP(tdata, "<null>");
			return;
		}

		// Capture void case
		if (leading_zeroes && !(pointer || pointerToPointer)) {
			LOG_BISHOP(tdata, "None");
			return;
		}

		LOG_BISHOP(tdata, PFX, (void*)argValue);

		if (pointerToPointer || leading_zeroes) {
			leading_zeroes_def = true;
		}

	}
	// Not a pointer -> Read Value
	else {

		// Check if big type
		if (argInfo.size > sizeof(ADDRINT)) {
			print_large_value(tdata, format, type_str, argInfo, pointer, leading_zeroes_def, sp);
		}
		else {
			LOG_BISHOP(tdata, format, argValue);
		}
	}

	// If pointer, read value
	if (pointer) {

		ADDRINT deref = 0;

		// Deference large value
		if (argInfo.size > sizeof(deref)) {
			print_large_value(tdata, format, type_str, argInfo, pointer, leading_zeroes_def, (ADDRINT*)argValue);
			return;
		}

		//PIN_SafeCopy returns number of bytes read
		//Note that if we have a pointer to void, we don't know how large the actual pointed region is
		if (PIN_SafeCopy(&deref, (void *)argValue, argInfo.size) == argInfo.size) {

			std::string format_complete = std::string(" => ") + std::string(format);
			const char* format_complete_cstr = format_complete.c_str();
			LOG_BISHOP(tdata, (leading_zeroes_def ? " => %p" : format_complete_cstr), deref);

		}
		else LOG_BISHOP(tdata, " => <invalid memory>");

	}

}

VOID printApiName(const char* exportName, const char* dllName, bool isKnown, tlsinfo* tdata, int stackSize, void* retAddr, ADDRINT* sp) {

#if VERBOSE_OUTPUT
	if (isKnown) {
		LOG_BISHOP(tdata, "-- [Tid: %d, Sp: %p, Ra: %p , Stack Size: %d, Sup ] -- %u %s!%s\n", PIN_GetTid(), sp, retAddr, stackSize, tdata->callnumber, dllName, exportName);
	}
	else {
		LOG_BISHOP(tdata, "-- [Tid: %d, Sp: %p, Ra: %p , Stack Size: %d, Unsup ] -- %s!%s\n", PIN_GetTid(), sp, retAddr, stackSize, dllName, exportName);
	}
	return;
#endif

	if (isKnown) {
		LOG_BISHOP(tdata, "-- %d -- %u %s!%s\n", PIN_GetTid(), tdata->callnumber, dllName, exportName);
	}
	else {
		LOG_BISHOP(tdata, "-- %d -- %s!%s\n", PIN_GetTid(), dllName, exportName);
	}
	return;


}

VOID printApiExecuted(const char* exportName, const char* dllName, bool isKnown, tlsinfo* tdata, int stackSize, ADDRINT sp, int offset) {

#if VERBOSE_OUTPUT
	if (isKnown) {
		LOG_BISHOP(tdata, "\t%u \texecuted with clear ret (off = %d) -- [Tid: %d, Sp: %p, Stack Size: %d, Sup ] -- %s!%s =>\n", tdata->callnumber, offset, PIN_GetTid(), sp, stackSize, dllName, exportName);
	}
	else {
		LOG_BISHOP(tdata, "\texecuted with clear ret (off = %d) -- [Tid: %d, Sp: %p, Stack Size: %d, Unsup ] -- %s!%s =>\n", offset, PIN_GetTid(), sp, stackSize, dllName, exportName);
	}
	return;
#endif

	if (isKnown) {
		LOG_BISHOP(tdata, "\t%u \texecuted -- %s!%s =>\n", tdata->callnumber, dllName, exportName);
	}
	else {
		LOG_BISHOP(tdata, "\texecuted -- %s!%s =>\n", dllName, exportName);
	}
	return;

}

VOID printLongRet(tlsinfo* tdata, libcall_arg_info_t &argInfo, ADDRINT EAX, ADDRINT EDX) {

	// Set Format specifier
	std::string format_str = "%lli";
	std::string type_str = "LONGLONG";
	if (argInfo.arg_type == NKT_DBFUNDTYPE_UnsignedQuadWord) {
		format_str = "%llu";
		type_str = "ULONGLONG";
	}

	LOG_BISHOP(tdata, "\t%u \tretval: ", tdata->callnumber);

	// Fetch value
	W::LONGLONG ll = (W::LONGLONG)EDX << 32 | EAX;
	LOG_BISHOP(tdata, format_str.c_str(), ll);

	// Write Ret Info
	LOG_BISHOP(tdata, " (%s%s%stype=%s, size=" PIFX ", IOmod=%s)\n",
		(argInfo.arg_name == NULL) ? "" : "name=",
		(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
		(argInfo.arg_name == NULL) ? "" : ", ",
		(type_str.empty()) ? "\"\"" : type_str.c_str(),
		argInfo.size,
		arginout[argInfo.in_out_flag]);
}

VOID printDoubleRet(tlsinfo* tdata, libcall_arg_info_t &argInfo) {

	// Set Format specifier
	std::string format_str = "%f";
	std::string type_str = "double";
	if (argInfo.arg_type == NKT_DBFUNDTYPE_LongDouble) {
		format_str = "%Lf";
		type_str = "long double";
	}

	LOG_BISHOP(tdata, "\t%u \tretval: ", tdata->callnumber);

	//TODO: do we really need all this hussle for just 2 APIs?
	// PropVariantToDoubleWithDefault
	// VariantToDoubleWithDefault
	LOG_BISHOP(tdata, "<double ret>");

	// Write Ret Info
	LOG_BISHOP(tdata, " (%s%s%stype=%s, size=" PIFX ", IOmod=%s)\n",
		(argInfo.arg_name == NULL) ? "" : "name=",
		(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
		(argInfo.arg_name == NULL) ? "" : ", ",
		(type_str.empty()) ? "\"\"" : type_str.c_str(),
		argInfo.size,
		arginout[argInfo.in_out_flag]);

}

VOID printArg(tlsinfo* tdata, libcall_arg_info_t &argInfo, ADDRINT argValue, ADDRINT* sp) {

	// Type String
	std::string type_str = "";

	// Determine if we have a pointer or a pointer to pointer or a reference
	bool pointer = (TEST(NKT_DBOBJCLASS_Pointer, argInfo.arg_type));
	bool pointerToPointer = (TEST(NKT_DBOBJCLASS_PointerPointer, argInfo.arg_type));
	bool reference = (TEST(NKT_DBOBJCLASS_Reference, argInfo.arg_type));

	// Differentiate return value
	if (argInfo.arg_num == -1)
		LOG_BISHOP(tdata, "\t%u \tretval: ", tdata->callnumber);
	else
		LOG_BISHOP(tdata, "\t%u \targ %d: ", tdata->callnumber, argInfo.arg_num + 1);

	// Remove pointer/pointer-to-pointer/reference from type mask if necessary
	int type_wout_pointer;
	if (pointer) {
		type_wout_pointer = (argInfo.arg_type) & ~NKT_DBOBJCLASS_Pointer;
	}
	else if (pointerToPointer) {
		type_wout_pointer = (argInfo.arg_type) & ~NKT_DBOBJCLASS_PointerPointer;
	}
	else if (reference) {
		type_wout_pointer = (argInfo.arg_type) & ~NKT_DBOBJCLASS_Reference;
	}
	else type_wout_pointer = argInfo.arg_type;

	// Constant Resolution Here
	if (type_wout_pointer == NKT_DBOBJCLASS_Enumeration) {
		print_enum(argInfo, tdata, pointer, argValue);
		return;
	}


	// Determine arg type and print arg accordingly
	switch (type_wout_pointer) {

		// Simple types
	case NKT_DBFUNDTYPE_SignedByte:         type_str = "char"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%hhd", sp); break;
	case NKT_DBFUNDTYPE_UnsignedByte:		type_str = "BYTE"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%hhx", sp); break;
	case NKT_DBFUNDTYPE_SignedWord:			type_str = "short"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%hd", sp); break;
	case NKT_DBFUNDTYPE_UnsignedWord:		type_str = "WORD"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%hu", sp); break;
	case NKT_DBFUNDTYPE_SignedDoubleWord:	type_str = "(long/int)"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%d", sp); break;
	case NKT_DBFUNDTYPE_UnsignedDoubleWord:	type_str = "DWORD"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, PIFX, sp); break;
	case NKT_DBFUNDTYPE_SignedQuadWord:		type_str = "LONGLONG"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%lli", sp); break;
	case NKT_DBFUNDTYPE_UnsignedQuadWord:	type_str = "ULONGLONG"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%llu", sp); break;
	case NKT_DBFUNDTYPE_Float:				type_str = "float"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%f", sp); break;
	case NKT_DBFUNDTYPE_Double:				type_str = "double"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, "%.17g", sp); break;
	case NKT_DBFUNDTYPE_LongDouble:			type_str = "long double"; print_simple_value(argInfo, false, tdata, type_str, argValue, pointer, pointerToPointer, ".17g", sp); break;
	case NKT_DBFUNDTYPE_Void:				type_str = "void"; print_simple_value(argInfo, true, tdata, type_str, argValue, pointer, pointerToPointer, PIFX, sp); break;


		// Strings
	case NKT_DBFUNDTYPE_AnsiChar:			type_str = "char"; print_string(argValue, false, tdata, type_str, pointer, pointerToPointer); break;
	case NKT_DBFUNDTYPE_WideChar:			type_str = "wchar_t"; print_string(argValue, true, tdata, type_str, pointer, pointerToPointer); break;

		// Complex types
	case NKT_DBOBJCLASS_Struct:				type_str = "struct"; print_complex_value(argInfo, tdata, type_str, argValue, pointer, pointerToPointer, reference, type_wout_pointer); break;
	case NKT_DBOBJCLASS_Union:				type_str = "union"; print_complex_value(argInfo, tdata, type_str, argValue, pointer, pointerToPointer, reference, type_wout_pointer); break;
	case NKT_DBOBJCLASS_Typedef:			type_str = "typedef"; print_complex_value(argInfo, tdata, type_str, argValue, pointer, pointerToPointer, reference, type_wout_pointer); break;
	case NKT_DBOBJCLASS_Array:				type_str = "array"; print_complex_value(argInfo, tdata, type_str, argValue, pointer, pointerToPointer, reference, type_wout_pointer); break;


	default: {
		if (argValue == 0)
			LOG_BISHOP(tdata, "<null>");
		else
			LOG_BISHOP(tdata, PFX, (void*)argValue);
	}
	}

	// Print arg info
	LOG_BISHOP(tdata, " (%s%s%stype=%s, size=" PIFX ", IOmod=%s)\n",
		(argInfo.arg_name == NULL) ? "" : "name=",
		(argInfo.arg_name == NULL) ? "" : argInfo.arg_name,
		(argInfo.arg_name == NULL) ? "" : ", ",
		(type_str.empty()) ? "\"\"" : type_str.c_str(),
		argInfo.size,
		arginout[argInfo.in_out_flag]);

}