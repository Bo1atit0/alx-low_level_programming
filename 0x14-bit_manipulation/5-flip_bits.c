#include "main.h"
#include <stdio.h>

/**
 * flip_bit - counts the number of bits you would need to flip to get from one number to another.
 *
 * @n: contains the first binary bits.
 * @m: second binary bits.

 * Return: number of bits that needs to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i;
int count = 0;
int bit1, bit2;
  
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
bit1 = (n >> i) & 1;
bit2 = (m >> i) & 1;

if (bit1 != bit2)
{
n = n ^ (1 << i);
count++;
}
}
return (count);
  }