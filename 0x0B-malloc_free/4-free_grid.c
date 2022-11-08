#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional grid created by alloc_grid
 * @grid: pointer to array
 * @height: height of array
 *
 * Return: value of x raised to the power of y
 */
void free_grid(int **grid, int height)
{
	while (--height >= 0)
		free(grid[height]);
	free(grid);
}
