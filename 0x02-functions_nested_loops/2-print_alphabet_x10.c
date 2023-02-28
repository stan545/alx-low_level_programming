#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - function prints lowercasse alphabet
 * Return: void
 */
void print_alphabet_x10(void)
{
	int alph, count;

	for (count = 0; count < 10; count++)
	{
		for (alph = 97; alph < 123; alph++)
		{
			_putchar(alph);
		}
	_putchar(10);
	}
}
