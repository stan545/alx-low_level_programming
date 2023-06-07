#include "main.h"

/**
 * _strlen_recursion - functions returns the length of a string recursively
 * @s: The string param
 * Return: returns 0 if string is empty, else return length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != 00)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
