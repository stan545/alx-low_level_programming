#include "main.h"

/**
  * _strchr - A funtion taht locates a character in a string.
  * @c: a character
  * @s: a pointer to the string
  * Return: returns a pointer
  */
char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += c;
			return (s);
		}
	}
	return ('\0');
}
