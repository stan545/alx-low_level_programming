 #include <stdio.h>

/**
 * is_prime - a function that calculate the prime factors
 * @num: a long integer value to be calculated
 */
void is_prime(long int num)
{
	long int factor;

	for (factor = 2; factor <= num; factor++)
	{
		while (num % factor == 0)
		{
			num = num / factor;
		}
		if (num == 1 || num == factor)
		{
			printf("%ld\n", factor);
			break;
		}
	}
}

/**
 * main - calls on the function is_prime
 * Return: Always (0)
 */
int main(void)
{
	long int prime = 612852475143;

	is_prime(prime);
	return (0);
}
