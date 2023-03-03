#include "main.h"

/**
 * print_diagonal - a function that drawws a straight line int the format
 * @n: the number of times the character '_' should be printed
 */

void print_diagonal(int n)
{
	int count;
	int space;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (count = 0; count < n; count++)
		{
			for (space = 0; space < count; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar(10);
		}
	}
}
