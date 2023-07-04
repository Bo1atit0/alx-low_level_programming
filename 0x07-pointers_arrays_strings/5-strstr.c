#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */

char *_strstr(char *haystack, char *needle)
{
int l;

	while (*haystack)
	{
	for (l = 0; haystack[l] != '\0'; l++)
	{
	if (*haystack != 32)
	{
	if (*needle != '\0')
	{
	if (haystack[l] == *needle)
	return (needle);
	}
	}
	}
	}
	return (NULL);
	}
