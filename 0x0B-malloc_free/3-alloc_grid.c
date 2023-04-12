#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * allocate_grid - A funcrion that return pointer to a 2-dimensional array
 * @width: horizontal
 * @height: vertical
 * Return: grid of interger
 */
int **alloc_grid(int width, int height)
{
	int **z, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	z = malloc(sizeof(int) * height);

	if (z == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		z[i] = malloc(sizeof(int) * width);
		if (z[i] == NULL)
		{
			free(z);
			for (j = 0; j <= i; j++)
				free(z[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; width <= i; j++)
		{
			z[i][j] = 0;
		}
	}
	return (z);
}
