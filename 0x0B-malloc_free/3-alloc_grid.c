#include "main.h"

/**
 * **alloc_grid - A function that returns a
 * pointer to a 2 dimensional array of integers
 * @width: An integer value for width
 * @height: An integer value for height
 * Return: returns a pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (j -= i; j >= 0; j--)
			{
				free(grid[j]);
			}
			free(grid);
			return (0);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
