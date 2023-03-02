#include <stdio.h>
#include "main.h"

/**
  * string_toupper - The function changes all lowercase letters of a string to
  *uppercase
  * @b: string
  * Return: b
  */
char *string_toupper(char *b)
{
	int x;

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] > 96 && b[x] < 123)
		{
			b[x] -= 32;
		}
	}
	return (b);
}
