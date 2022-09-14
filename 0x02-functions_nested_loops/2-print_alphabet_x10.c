#include <unistd.h>
#include "main.h"

/**
  * print_alphabet_x10 - prints the alphabets 10 times
  *
  * Return: returns 0
  */

void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		_putchar ('\n');
	}
}
