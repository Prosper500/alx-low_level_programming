#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - A funtion that execute a function
 * @array: areay of integer
 * @size: size of array
 * @action: operation
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array != NULL && size > 0 && action != NULL)
		for (j = 0; j < size; j++)
			action(array[j]);
}
