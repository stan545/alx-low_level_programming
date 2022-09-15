#include "main.h"

/**
  * print_most_numbers - prints the numbers 0-9
  *
  * Description: A functions that prints the numbers from
  * 0 to 9
  *
  * Return: Return 0.
  */

void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
		_putchar(c);
	}
	_putchar('\n');
}
