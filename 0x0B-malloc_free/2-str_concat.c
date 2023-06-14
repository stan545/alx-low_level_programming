#include "main.h"

/**
 * _strlen - Check for length of the string
 * @s: A pointer to the string
 * Return: return length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
 * *str_concat - A function that concates two strings
 * @s1: The first string to concatenated
 * @s2: The second string to concatenated
 * Return: return pointer to newly allocated space in the memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int ij = 0;
	int k = 0;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = _strlen(s1);
	j = _strlen(s2);
	ij = (i) + (j);	/* Total of length for both strings */
	concat = malloc((ij) * sizeof(char) + 1); /* allocate memory */
	if (concat == NULL) /* check is allocation fails */
	{
		return (NULL);
	}
	while (k < i)
	{
		concat[k] = s1[k];
		k++;
	}
	k = 0;
	while (k < ij)
	{
		concat[k + i] = s2[k];
		k++;
	}
	concat[k] = '\0';
	return (concat);
}
