#include<stdlib.h>
#include "main.h"

/**
* str_concat - function that appends s1 to s2
*@s1: string that s2 will be appended to
*@s2: string that will be appended to s1
*
*Return: a pointer that points to the newly allocated memory
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1, len2, lent;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	lent = 0;

	if (s1 == NULL || s2 == NULL)
	return (NULL);

	while (s1[len1])
	len1++;
	while (s2[len2])
	len2++;

	lent = len1 + len2;
	s = (char *)malloc((lent + 1) * sizeof(char));

	if (s == NULL)
	return (NULL);

	while (i < len1)
	{
	s[j] = s1[i];
	i++;
	j++;
	}

	i = 0;
	while (i < len2)
	{
	s[j] = s2[i];
	i++;
	j++;
	}
	return (s);
}
