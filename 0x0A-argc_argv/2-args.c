#include <stdio.h>

/**
* main- Entry point that arguments
* @argv: Argument vector it holds the command line arguments
* @argc: Argument count which counts the number of arguments given.
* Return: 0 if successful.
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

