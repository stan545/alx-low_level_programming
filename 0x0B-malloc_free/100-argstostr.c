#include "main.h"

char *argstostr(int ac, char **av)
{
	char **str, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	str = malloc(sizeof (int *) * ac);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		str[i] = av[i];
		_putchar('\n');
	}
	return (str);
}
