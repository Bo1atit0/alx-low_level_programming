#include "main.h"

/**
 * rot13 -  encodes a string usint ROT13
 *
 * @s: pointer to string
 *
 * Return: s
 */

char *rot13(char *s)
{
int a;
int b;

	char let[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b <= 52; b++)
		{
			if (let[b] == *(s + a))
		{
			*(s + a) = rot[b];
			}
			}
			}
			return (s);
			}

