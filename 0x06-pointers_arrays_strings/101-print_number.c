#include "main.h"
/**
 * print_number -  prints all integers
 * @n: contains integers
 */

void print_number(int n)
{
	int digits, temp;

	if (n == 0)
	{
	_putchar('0');
	return;
	}
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	digits = 0;
	temp = n;

	while (temp > 0)

	{
	temp /= 10;
	digits++;
	}

	while (digits > 0)
	{
	int divisor = 1;
	int digit, i;

	for (i = 1; i < digits; i++)
	{
	divisor *= 10;
	}
	digit = n / divisor;
	_putchar(digit + '0');
	n %= divisor;
	digits--;
	}
}
