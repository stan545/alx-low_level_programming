#include "main.h"

/**
  * factorial - a function that calculates the factorial of a given number
  * @n: an integer value given
  * Return: 
  */

int factorial(int n)
{
	if(n >= 0)
	{
		if(n==0)
			return 1;
		else
		{
			return (n * factorial(n-1));
		
		}
	}
	else
		return -1;
}
