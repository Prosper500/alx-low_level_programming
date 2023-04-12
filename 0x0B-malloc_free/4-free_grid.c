#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - A function that frees a 2-dimensional grid
 * @grid: array grid
 * @height: height of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height == 0 || grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	/*free(grid);*/
}
