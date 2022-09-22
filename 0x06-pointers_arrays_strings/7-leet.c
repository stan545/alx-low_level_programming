#include "main.h"

/**
 * leet - This function encodes the inputted string
 * @s: input string
 * Return: s
 */
char *leet(char *s)
{
	int n = 0, i;
	int lowerCaseLetters[] = {97, 101, 111, 116, 108};
	int upperCaseLetters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + n) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + n) == lowerCaseLetters[i] || *(s + n) == upperCaseLetters[i])
			{
				*(s + n) = numbers[i];
				break;
			}
		}
		n++;
	}
	return (s);
}
