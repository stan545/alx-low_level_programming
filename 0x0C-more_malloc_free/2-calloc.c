#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc - This function allocates memory for an array, using malloc
 * @nmemb: The number of member of the array
 * @size: The size in byte of each member of the array
 * Return: NULL if nmemb or size is equal to 0 or if malloc fails.
 *otherwise- return a pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * sizeof(size));
	if (ptr == 00)
	{
		return (NULL);
	}
	while (i < (size * nmemb))
	{
		ptr[i] = '\0';
		i++;
	}
	return (ptr);
}
