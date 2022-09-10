#include <stdio.h>

/**
 * main - Print tha lowercase in reverse
 *
 * Description: print the letter of the alphabet in reverse
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
