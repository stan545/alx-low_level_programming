#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: an integer variable
 * Return: i
 */
int print_last_digit(int n)
{
	int i;

	if (n > 0)
	{
		i = n % 10;
		_putchar(i + 48);
	}
	else
	{
		i = ((n * -1) % 10);
		_putchar(i + 48);
	}
	return (i);
}
