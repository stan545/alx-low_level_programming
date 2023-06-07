#include "main.h"


/**
 * factorial - a function that returns the factorial of a given number
 * @n: An integer parameter
 * Return: returns the factorial if n if greater than 0, else 1 or -1 if not
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}
