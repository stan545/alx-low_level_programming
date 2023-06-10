#include <stdio.h>

/**
 * main - an illustration of how argument to main works
 * @argc: Holds argument count (array size)
 * @argv: Holds argument vector, which is a one-dimensional array
 * Return: Always return 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc-1)]);
	return (0);
}
