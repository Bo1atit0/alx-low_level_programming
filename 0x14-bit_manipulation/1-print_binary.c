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
unsigned long int i;
unsigned  int nBits;
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int leadingzero = 0;

if (n == 0)
{
_putchar('0');
return;
}

while ((n & mask) == 0)
{
mask = mask >> 1;
leadingzero++;
}

nBits =  (sizeof(unsigned long int) * 8 - leadingzero);
for (i = 0; i < nBits; i++)
{
if (n & mask)
{
_putchar('1');
}
else
{
_putchar('0');
}
mask = mask >> 1;
}
}
