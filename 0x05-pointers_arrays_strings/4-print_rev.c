#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @s: string to be printed in rev
 *
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int l;
	int n = 0;

	while (s[n] != '\0')
		n++;

	for (l = n - 1; l >= 0; l--)
	{
		_putchar(s[l]);

			}
		_putchar('\n');
}
