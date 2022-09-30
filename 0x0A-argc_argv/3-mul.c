#include <stdio.h>
#include <stdlib.h>

/**
* main- Entry point that arguments
* @argv: Argument vector it holds the command line arguments
* @argc: Argument count which counts the number of arguments given.
* Return: 0 if successful.
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = 1;

		for (i = 1; i < argc; i++)
		{
			result = result * atoi(argv[i]);
		}
		printf("%d\n", result);
		return (0);
	}
}

