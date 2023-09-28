#include "main.h"
#include <stdio.h>

/**
 * set_bit - gets bit at an index.
 *
 * @n: contains the binary bits.
 * @index: index of bit to get (0-based index).
 * Return: 1 if successful else -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = (1 << index) | *n;

return (1);
}
