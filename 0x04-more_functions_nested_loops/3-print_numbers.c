#include "main.h"

/**
  * print_number - prints the numbers
  *
  * Description: A functions that prints the numbers from 
  * 0 to 9
  *
  * Return: Return 0.
  */
void print_numbers(void)
{
	int c;

	for (c = 'o'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
