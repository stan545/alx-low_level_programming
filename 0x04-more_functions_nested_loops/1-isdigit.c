#include "main.h"

/**
  * _isdigit - checks for a digit
  *
  * Description: A function that checks for a digit
  * @c: character to check for digit
  *
  * Return: 1 if c is digit,
  * otherwise Return 0.
  */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
