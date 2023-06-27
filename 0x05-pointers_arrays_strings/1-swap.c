#include "main.h"

/**
* swap_int - swaps the values of two integers.
 * @a: pointer to a
 * @b: pointer to b
 * Return: 0
*/


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
