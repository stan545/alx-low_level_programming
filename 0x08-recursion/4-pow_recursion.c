#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised to power of y
 * @x: an integer value a.k.a the base number
 * @y: an integer value a.k.a  the power value
 * Return: returns result of the power, else return 1 or -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
