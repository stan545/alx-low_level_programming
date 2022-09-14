#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints the first 50
 Fibonacci numbers, strating from 1 and 2.
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int first, second, sum, i, n;
	first = 1;
	second = 2;
	
	printf("\n%d %d", first, second);
	n = 50;
	for(i = 1; i <= n; i++)
	{
		if(i <= 2)
		sum = i;
		else
		{
			sum = first + second;
			printf(" %d", sum);
			first = second;
			second = sum;
		}
	}
	return 0;

}
