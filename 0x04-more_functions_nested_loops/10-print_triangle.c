#include "main.h"

/**
 * print_triangle - A function that prints hashes to form triangle
 * @size: an integer variable for the size of the triangle
 */

void print_triangle(int size)
{
	int line = 0;
	int hash;
	int space;

	if (size > 0)
	{
		while (line < size)
		{
			for (space = line + 1; space < size; space++)
			{
				_putchar(' ');
			}
			for (hash = 0; hash < line + 1; hash++)
			{
				_putchar('#');
			}
			_putchar(10);
			line++;
		}
	}
	else
	{
		_putchar(10);
	}
}
