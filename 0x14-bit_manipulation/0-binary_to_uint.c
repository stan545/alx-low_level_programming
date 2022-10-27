#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - A function that converts a binary to an unsigned int
 * @b: a pointer to a string of 0 and 1 chars.
 * Return: The convertrd number  OR 0 if there is one or more chars
 *in the string b that is not 0 or 1/ b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;
	int bin = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num = num + (b[len] - '0') * bin;
		bin *= 2;
	}

	return (num);
}
