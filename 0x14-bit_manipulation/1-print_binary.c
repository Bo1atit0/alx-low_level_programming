#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number..
 *
 * @n: the unsigned integer.
 *
 * Return: The binary representation of the number.
 */

void print_binary(unsigned long int n)
{
int i, leadingzero = 1;
unsigned long int mask;

if (n == 0)
{
_putchar ('0');
}
for (i = sizeof(n) * 8 - 1; i >= 0; i--)
{
 /* n = n >> 1;*/
mask = 1 << i;

if (n & mask)
{
_putchar ('1');
leadingzero = 0;
}
else if (!leadingzero)
{
_putchar ('0');
}

}
}
