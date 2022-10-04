#include <stdlib.h>
#include "main.h"

int **alloc_grid(int width, int height)
{
	int **ps;
	int i;
	
	 if (width <= 0 || height <= 0)
	 {
	 	return 00;
	 }
	ps = malloc(sizeof(int *) * height);
	if (ps == 00)
	{
		return 00;
	}
	for (i = 0; i < height;i++)
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
	/*for (i = 0; i < height; i ++)
	{
		for (j=0; j < width;j++)
		{
			ps[i][j] = 0;
		}
	}*/
	return (ps);
}
