#include <stdio.h>
/**
 * main - a fuction that prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int index;

	for (index = 0; word[index] != 00; index++)
	{
		putchar(word[index]);
	}
	putchar(10);
	return (0);
}
