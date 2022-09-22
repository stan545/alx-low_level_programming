#include <stdio.h>
#include "main.h"

/**
 * _strcat - This function appends the src string to the dest string
 * @src: char string to be appended
 * @dest: char string to be appended to.
 * Return:  pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{

	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
	for (y = 0; src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
