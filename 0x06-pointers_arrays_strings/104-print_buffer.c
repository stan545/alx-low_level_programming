#include <stdio.h>
#include "main.h"

void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size <= 0)
	{
		printf("\n")
	}
	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%.8x:", x);
			for (y = x; y < x + 10; y++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
				{
						printf("%.2x", j);
				}
				else
				{
			
					printf(" ");
				}
			}
			printf(" ");
			for (z = x, z < x + 10; z++)
			{
				if (k >= size)
					break;
				if (*(b + k) < 32 || *(b + k) > 126)
					printf("%cc", '.');
				else
					printf("%c", *(b+k));
			}
			printf("'\n'")

		}
	}
}


