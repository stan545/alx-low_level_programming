#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program taht prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 when succesful else exit -1 error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 1;
	int result = 1;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		while (argv[i] != NULL)
		{
			result *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
