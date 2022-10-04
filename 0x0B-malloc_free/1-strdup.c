#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - This funtion returns a pointer to a string
 * which is a copy of the string given as parameter
 * @str: A string pass as parameter
 * Return: A pointer to the duplicate string (ps) on success,
 * else return NULL
 */
char *_strdup(char *str)
{
	int size = 0;
	char *ps;
	int i;

	for (i = 0; str[i]; i++)
	{
		size++;
	}
	ps = malloc(sizeof(char) * (size));
	if (ps == 00)
	{
		return (00);
	}
	if (str == 00)
	{
		return (00);
	}
	for (i = 0; str[i]; i++)
	{
		ps[i] = str[i];
	}
	ps[i] = 00;
	return (ps);
}
