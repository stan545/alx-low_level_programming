#include "main.h"

/**
 * print_numbers - a function that prints numbers 0-9
 *using only _putchar
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num + 48);
	}
	_putchar(10);
}
