#include <stdio.h>

/**
 * main - an illustration of how argument to main works
 * @argc: Holds argument count (array size)
 * @argv: Holds argument vector, which is a one-dimensional array
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
