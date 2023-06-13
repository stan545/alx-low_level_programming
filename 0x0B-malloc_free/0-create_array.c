#include "main.h"

/**
 * create_array - a function that creates an array of chars, and
 * initializes it with a specific char
 * @size: An unsigned integer that shows the size of the array
 * @c: a character which with be assigned to each block of the array
 * Return: returns pointer to array on success, else return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i = 0;
	
	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}	
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
