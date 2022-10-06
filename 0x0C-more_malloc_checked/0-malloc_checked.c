#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: an unsigned int, which holds the size of desire memory
 * Return: pointer to the allocated memory on success
 * otherwise- return 98.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == 00)
	{
		exit(98);
	}
	return (ptr);
}
