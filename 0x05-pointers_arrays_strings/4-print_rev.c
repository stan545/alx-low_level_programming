#include "main.h"

/**
 * print_rev - Print the reverse of string
 *
 * @s: Input string
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] != '\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	for (count--; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
