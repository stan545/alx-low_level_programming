#include <stdlib.h>
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
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == 00)
	{
		return (NULL);
	}
	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = '\0';
	}
	return (ptr);
}
