#include <stdio.h>
#include "main.h"

/** 
 * argstostr - Concatenates all arguments of the program into a string;
 * arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the argument
 * Return: NULL if ac == 0 & av == NULL, or if the function fails
 * otherwise return a pointer to the new string.
 */

char *argstostr(int ac, char **av)
{
        int i;

	if (ac == 0 || av == 00)
	{
		return (00);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			printf("%s\n", av[i]);
		}
		return (av[i]);
	}
	return (*av);
}


