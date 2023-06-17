#include<stdio.h>
/**
 * main - print three digits using putchar
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int r;

	for (n = 0; n <= 9; n++)
	{
		for (m = n + 1; m <= 9; m++)
		{
			for (r = m + 1; r <= 9; r++)
			{
			putchar(n + '0');
		putchar(m + '0');
	putchar(r + '0');
	if (n < 7 || m < 8 || r < 9)
	{
	putchar(',');
putchar(' ');
	}
	}
		}
	}
	putchar('\n');
	return (0);
}
