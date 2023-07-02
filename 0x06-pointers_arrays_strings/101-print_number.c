#include "main.h"

/**
 * print_number -  prints all integers
 *
 * @n: contains integers
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 9)
	{
		_putchar ('-');
		n = -n;
	}

	int temp = n;
	int digit = 0;
	{
		while (temp > 0)
		{
			temp /= 10;
			digit++;
		}
			int divisor = 1;
			int i;
		while (digit > 0)


			for (i = 0; i < digit; i++)
			{
				divisor *= 10;
			}
			int num = n / divisor;

			_putchar (num + '0');

					n %= divisor;
					digit--;
					}
					}


