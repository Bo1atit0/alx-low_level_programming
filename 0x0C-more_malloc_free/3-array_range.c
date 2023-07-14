#include<stdlib.h>
#include "main.h"


/**
 * array_range - creates an array of integers
 * @min: minimum value for integer
 * @max: maximum value of integers
 *
 * Return: pointer to newly allocated memory
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	size = max - min + 1;
	if (min > max)
	return (NULL);

	arr = malloc(size * sizeof(int));

	if (!arr)
	return (NULL);

	for (i = 0; min <= max; i++)
	{
	arr[i] = min++;
	}

	return (arr);
}
