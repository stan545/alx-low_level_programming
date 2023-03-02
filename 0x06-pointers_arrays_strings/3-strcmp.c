#include <stdio.h>
#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: returns negative integer value if s1 < s2 or 0 if equal
 *or Positive integer if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
	}
	return (0);
}
