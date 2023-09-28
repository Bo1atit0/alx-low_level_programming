#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 *
 * @b: A pointer to a binary string. must contain only '0' and '1' characters.
 *
 * Return: The converted unsigned integer, or 0 if an invalid character is found.
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