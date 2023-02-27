#include <stdio.h>
/**
 * main - function that prints all possible combinations
 * of single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
