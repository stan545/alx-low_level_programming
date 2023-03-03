#include "main.h"

void print_square(int size)
{
	int line;
	int width = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (width < size)
		{
			for (line = 0; line < size; line++)
			{
				_putchar('#');
			}
			_putchar(10);
			width++;
		}
	}
}
