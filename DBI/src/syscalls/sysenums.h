#pragma once
#include <windows.h>
#include <stdio.h>
#include <tchar.h>

/* We hardcode each named constant using separate structures for
* each group of constants. We generate each structure name by using
* first constant name in the group of constants.
*/
typedef struct const_values_t {
	int value; /* value of the named constant */
	const char *const_name; /* name of the named constant */
} const_values_t;

extern const_values_t *const_struct_array[];
size_t get_const_arrays_num(void);