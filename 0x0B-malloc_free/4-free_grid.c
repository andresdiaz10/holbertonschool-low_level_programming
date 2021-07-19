#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - Free a 2 dimensional grid
 * @grid: The array to free
 * @height: Height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
