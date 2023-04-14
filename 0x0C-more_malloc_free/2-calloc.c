#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _calloc - A function that allocate memory to an array using malloc
 * @nmemb: array element
 * @size: memory size to be allocated
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(size * nmemb);

	if (z == NULL)
		return (NULL);
	_memset(z, 0, nmemb * size);

	return (z);
}
