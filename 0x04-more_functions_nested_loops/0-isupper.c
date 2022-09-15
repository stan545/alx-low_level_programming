#include "main.h"

/**
  * main - int _isupper(int c)
  *
  * Description: A function that checks for upper case character.
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
