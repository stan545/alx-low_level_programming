#include "main.h"

/**
 * times_table - a function that prints a times table from 1-9
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int m;

			m = i * j;
			if (j != 0)
			{
				_putchar(44);
				_putchar(32);
			}
			if (j == 0)
			{
				_putchar(48);
			}
			else if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
			else if ((m < 10) && (j != 0))
			{
				_putchar(32);
				_putchar((m % 10) + '0');
			}
		}
		_putchar(10);
	}
}
