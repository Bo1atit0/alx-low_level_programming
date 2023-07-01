#include "main.h"

/**
 * leet -  encodes a string into 1337
 *
 * @s: string
 *
 *
 * Return: s
 */


char *leet(char *s)
{
	char *p = s;
	char a[12] = "aAeEoOtTlL";
	char b[12] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1', '5', '7'};
	int i;

	while (*p != '\0')
	{
	for (i = 0; i < 12; i++)
	{
	if (*p == a[i])
	{
	*p = b[i];
	break;
	}
	}
	p++;
	}
	{
		return (s);
	}
}
