#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _memset - function with a constant byte
 * @z: memory size to be filled
 * @a: character
 * @n: copy times
 * Return: character
 */
char _memset(char *z, char a, unsingned int n)
{
	unsigned int b;

	for (b = 0; b < n; b++)
	{
		z[b] = a;
	}
	return (z);
}
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
