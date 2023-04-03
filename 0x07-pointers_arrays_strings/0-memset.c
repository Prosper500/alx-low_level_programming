#include "main.h"

/**
 * _memset - A function that fill a byte memory
 * @s: poiter destination
 * @b: byte constant
 * @n: byte to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
