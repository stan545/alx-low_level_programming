#include "main.h"

void print_number(int n)
{
	if (n == 0)
	{
		_putchar(n + '0');
		_putchar(10);
	}
	if (n / 10 < 0 || n % 10 < 0)
	{
		_putchar('-');
		_putchar(n / 10 + 66);
		_putchar(n % 10 + 64);
		_putchar(10);
	}
	else if (n / 10 == 0)
	{
		if (n < 0)
		{
			_putchar('-');
		}
		_putchar(n % 10 + '0');
		_putchar(10);
	}
	else if (n / 10 > 0 && n / 100 == 0)
	{
		if (n < 0)
		{
			_putchar('-');
		}
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(10);
	}
	else if (n / 100 > 0 && n / 1000 == 0)
	{
		if (n < 0)
		{
			_putchar('-');
		}
		_putchar(n / 100 + '0');
		_putchar(n / 10 + 8);
		_putchar(n % 10 + '0');
		_putchar(10);
	}
}

int main()
{
	print_number(98);
	print_number(402);
	print_number(432);
	print_number(0);
	print_number(-98);
	print_number(-72);
	return(0);
}
