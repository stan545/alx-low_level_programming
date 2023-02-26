#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - contain function to print random numbers
 *
 * Return: Always (0) success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		int m = n % 10;

		if (m == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, m);
		}
		else if (m < 6 && m != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
		}
		else
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		}
	}
	return (0);
}
