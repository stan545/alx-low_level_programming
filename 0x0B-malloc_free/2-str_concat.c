
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - This funtion returns a pointer to a string
 * which is a copy of the string given as parameter
 * @s1: first string
 * @s2: Second string to be concatenated to initial string
 * Return: A pointer to the new allocated memory (ps) on success,
 * else return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ps;
	int i, size = 0, str_count = 0;

	if (s1 == 00)
	{
		s1 = "";
	}
	if (s2 == 00)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		size++;
	}
	ps = malloc(sizeof(char) * size);
	if (ps == 00)
	{
		return (00);
	}
	for (i = 0; s1[i]; i++)
	{
		ps[str_count++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ps[str_count++] = s2[i];
	}
	return (ps);
}
