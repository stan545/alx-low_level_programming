#include <unistd.h>
#include "main.h"

/**
  * print_last_digit - prints the last digit of a number
  *
  * @n: the digit whose last digit will be printed
  *
  * Return: returns the value of the last digit
  */
int print_last_digit(int n)
{
	int nv;

	if (n < 0)
	{
		nv = -1 * (n % 10);
	}
	else
	{
		nv = n % 10;
	}
	_putchar(nv + '0');
	return (nv);
}
