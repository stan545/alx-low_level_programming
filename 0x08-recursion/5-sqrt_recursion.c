#include "main.h"

/**
 * calculate_sqrt - Helper function to recursively calculate
 * the natural square root of a number.
 * @n: The number for which we want to find the square root.
 * @val: The current guess value for the square root.
 *
 * Return: The natural square root of 'n' if it exists, -1 otherwise.
 */
int calculate_sqrt(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val > n)
	{
		return (-1);
	}
	else
		return (calculate_sqrt(n, val + 1));
}

/**
 * _sqrt_recursion - Function to calculate the natural
 * square root of a number recursively.
 * @n: The number for which we want to find the square root.
 *
 * Return: The natural square root of 'n' if it exists, -1 if 'n' is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (calculate_sqrt(n, 0));
}
