#include <stdio.h>
#include <unistd.h>
/**
 * main - a function that prints alphabet
 *
 * Return: Aways (0) success
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
