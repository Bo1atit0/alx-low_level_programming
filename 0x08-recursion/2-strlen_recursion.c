#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: pointer to string
 *
 * Return: returns the length of a string
 */

int _strlen_recursion(char *s)

{
	int l = 0;

	if (s[l] == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
