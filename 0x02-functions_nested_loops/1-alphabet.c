#include <unistd.h>
#include "main.h"

/**
  * print_alphabet - prints the alphabets
  *
  * Return: returns 0
  */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar (alpha);
	}
	_putchar ('\n');
}
