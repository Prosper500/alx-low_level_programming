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
	char *z;

	i = 0;

	if (size == 0)
		return (NULL);
	z = malloc(sizeof(char) * size);
	if (z == NULL)
		return (0);
	while (i < size)
	{
		z[i] = c;
		i++;
	}
	z[i] = '\0';
	return (z);
}
