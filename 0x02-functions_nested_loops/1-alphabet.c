#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - function prints lowercasse alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 97; alph < 123; alph++)
	{
		_putchar(alph);
	}
	_putchar(10);
}
