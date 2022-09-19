#include "main.h"

/**
  * puts_half - Prints half of a string,followed by a new line
  * @str: input string
  * Return: void
  */
void puts_half(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	if (j % 2 == 0)
	{
		i = (j / 2);
	}
	else
	{
		i = (j - 1) / 2;
		i += 1;
	}

	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
