#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print a list of numbers.
 * @separator: separator string to be printed between the numbers
 * @n: total number of integer arguments.
 * ...: The variable number of integer arguments to be printed
 *
 * Description: This function prints the provided numbers with the specified.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	num = va_arg(args, int);
	printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");
}
