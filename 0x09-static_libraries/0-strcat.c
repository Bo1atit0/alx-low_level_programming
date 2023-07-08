#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string that will be appended to the destination string.
 *
 * Return: A pointer to the resulting concatenated string.
 */


char *_strcat(char *dest, char *src)
{
	char *dest1 = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (dest1);
}
