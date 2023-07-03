#include "main.h"

/**
 * _strchr - function that locates a character
 * @s: source string
 * @c: character
 *
 * Return: pointer to first occurence of char
 */


char *_strchr(char *s, char c)
{

	while (*s)
	{
	if (*s != c)

	s++;

	else

	return (s);
	}
	if (c == '\0')
	return (s);


	return (NULL);

}
