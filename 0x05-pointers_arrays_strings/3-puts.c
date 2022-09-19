#include "main.h"

/**
 * _puts - Prints a string, followed by a new line to stdout
 * @str: inputs string.
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] != '\0')
		{
			_putchar(str[count]);
			count++;
		}
		else
		{
			count = -1;
			_putchar('\n');
		}
	}
}
