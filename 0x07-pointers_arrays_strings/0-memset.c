#include "main.h"

/**
  * _memset - This function fils the first n bytess of the memory area
  *pointed to by s.
  * @s: Starting address (pointer) of memory to be filled
  * @b: the value to be filled
  * @n: the number of bytes to be filled
  * Return: a pointer s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
