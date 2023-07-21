#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings.
 * @separator: separator string to be printed between the strings
 * @n: total number of integer arguments.
 * ...: The variable number of strings to be printed
 *
 * Description: This function prints a variable number
 * of strings separated by a separator
 */

void print_strings(const char *separator, const unsigned int n, ...)

	{
	unsigned int i = 0;
	const char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, const char*);
	if (str != NULL)
	{
	printf("%s", str);
	}
	else
	{
	printf("(nil)");
	}
	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(args);
	printf("\n");

