#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate memory for a two-dimensional array of integers
 * @width: number
 * @height: number
 *
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
		return (grid);

	for (i = 0; i < height; i++)
	{
		int j = 0;

		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (--i >= 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
