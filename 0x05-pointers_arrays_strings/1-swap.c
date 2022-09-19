#include "main.h"

/**
  * swap_int - sawps values of the integers
  *
  * @a: First int
  * @b: Second int
  * return: 0
  */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
