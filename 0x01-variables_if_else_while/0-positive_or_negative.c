#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks for positivity or negativity of a random number
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
