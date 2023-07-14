#include<stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two string
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes to be copied from s2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, lent, len1, len2 = 0;

	len1 = 0;
	i = 0;
	j = 0;

	if (*s1 == '\0' || *s2 == '\0')
	{
	return (NULL);
	}
	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	lent = len1 + len2;

	s = malloc(sizeof(char) * (lent + 1));
	if (s == NULL)
	{
	return (NULL);
	}
	while (i < len1)
	{
	s[j++] = s1[i++];
	}
	i = 0;
	while (n < len2 && i < (len1 + n))
	{
	s[j++] = s2[i++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		s[j++] = s2[i++];
	}
	s = '\0'
	return (s);
}
