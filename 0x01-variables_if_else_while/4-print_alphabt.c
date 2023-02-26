#include <stdio.h>
#include <unistd.h>
/**
 * main - a function that prints alphabet
 *
 * Return: Aways (0) success
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
			putchar(i);
	}
	putchar(10);
	return (0);
}
