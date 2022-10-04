#include <stdlib.h>
#include "main.h"

/**
 * free_grid - This function a 2D array of integer
 * @height: The height of the array to be freed
 * @grid: 2D array of integer type
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
