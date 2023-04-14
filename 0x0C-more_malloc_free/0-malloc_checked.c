#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked - A function that allocate memory with malloc.
 * @b: varible to allocate memory
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *z;
	
	z = malloc(b);
	if (z==NULL)
		return (98);
	return (z);
}
