#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - This function checks if input is digit
 * @s: A pointer to character(input)
 * Return: returns (1) is character is digit else return (0)
 */
int is_digit(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/**
 * main - A program that prints all arguments it receives
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 when succesful else exit -1 error
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 1;
	int result = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			int val = is_digit(argv[i]);

			if (val == 1)
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
