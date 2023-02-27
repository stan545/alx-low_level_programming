#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all different
 *combination of three digits.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d1, d2, d3, n = 0;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (d2 = d1 + 1; d2 <= '9'; d2++)
		{
			for (d3 = d2 + 1; d3 <= '9'; d3++, n++)
			{
				if (n > 0)
				{
					putchar(44);
					putchar(32);
				}

				putchar(d1);
				putchar(d2);
				putchar(d3);
			}
		}
	}
	putchar(10);
	return (0);
}
