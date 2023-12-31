#include <stdlib.h>
#include "main.h"

/**
* alloc_grid - Allocate a 2-dimensional grid of integers.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: On success, a pointer to the allocated grid.
*         On failure or if width/height is 0 or negative, NULL.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(grid[j]);
				free(grid);
				return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
