#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representstion of a number.
 * @n: the number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n * 1) + '0');
}
