#include <stdio.h>

/**
 * main - A program that prints the number of arguments
 * @argc: Arguement count
 * @argv: Arguement vector
 * Return: Always (0) for success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", (argc - 1));
	return (0);
}
