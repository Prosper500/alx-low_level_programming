#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Afunction that create an array of chars
 * @size: memory allocation
 * @c: charater input
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *z = malloc(size);

	for (i = 0; i < size; i++)
	{
		z[size] = (c);
		size--;
	}
	return (z);
	if (size == 0 || z == 0)
	return (NULL);
}
