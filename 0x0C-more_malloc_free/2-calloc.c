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



#include<stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element to be allocated
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
	{
	char *s;

	if (nmemb == 0 || size == 0)

	return (NULL);

	s = malloc(nmemb * size);
	if (!s)

	return (NULL);


	_memset(s, 0, nmemb * size);

	return (s);
	}
