#include "main.h"

/**
 * _pow_recursion - This function calculates the vlues of x^y
 * @x: The interger value
 * @y: The power of the integer
 * Return: The value of x^y or return (-1) if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
	else
		return (-1);
}
