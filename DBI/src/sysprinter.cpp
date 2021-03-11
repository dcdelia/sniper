// A large fraction of the code here is adapted from drltrace
// Credits: https://github.com/mxmssh/drltrace/
// drltrace is released under BSD 3-Clause License

#include "sysprinter.h"

std::map<std::string, const_values_t*> mapOfConsts;

VOID printSyscallName(const char* name, bool isKnown, tlsinfo *tdata) {

	if (isKnown) {
		LOG_BISHOP(tdata, "-- %d -- %u ntdll!%s\n", PIN_GetTid(), tdata->callnumber, name);
	}
	else {
		LOG_BISHOP(tdata, "-- %d -- ntdll!%s\n", PIN_GetTid(), name);
	}
	return;

}


bool
drstrace_print_enum_const_name(const char* enum_name, ADDRINT value, tlsinfo* tdata)
{
	/* The routine returns false when can't
	* find symbolic name in the hashtable.
	*/
	int iterator = 0;
	const_values_t *named_consts;
	const_values_t *named_consts_save;
	bool has_out = false;

	/* Trying to find enum_name in the hashtable */
	// Check for enum_name existence
	if (mapOfConsts.count(enum_name) == 0) {
		LOG_BISHOP(tdata, PIFX, value);
		return false;
	};
	named_consts = mapOfConsts[enum_name];


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
	if (has_out)
		return true;


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
			LOG_BISHOP(tdata, "%s", named_consts->const_name);
			has_out = true;
		}
		named_consts++;
	}
	if (!has_out) {
		LOG_BISHOP(tdata, PIFX, value);
		return false;
	}

	return true;
}



//Symbolic name resolution
bool
drstrace_get_arg_symname(const char* enum_name, int type, int size, ADDRINT value, tlsinfo* tdata){

	if (type >= DRSYS_TYPE_STRUCT) {
		return false;
	}
	else if (enum_name != NULL) {
		if (drstrace_print_enum_const_name(enum_name, value, tdata)) {
			LOG_BISHOP(tdata, " (type=named constant, value=0x%x, size=0x%x)\n", value, size);
		}
		else {
			LOG_BISHOP(tdata, " (type=named constant, size=0x%x)\n", size);
		}
		return true;
	}

	return false;
	
}

//Obtain type from arg information
drsys_param_type_t map_to_exported_type(uint sysarg_type, size_t *sz_out OUT)
{
	size_t sz = 0;
	drsys_param_type_t type = (drsys_param_type_t)sysarg_type;
	/* map to exported types */
	if (sysarg_type == SYSARG_TYPE_UNICODE_STRING_NOLEN) {
		type = DRSYS_TYPE_UNICODE_STRING;
	}
	else if (sysarg_type == SYSARG_TYPE_SINT32) {
		type = DRSYS_TYPE_SIGNED_INT;
		sz = 4;
	}
	else if (sysarg_type == SYSARG_TYPE_UINT32) {
		type = DRSYS_TYPE_UNSIGNED_INT;
		sz = 4;
	}
	else if (sysarg_type == SYSARG_TYPE_SINT16) {
		type = DRSYS_TYPE_SIGNED_INT;
		sz = 2;
	}
	else if (sysarg_type == SYSARG_TYPE_UINT16) {
		type = DRSYS_TYPE_UNSIGNED_INT;
		sz = 2;
	}
	else if (sysarg_type == SYSARG_TYPE_BOOL8) {
		type = DRSYS_TYPE_BOOL;
		sz = 1;
	}
	else if (sysarg_type == SYSARG_TYPE_BOOL32) {
		type = DRSYS_TYPE_BOOL;
		sz = 4;
#ifdef WINDOWS
	}
	else if (sysarg_type == DRSYS_TYPE_NTSTATUS) {
		sz = sizeof(NTSTATUS);
#endif
	}
	ASSERT(type < NUM_PARAM_TYPE_NAMES, "invalid type enum val");
	if (sz_out != NULL && sz > 0)
		*sz_out = sz;
	return type;
}


drsys_param_type_t
type_from_arg_info(const DR::sysinfo_arg_t *arg_info)
{
	drsys_param_type_t type = DRSYS_TYPE_INVALID;
	if (SYSARG_MISC_HAS_TYPE(arg_info->flags)) {
		/* we don't need size b/c it's encoded in arg_info already */
		type = map_to_exported_type(arg_info->misc, NULL);
	}
	return type;
}

const char *
arg_type_name(int type, const char *type_name)
{
	if (type_name == NULL && type != DRSYS_TYPE_UNKNOWN &&
		type != DRSYS_TYPE_INVALID) {
		ASSERT(type < NUM_PARAM_TYPE_NAMES, "invalid type enum val");
		return param_type_names[type];
	}
	else
		return type_name;
}

//Print Unicode string
static void
print_unicode_string(DR::UNICODE_STRING *us, tlsinfo* tdata)
{
	if (us == NULL)
		LOG_BISHOP(tdata, "<null>");
	else {
		LOG_BISHOP(tdata, "%d/%d \"%.*ls\"", us->Length, us->MaximumLength,
			us->Length / sizeof(wchar_t),
			(us->Buffer == NULL) ? L"<null>" : us->Buffer);
	}
}

//Print compound type
static bool
print_known_compound_type(ADDRINT value, int type, tlsinfo* tdata) {

	switch (type) {
	case SYSARG_TYPE_UNICODE_STRING: {

		DR::UNICODE_STRING* uni_str_ptr = (DR::UNICODE_STRING*)malloc(sizeof(DR::UNICODE_STRING));
		if(PIN_SafeCopy(uni_str_ptr, (void *)value, sizeof(DR::UNICODE_STRING)) == sizeof(DR::UNICODE_STRING)) {
			print_unicode_string(uni_str_ptr, tdata);
		}
		else LOG_BISHOP(tdata, "<invalid memory>");

		free(uni_str_ptr);
		break;
	}
	case SYSARG_TYPE_OBJECT_ATTRIBUTES: {

		DR::OBJECT_ATTRIBUTES* oa_ptr = (DR::OBJECT_ATTRIBUTES*)malloc(sizeof(DR::OBJECT_ATTRIBUTES));
		if (PIN_SafeCopy(oa_ptr, (void *)value, sizeof(DR::OBJECT_ATTRIBUTES)) == sizeof(DR::OBJECT_ATTRIBUTES)) {

			LOG_BISHOP(tdata, "len=0x%x, root=0x%x, name=", oa_ptr->Length, oa_ptr->RootDirectory);
			print_unicode_string(oa_ptr->ObjectName, tdata);
			LOG_BISHOP(tdata, ", att=0x%x, sd=0x%08x, sqos=0x%08x", oa_ptr->Attributes, oa_ptr->SecurityDescriptor, oa_ptr->SecurityQualityOfService);
		}
		else LOG_BISHOP(tdata, "<invalid memory>");

		free(oa_ptr);
		break;
	}
	case DRSYS_TYPE_IO_STATUS_BLOCK: {

		DR::IO_STATUS_BLOCK* io_ptr = (DR::IO_STATUS_BLOCK*)malloc(sizeof(DR::IO_STATUS_BLOCK));
		if (PIN_SafeCopy(io_ptr, (void *)value, sizeof(DR::IO_STATUS_BLOCK)) == sizeof(DR::IO_STATUS_BLOCK)) {
			LOG_BISHOP(tdata, "status=0x%x, info=0x%x", io_ptr->StatusPointer, io_ptr->Information);
		}
		else LOG_BISHOP(tdata, "<invalid memory>");

		free(io_ptr);
		break;
	}
	case DRSYS_TYPE_LARGE_INTEGER: {

		W::LARGE_INTEGER* li = (W::LARGE_INTEGER*)malloc(sizeof(W::LARGE_INTEGER));
		if (PIN_SafeCopy(li, (void *)value, sizeof(W::LARGE_INTEGER)) == sizeof(W::LARGE_INTEGER)) {
			//Original code with I64X but not working ...
			LOG_BISHOP(tdata, "%lli", li->QuadPart);
		}
		else LOG_BISHOP(tdata, "<invalid memory>");

		free(li);
		break;
	}
	default: {
		return false;
	}
	}
	

	return true;

}



//Print values of simple types
void print_simple_value(ADDRINT value, int flags, bool leading_zeroes, int size, tlsinfo *tdata, bool pre, const char* format)
{

	ADDRINT truncValue = value;

	//If pointer is true we have a pointer, otherwise SYSARG_INLINED, i.e. a non memory argument, the entire value is in memory slot
	bool pointer = !TEST(SYSARG_INLINED, flags);

	if (pointer || leading_zeroes) {

		// Capture NULL case
		if (pointer && value == NULL) {
			LOG_BISHOP(tdata, "<null>");
			return;
		}

		LOG_BISHOP(tdata, PFX, truncValue);
	}
	else {
		LOG_BISHOP(tdata, format, truncValue);
	}

	//If pointer and input parameter, read value
	if (pointer && ((pre && TESTANY(SYSARG_READ | SYSARG_INLINED, flags)) || (!pre && TEST(SYSARG_WRITE, flags)))) {

		ADDRINT deref = 0;

		/*
		if (size > sizeof(deref)) {
			// NEVER REACHED
			
			//LOG("too-big simple type");
			return;
		}*/

		//PIN_SafeCopy returns number of bytes read
		//Note that if we have a pointer to void, we don't know how large the actual pointed region is
		if (PIN_SafeCopy(&deref, (void *)value, size) == size) {
			std::string format_complete = std::string(" => ") + std::string(format);
			const char* format_complete_cstr = format_complete.c_str();
			LOG_BISHOP(tdata, (leading_zeroes ? " => %p" : format_complete_cstr), deref);
		}
		else LOG_BISHOP(tdata, " => <invalid memory>");

	}

}

VOID printSyscallArg(DR::sysinfo_arg_t* arg, ADDRINT initial_value, tlsinfo *tdata, bool isEntry) {

	// Data declaration
	int type = 1; // <unknown>
	const char* type_name = NULL;
	int size = sizeof(void*);
	ADDRINT value = initial_value;

	// Type resolution
	if (SYSARG_MISC_HAS_TYPE(arg->flags)) {
		type = type_from_arg_info(arg);
	}
	else if (!TEST(SYSARG_INLINED, arg->flags)) {
		/* Rather than clutter up the tables with DRSYS_TYPE_STRUCT
		* for all the types we haven't given special enums to,
		* we mark the truly unknown and assume everything else is
		* a struct.
		*/
		type = DRSYS_TYPE_STRUCT;
	}

	// Type name resolution
	type_name = arg_type_name(type, NULL);

	// Size resolution
	if (TEST(SYSARG_INLINED, arg->flags)) {

		size = arg->size;
		ASSERT(size > 0, "inlined must have regular size in bytes");

		if (size < sizeof(ADDRINT)) {
			if (size == 1)
				value &= 0xff;
			else if (size == 2)
				value &= 0xffff;
			else if (size == 4)
				value &= 0xffffffff;
			//arg->value64 = arg->value;
		}
	}

	
	if (arg->param == -1)
		LOG_BISHOP(tdata, "\t%u \tretval: ", tdata->callnumber);
	else
		LOG_BISHOP(tdata, "\t%u \targ %d: ", tdata->callnumber, arg->param + 1);

	
	// Constant Resolution Here (arg->type_name is enum_name)
	if (arg->type_name != NULL) {
		if (drstrace_get_arg_symname(arg->type_name, type, size, value, tdata)) {
			return;
		}
	}

	//OutFile << "Type: " << curr_arg.misc << " index " << index << endl;
	switch (type) {
	case DRSYS_TYPE_VOID:		  print_simple_value(value, arg->flags, true, size, tdata, isEntry, PFX); break;
	case DRSYS_TYPE_POINTER:      print_simple_value(value, arg->flags, true, size, tdata, isEntry, PFX); break;
	case DRSYS_TYPE_BOOL:         print_simple_value(value, arg->flags, false, size, tdata, isEntry, "%d"); break;
	case DRSYS_TYPE_INT:          print_simple_value(value, arg->flags, false, size, tdata, isEntry, "%d"); break;
	case DRSYS_TYPE_SIGNED_INT:   print_simple_value(value, arg->flags, false, size, tdata, isEntry, "%d"); break;
	case DRSYS_TYPE_UNSIGNED_INT: print_simple_value(value, arg->flags, false, size, tdata, isEntry, "%u"); break;
	case DRSYS_TYPE_HANDLE:       print_simple_value(value, arg->flags, false, size, tdata, isEntry, PFX); break;
	case DRSYS_TYPE_NTSTATUS:     print_simple_value(value, arg->flags, false, size, tdata, isEntry, PIFX); break;
	case DRSYS_TYPE_ATOM:         print_simple_value(value, arg->flags, false, size, tdata, isEntry, PIFX); break;
	default: {
		if (value == 0) {
			//OUTPUT(buf, "<null>");
			LOG_BISHOP(tdata, "<null>");
			//OutFile << "arg " << index << " : <null> "<< endl;
		}
		else if (isEntry && !TEST(SYSARG_READ, arg->flags)) {

			//Print arg value
			LOG_BISHOP(tdata, PFX, value);
		}

		else {
			
			if (!print_known_compound_type(value, type, tdata))
				LOG_BISHOP(tdata, "<NYI>");
		}

	}
	}


	//PIFX for size
	//curr_arg->arg_name = NULL; //->Ensure it is null since we are not using it for now
	LOG_BISHOP(tdata, " (type=%s%s, size=0x%x)\n",
		(type_name == NULL) ? "\"\"" : type_name,
		(type_name == NULL ||
			TEST(SYSARG_INLINED, arg->flags)) ? "" : "*",
		size);
	

}