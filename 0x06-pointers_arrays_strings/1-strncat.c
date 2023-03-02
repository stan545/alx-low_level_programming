#include "main.h"
#include <stdio.h>

/**
  * _strncat -  This function is similar to _strncat function,
  *except that it will use at most n bytes from src.
  * @src: char string to concatenate
  * @dest: char string to be concatenated to
  * @n: the number of bytes used
  * Return: a pointer to dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != 0 && n > 0; x++, n--, y++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
