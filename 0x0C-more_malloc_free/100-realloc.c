#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - A function that relocate memery block
 * @ptr: pointer allocated
 * @old_size: former memory size
 * @new_size: new memory size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt1, *pt2;
	unsigned int a;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));

	pt1 = malloc(new_size);
	if (!pt1)
		return (NULL);

	pt2 = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			pt1[a] = pt2[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			pt1[a] = pt2[a];
	}
	free(ptr);
	return (pt1);
}
