#include "main.h"

/**
 * _memset - A function that fill a byte memory
 * @s: poiter destination
 * @b: byte constant
 * @n: byte to fill
 * Return: Character
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
