#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: pointer to destination array
 * @src: pointer to source array
 * @n: number of bytes to be copied
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;

	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}
