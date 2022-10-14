#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - This function prints strings
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}


	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (separator == NULL)
		{
			if (i == n - 1)
			{
				printf("%s\n", str);
			}
			else
				printf("%s", str);
		}
		else
		{
			if (i == n - 1)
			{
				printf("%s\n", str);
			}
			else
				printf("%s%s", str, separator);
		}
	}
	va_end(ptr);
}
