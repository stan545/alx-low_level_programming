#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - A function that returms the sum of all its parameter
 * @n: a parameter passed
 * Return: Returns sum if n != 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ptr, unsigned int);
	}
	va_end(ptr);

	return (sum);
}
