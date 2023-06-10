#include <stdio.h>

/**
 * main - A program taht prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 when succesful else exit -1 error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
