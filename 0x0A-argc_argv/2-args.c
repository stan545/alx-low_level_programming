#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: numbber of arguments
 * @argv: array of arguments
 * Return: (0);
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
