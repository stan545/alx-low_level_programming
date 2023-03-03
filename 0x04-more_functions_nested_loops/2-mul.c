#include "main.h"

/**
 * mul - a function that multiplies two integer values
 * @a: first integer value
 * @b: second integer value
 * Return: Product (+ or -)
 */

int mul(int a, int b)
{
	int product;

	if (a < 0)
	{
		if (b < 0)
		{
			product = a * b;
			return (product);
		}
		else
		{
			product = (-1 * (a * b));
			return (-product);
		}
	}
	else if (b < 0)
	{
		if (a < 0)
		{
			product = a * b;
			return (product);
		}
		else
		{
			product = (-1 * (a * b));
			return (-product);
		}
	}
	else
		product = a * b;
	return (product);
}
