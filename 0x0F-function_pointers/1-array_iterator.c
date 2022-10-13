#include "function_pointers.h"

/**
 * array_iterator - Function iterates through an array pointed to
 * by the funtion pointer
 * @action: a funtion pointer
 * @size: The size of the array
 * @array: a pointer to an array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

