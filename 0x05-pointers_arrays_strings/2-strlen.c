#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: input str.
 * Return: i (length of string).
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + 1))
	{
		i++;
	}
	return (i);
}
