#include "main.h"
/**
 * free_grid - A function that frees 2D created by alloc_grid
 * @grid: a 2D demensional array
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
