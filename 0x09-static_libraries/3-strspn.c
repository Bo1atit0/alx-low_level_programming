#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: string to be scanned
 *
 * @accept: string containing the character to match
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int  n = 0, l, len;

	for (l = 0; s[l] != '\0'; l++)

	{
	if (s[l] != 32)
	{

	for (len = 0; accept[len] != '\0'; len++)
	{
	if (s[l] == accept[len])
	n++;
	}
	}
else
return (n);
}
	return (n);
}
