#include "main.h"

/**
  * _strlen - Computes the length of a string
  * @s: String to be compared
  *
  * Return: The length of the string
  */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != 00)
	{
		count++;
		i++;
	}
	return (count);
}

/**
  * _compare - Compares the chars in a string
  * @s: String to be compared
  * @beg: char at the beginning
  * @end: char at the end of the string
  *
  * Return: 1 if similar, 0 otherwise
  */

int _compare(char *s, int beg, int end)
{
	if (s[beg] != s[end])
	{
		return (0);
	}
	else if (s[beg] == s[end] && beg == end)
	{
		return (1);
	}
	else if (beg == end - 1 && s[beg] == s[end])
		return (1);
	return (_compare(s, beg + 1, end - 1));
}

/**
  * is_palindrome - Checks to see if a string is palindrome
  * @s: String to be compared
  *
  * Return: 1 if palindrome, 0 if not
  */

int is_palindrome(char *s)
{
	int length, beg, end, r;

	length = _strlen(s);
	beg = 0;
	end = length - 1;
	if (length == 0 || length == 1)
	{
		return (1);
	}
	r = _compare(s, beg, end);
	return (r);
}

