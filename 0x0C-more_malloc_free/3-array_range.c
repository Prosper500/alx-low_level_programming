#include <stddef.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that create an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *z, a, b;

	if (min > max)
		return (NULL);

	b = max - min + 1;

	z = malloc(sizeof(int) * b);

	if (z == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		z[a] = min++;
	return (z);
}
