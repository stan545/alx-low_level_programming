#include "main.h"

/**
 * print_most_numbers - function that prints numbers 0-9 except 2 & 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		if (num == 50)
		{
			continue;
		}
		if (num == 52)
		{
			continue;
		}
		_putchar(num);
	}
	_putchar(10);
}
