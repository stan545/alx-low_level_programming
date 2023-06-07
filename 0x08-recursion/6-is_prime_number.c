#include "main.h"

/**
 * is_prime - cheecks if value if prime
 * @n: input number
 * @a: the iterator
 * Return: 1 if n is prime, 0 if n is not prime
 */
int is_prime(int n, int a)
{
	if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, a + 1));
}

/**
 * is_prime_number - detects if numb is prime
 * @n: input num
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
