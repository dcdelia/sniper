// Some of the code here is adapted from the ouput of a slightly modified version
// of the Deviare parser from the PyREBox project. Credits:
// https://github.com/Cisco-Talos/pyrebox/blob/master/mw_monitor2/deviare_db_parser.py

#pragma once
#include <stdint.h>

typedef enum {

	IN = 0,
	INOUT = 1,
	OUT = 2,
	UNK = 3

} arginout_enum;

typedef enum {

	NKT_DBFUNDTYPE_SignedByte = 1,
	NKT_DBFUNDTYPE_UnsignedByte = 2,
	NKT_DBFUNDTYPE_SignedWord = 3,
	NKT_DBFUNDTYPE_UnsignedWord = 4,
	NKT_DBFUNDTYPE_SignedDoubleWord = 5,
	NKT_DBFUNDTYPE_UnsignedDoubleWord = 6,
	NKT_DBFUNDTYPE_SignedQuadWord = 7,
	NKT_DBFUNDTYPE_UnsignedQuadWord = 8,
	NKT_DBFUNDTYPE_Float = 9,
	NKT_DBFUNDTYPE_Double = 10,
	NKT_DBFUNDTYPE_LongDouble = 11,
	NKT_DBFUNDTYPE_Void = 12,
	NKT_DBFUNDTYPE_AnsiChar = 13,
	NKT_DBFUNDTYPE_WideChar = 14,

	NKT_DBOBJCLASS_Struct = 15,
	NKT_DBOBJCLASS_Union = 16,
	NKT_DBOBJCLASS_Typedef = 17,
	NKT_DBOBJCLASS_Array = 18,
	NKT_DBOBJCLASS_Enumeration = 19,

	NKT_DBOBJCLASS_Pointer = 32,
	NKT_DBOBJCLASS_PointerPointer = 64,
	NKT_DBOBJCLASS_Reference = 128

} db_types_t;

//Struct containing libcall arg info
typedef struct {
	// TODO reoder fields to optimize packing

	//Arg number
	// -> Ret arg has number -1 
	int8_t arg_num;

	//Arg name
	const char* arg_name;

	//Arg type
	int arg_type; // TODO how much space do we need?

	//Arg type name
	// -> Not null only for enums, structs and unions
	char* arg_type_name;

	//Size
	uint16_t size;

	//Input/output flag
	uint8_t in_out_flag;

} libcall_arg_info_t;


//Struct containing libcall info
typedef struct {

	//Function name
	const char* func_name;

	//Number of args
	uint8_t argnum;

	//Array of args (we assume max number of args to be 20) -> Func with max args had 19 args, including return value
	libcall_arg_info_t lib_args[20]; // TODO we should optimize this somehow?!?

} libcall_info_t;

// We hardcode each named constant using separate structures for each group of constants
typedef struct lib_const_values_t {
	int value; /* value of the named constant */
	const char *const_name; /* name of the named constant */
} lib_const_values_t;

// We have an array where we have an entry for each enum of this type
typedef struct lib_const_array_entry_t {
	const char* enum_name; /* enum name */
	lib_const_values_t *enum_values; /* pointer to enum struct */
} lib_const_array_entry_t;

//Externs with prototypes arrays and sizes, grouped by DLL
extern libcall_info_t Kernel32_info[];
extern unsigned Kernel32arraySize;

extern libcall_info_t KernelBase_info[];
extern unsigned KernelBasearraySize;

extern libcall_info_t Gdi32_info[];
extern unsigned Gdi32arraySize;

extern libcall_info_t User32_info[];
extern unsigned User32arraySize;

extern libcall_info_t OleAut32_info[];
extern unsigned OleAut32arraySize;

extern libcall_info_t AdvAPI32_info[];
extern unsigned AdvAPI32arraySize;

//extern libcall_info_t ntdll_info[];
//extern unsigned ntdllarraySize;

extern libcall_info_t Crypt32_info[];
extern unsigned Crypt32arraySize;

extern libcall_info_t IPHlpApi_info[];
extern unsigned IPHlpApiarraySize;

extern libcall_info_t Ole32_info[];
extern unsigned Ole32arraySize;

extern libcall_info_t shell32_info[];
extern unsigned shell32arraySize;

extern libcall_info_t WinInet_info[];
extern unsigned WinInetarraySize;

extern libcall_info_t WS2_32_info[];
extern unsigned WS2_32arraySize;

// extern for named const
extern lib_const_array_entry_t libcalls_const_struct_array[];
extern unsigned EnumarraySize;
