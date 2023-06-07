#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - function checks for alphabetic characters
 * @c: input variable name
 * Return: (0) if is alphabet, else 1 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
