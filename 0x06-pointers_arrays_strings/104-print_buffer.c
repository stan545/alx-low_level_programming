#include <stdio.h>
#include "main.h"

/**
  * print_buffer - This functions print the order size bytes of
  *the buffer pointed by b
  * @b: pointer
  * @size: size in bytes of the buffer content.
  * Return: Void
  */

void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size <= 0)
		printf("\n");
	else
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%.8x:", x);
			for (y = x; y < x + 10; y++)
			{
				if (y % 2 == 0)
				{
					printf(" ");
				}
				if (y < size)
				{
					printf("%.2x", *(b + y));
				}
				else
				{
					printf("  ");
				}
			}
			printf(" ");
			for (z = x; z < x + 10; z++)
			{
				if (z >= size)
					break;
				if (*(b + z) < 32 || *(b + z) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + z));
			}
			printf("\n");

		}
	}
}

