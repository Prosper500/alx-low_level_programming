#include "main.h"
#include <stddef.h>
#include <stdlib>

/**
 * _memset - A function with a constant byte
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
