#include "main.h"

/**
 * _memcpy - A function that copy memory area
 * @dest: paste destinTion
 * @src: source memory
 * @n: byte volume
 * Return: value digit
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n, r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
