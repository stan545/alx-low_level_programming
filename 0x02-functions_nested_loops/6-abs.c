#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @n: an ingeger variable
 * Return: the positive value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	return (n);
}
