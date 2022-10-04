#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *s;

	s = str_concat("ALX SE ", "Holberton");
	if (s == 00)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
