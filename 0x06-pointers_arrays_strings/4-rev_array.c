#include <stdio.h>
#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers.
 *
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < (n / 2); x++)
	{
		y = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = y;
	}
}
