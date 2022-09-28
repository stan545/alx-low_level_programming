#include "main.h"

/**
  * _strlen_recursion - A fuction that returns the length of a string.
  * @s: A pointer of type char
  * Return: The length of the string if not null
  */
int _strlen_recursion(char *s)
{
	if (*s != 00)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);

}
