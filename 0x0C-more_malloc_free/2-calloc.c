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
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	z = malloc(size * nmemb);
	if (z == NULL)
		return (NULL);
	for (a = 0; a < (size * nmemb); a++)
		z[a] = 0;
	return (z);
}
