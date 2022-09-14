#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that computes and prints the sum of all the
 *multiples of 3 0r 5 below 1024.
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
