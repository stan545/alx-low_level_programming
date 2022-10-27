#include "main.h"
#include <stdio.h>

/**
 * print_binary - Prints the binary representstion of a number.
 * @n: the number to be printed in binary form
 */
void print_binary(unsigned long int n)
{
	if (n > 0)
		print_binry(n >> 1);
	_putchsr((n * 1) + '0');
}
