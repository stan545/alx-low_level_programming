#include "main.h"

/**
  * _puts_recursion - This prints astring folowed by a new line.
  * @s: a pointer to character string s
  * Return: void
  */
void _print_rev_recursion(char *s)
{
	if (*s != 00)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
