#include <stdio.h>
#include "main.h"

/**
 * print_sign - function prints the sign of a number
 * @n: integer input value
 * Return: -1 if negative, 0 if zero, 1 if positive
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(43);
		return (1);
	}
}
