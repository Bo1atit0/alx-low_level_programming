#include "main.h"

/**
* _strlen(str)-  returns the length of a string.
* @s: pointer to s
*Return: 0
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')

	{
	len++;
	s++;
	}

	return (len);
}
