#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid parameter
 * @height: height parameter
 *
 * Return: 0
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0 ; n < height ; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
