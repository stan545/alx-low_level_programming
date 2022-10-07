#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
  * string_nconcat - Fuction concates two string
  * @s1: string 1
  * @s2: string 2
  * @n: unnsigned integer in bytes that determines if the entire
  *s2 string will be used
  * Return: Pointer to newly allocated space in memory containing
  *string s1
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		ptr = malloc(len1 + len2 + 1);
	}
	else
	{
		ptr = malloc(n + len1 + 1);
		len2 = n;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = 00;
	return (ptr);
}
