#include <stdio.h>
#include <ctype.h>
/**
 * _islower - function checks for lowercase character
 * @c: the variable to check
 * Return: 1 if not, else 0 if lower
 */
int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
		return (0);
}
