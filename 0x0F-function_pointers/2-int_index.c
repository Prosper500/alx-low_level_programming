#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - A function that search for integer
 * @array: array on integer
 * @size: size of array element
 * @cmp: A pointer to a function
 * Return: integer successful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;
	bool i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (j = 0; j < size; j++)
		{
			i = cmp(array[j]);
			if (i == TRUE)
			return (j);
		}
	}
	return (-1);
}

