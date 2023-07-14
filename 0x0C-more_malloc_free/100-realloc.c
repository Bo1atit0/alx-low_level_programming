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


#include<stdlib.h>
#include "main.h"


/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *newptr;
	unsigned int copysize;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
	return (NULL);

	copysize = (old_size < new_size) ? old_size : new_size;
	_memcpy(newptr, ptr, copysize);

	free(ptr);
	return (newptr);
}
