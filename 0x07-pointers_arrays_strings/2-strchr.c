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
	int len;

	for (len = 0; s[len] != '\0'; len++)
	if (s[len] == c)
	{
	return (&s[len]);

	}
	return (NULL);
}
