#include "main.h"

/**
 * _strdup - duplicates a given string and returns a dynamically allocated copy
 *	     of the string
 * @str: The string to be duplicated
 * Return: A pointer to the duplicated string if successful, or NULL if the
 * input string is NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *newStr;
	int i, len;

	len = 0;
	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		i++;
	}
	newStr = malloc((i + 1) * sizeof(char));
	if (newStr == NULL)
	{
		return (NULL);
	}

	for (len = 0; len < i; len++)
	{
		newStr[len] = str[len];
	}
	newStr[len] = '\0';

	return (newStr);
}
