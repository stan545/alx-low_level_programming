#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * makeChange - This function gives the number of coins to returned
 * when an amount is parsed to it, irrespective of the currency to
 * be returned
 * @money: The amount to be broken down
 * Return: returns number coins
 */
int makeChange(int money)
{
	int coin;

	coin = 0;

	while (money > 0)
	{
		if (money >= 25)
		{
			money -= 25;
			coin += 1;
		}
		else if (money >= 10)
		{
			money -= 10;
			coin += 1;
		}
		else if (money >= 5)
		{
			money -= 5;
			coin += 1;
		}
		else if (money >= 2)
		{
			money -= 2;
			coin += 1;
		}
		else
		{
			money -= 1;
			coin += 1;
		}
	}
	return (coin);
}

/**
 * main - Entry point of program, it calls on the makechange function
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always return 0 success, else if argc is not 2, return 1
 */

int main(int argc, char *argv[])
{
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		change = 0;
		printf("%d\n", change);
	}
	else
	{
		change = makeChange(atoi(argv[1]));
		printf("%d\n", change);
	}
	return (0);
}
