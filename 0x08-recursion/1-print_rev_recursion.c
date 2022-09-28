#include "main.h"

/**
  * _puts_recursion - This prints astring folowed by a new line.
  * @s: a pointer to character string s
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] != 00)
		{
			i++;
		}
		else
			break;
	}
	for (i--;i>=0;i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
