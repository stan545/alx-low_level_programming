#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy a string starting from index 0 to `dest`
 * @dest: This is the pointer to the destination array where
 *content is to be copied
 * @src: This is the string to be copied
 * @n: The number of characters to be copied  from Source
 * Return: the pointer dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
