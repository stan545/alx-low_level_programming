#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - This function prints numbers
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
	{
		printf("\n");
		return;
	}


	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(ptr, unsigned int));
			}
			else
				printf("%d", va_arg(ptr, unsigned int));
		}
		else
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(ptr, unsigned int));
			}
			else
				printf("%d%s", va_arg(ptr, unsigned int), separator);
		}
	}
	va_end(ptr);
}
