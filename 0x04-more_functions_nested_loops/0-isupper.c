#include "main.h"
#include <ctype.h>

/**
 * _isupper - Checks for uppercase
 * @c: input variable
 * Return: 0 or 1 if it is upper or not respecctively.
 */
int _isupper(int c)
{
	if (!(isupper(c)))
	{
		return (0);
	}
	else
		return (1);
}
