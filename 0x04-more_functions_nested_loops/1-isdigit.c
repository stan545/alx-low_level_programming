#include "main.h"
#include "ctype.h"

/**
 * _isdigit - a function that checks for digit from 0-9
 * @c: integer variable input
 * Return: an int (0 or 1) as the case may be
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	return (0);
}
