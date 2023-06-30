#include "main.h"

/**
 * string_toupper - lowercase to uppercase
 *
 * @str: pointer to string
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - ('a' - 'A');
	}
	ptr++;
	}
	return (str);
}
