#include <stdio.h>
#include <unistd.h>

/**
 * main - Print Dora's Quote
 *
 * Description: A program that prints Dora Korpar's quote
 *
 * Return: Always return 1 (success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
