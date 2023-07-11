#include<stdlib.h>
#include "main.h"
/**
* _strdup - duplicates the str into s
* @str: string to be duplicated
*
* Return: pointer to newly allocated space in memory
*/

char *_strncpy(char *dest, char *src, int n);
char *_strdup(char *str)
{
	char *s;
	int size = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[size] != '\0')
	{
	size++;
	}
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
	{
	return (NULL);
	}
	_strncpy(s, str, size);
	return (s);

}
