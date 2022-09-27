#include "main.h"

/**
  * _strchr - A funtion that locates a character in a string.
  * @c: a character
  * @s: a pointer to the string
  * Return: returns a pointer if found, else return NULL
  */

char *_strchr(char *s, char c)
{
	char *s1 = s - 1;

	do {
		s1++;
		if (*s1 == c)
			return (s1);
	} while (*s1 != '\0');
	return (0);
}
