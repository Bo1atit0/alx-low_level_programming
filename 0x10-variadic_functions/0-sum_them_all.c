#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: The number of integers to sum.
 * @...: A variable number of integer arguments.
 *
 * Description: This function takes an unsigned integer
 * @n, followed by a variable number of integer arguments.
 * It calculates the sum of @n integers and returns sum
 *
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	int num = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
	{
	return (0);
	}

	for (i = 0; i < n; i++)
	{
	num = va_arg(args, int);
	sum += num;
	}
	va_end(args);
	return (sum);

}
