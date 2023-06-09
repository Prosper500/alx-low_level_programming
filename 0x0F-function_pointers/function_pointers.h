#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER
#include <stddef.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
/**
 * enum bool - typedef function bool
 * @TRUE: is 1
 * @FALSE: is 0
 */
typedef enum bool
{
	TRUE = 1,
	FALSE = 0
}bool;
#endif
