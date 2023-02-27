#include <stdio.h>
/**
 * main - A program that prints all single digit number of base 10
 *
 * Return: Always (0) success
 */
int main(void)
{
	char num;

	for (num = 48; num < 58; num++)
	{
		printf("%c", num);
	}
	printf("\n");
	return (0);
}
