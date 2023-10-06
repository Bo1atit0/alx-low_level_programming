#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts the number of bits
 * you would need to flip to get from one number to another.
 *
 * @n: contains the first binary bits.
 * @m: second binary bits.
 * Return: number of bits that needs to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff = n ^ m;
unsigned int count = 0;

while (diff != 0)
{
count = count + (diff & 1);
diff = diff >> 1;
}

return (count);
}
