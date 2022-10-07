#include <stdlib.h>
#include "main.h"

/**
 * array_range - a funtion that creates an array of integer
 * @min: minimum number
 * @max: maximum number
 * Return: NULL if max < min or if malloc fails.
 *otherwise- return a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int arraylen;

	arraylen = min + max + 1;
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * arraylen);
	if (ptr == 00)
	{
		return (NULL);
	}
	return (ptr);
}
