#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: pointer where we search for charachter
 * @needle: character we search for
 * Return: NULL if character is not found, return pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return (NULL);
}
