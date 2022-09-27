#include "main.h"

/**
  * _strchr - A funtion taht locates a character in a string.
  * @c: a character
  * @s: a pointer to the string
  * Return: returns a pointer
  */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
