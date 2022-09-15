#include "main.h"

/**
  * _isupper - checks for uppercase
  *
  * Description: A function that checks for uppercase
  * @c: charcter to check for case
  *
  * Return: 1 (uppercase)
  * otherwise Return 0.
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
