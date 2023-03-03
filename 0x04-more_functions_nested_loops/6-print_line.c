#include "main.h"

/**
 * print_line - a function that drawws a straight line int the format
 * @n: the number of times the character '_' should be printed
 */

void print_line(int n)
{
	int count;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (count = 0; count <= n; count++)
		{
			_putchar('_');
		}
		_putchar(10);
	}
}
