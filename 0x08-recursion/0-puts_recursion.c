#include "main.h"

/**
  * _puts_recursion - This prints astring folowed by a new line.
  * @s: a pointer to character string s
  * Return: void
  */
void _puts_recursion(char *s)
{
	if (*s != 00)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar(10);
}
