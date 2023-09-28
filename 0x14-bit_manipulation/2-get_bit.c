#include "main.h"
#include <stdio.h>

/**
 * get_bit - gets bit at an index.
 *
 * @n: contains the binary bits.
 * @index: index of bit to get (0-based index).
 * Return: The bit retrieved.
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int mask = 1;
int res;

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
res = (n >> index) & mask;
return (res);
}
