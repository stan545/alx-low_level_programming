#include "function_pointers.h"

/**
 * int_index - A funtion that searchs for an integer
 * @size: Number of elements in the array
 * @array: An array of integers
 * @cmp: A pointer to a function used to compare values
 * Return: If no element matches or size <= 0 - -1.
 * Otherwise - The index of the first element for which
 * the cmp function does not return 0.
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) !=  0)
			return (i);
	}
	return (-1);

}
