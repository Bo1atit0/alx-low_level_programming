#include "main.h"

/**
 * _memset - function to fill memory
 * @s: address of memory
 * @b: variable containnig value
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int length;

	for (length = 0; length < n; length++)
	{
	s[length] = b;
	}
	return (s);
}

