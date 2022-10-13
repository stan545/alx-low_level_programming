#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	va_list ptr;

	if (n == 0)
		return (0);
	va_start (ptr, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg (ptr, unsigned int);
	}
	va_end (ptr);

	return (sum);
}

int main(void)
{
	int sum;

	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	return (0);
}
