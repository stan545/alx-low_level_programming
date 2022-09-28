#include "main.h"

/**
  * _print_rev_recursion - This prints the rev of a string
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
