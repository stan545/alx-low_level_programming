#include <stdio.h>
#include "main.h"
#include "stdlib.h"

/**
  * create_array - This funtion creates an array of chars
  * @size: The size of the array needed
  * @c: The value of the The index character f the array
  * Return: a pointer to the array, or NULL if failed.
  */

char *create_array(unsigned int size, char c)
{
	char *ps;
	unsigned int i;

	i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ps = malloc(size * sizeof(char));
	if (size == 00)
	{
		return (NULL);
	}
	while (i < size)
	{
		ps[i] = c;
		i++;
	}

	return (ps);
}
