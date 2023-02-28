#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
	int alph;

	for (alph = 97; alph < 123; alph++)
	{
		_putchar(alph);
	}
	_putchar(10);
}
