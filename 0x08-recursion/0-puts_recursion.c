#include "main.h"

/**
 * _puts_recursion - sets the value of a pointer to a char
 * @s: pointer to string
 * RETURN: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
