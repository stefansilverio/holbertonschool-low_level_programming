#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free a two demensional grid
 *
 * @grid: double ptr to your grid
 *
 * @height: height of your grid
 *
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int freed;

	for (freed = 0; freed < height + 1; freed++)
		free(grid[freed]);

	free(grid);
}
