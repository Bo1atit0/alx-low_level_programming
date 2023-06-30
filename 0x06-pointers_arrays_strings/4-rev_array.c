#include "main.h"

/**
 * reverse_array - reverse string
 *
 * @a: pointer to string
 * @n: string length
 *
 * Return: reversed string
  */

void reverse_array(int *a, int n)
{
	int temp;
	int i;



	int len = n - 1;

	for (i = 0; i < len / 2; i++)
	{
	temp = a[i];
	a[i] = a[len - i];
	a[len - i] = temp;
	}
}
