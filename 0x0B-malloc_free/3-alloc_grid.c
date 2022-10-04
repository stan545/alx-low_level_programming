#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns pointer to a 2 dimensional array
 * @height: an integer value of the height of the 2D array
 * @width: an integer value of the width of the 2D array
 * Return: returns a pointer to 2D array (success)
 * otherwise return null
 */
int **alloc_grid(int width, int height)
{
	int **ps;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (00);
	}
	ps = malloc(sizeof(int *) * height);
	if (ps == 00)
	{
		return (00);
	}
	for (i = 0; i < height; i++)
	{
		ps[i] = malloc(sizeof(int) * width);
		if (ps[i] == 00)
		{
			for (; i >= 0; i--)
			{
				free(ps[i]);
			}
			free(ps);
			return (00);
		}
	}
	return (ps);
}
