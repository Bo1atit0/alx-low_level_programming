#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r, mid;

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (l + r) / 2;
		if (value == array[mid])
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r = mid - 1;
			/*mid = l + r / 2;*/
		}
		else
		{
			l = mid + 1;
			/*mid = l + r / 2;*/
		}
	}
	return (-1);
}
