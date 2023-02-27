#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry
  *
  *Description: A program that prints all possible different
  *combination of two digits.
  *
  *Return: 0 (success)
  */
int main(void)
{
	int d1, d2, n = 0;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++, n++)
		{
			if (n > 0)
			{
				putchar(44);
				putchar(32);
			}
			putchar(d1);
			putchar(d2);
		}
	}

	putchar(10);
	return (0);
}
