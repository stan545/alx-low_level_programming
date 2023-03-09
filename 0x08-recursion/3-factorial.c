#include "main.h"

/**
  * factorial - a function that calculates the factorial of a given number
  * @n: an integer value given
  * Return: Always 0 (success) else return (-1) if error occur
  */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		else
			return (n * factorial(n - 1));
	}
	else
		return (-1);
}
