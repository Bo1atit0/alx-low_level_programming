#include "main.h"

/*
 * Description:
 *
 * Concatenates a specified number of characters
 * from the source string to the end of the destination string.
 *
 * Parameters:
 *   - dest: Pointer to the destination string. This string should have
 *   enough space to accommodate the concatenated characters.
 *   - src: Pointer to the source string from which characters will be copied.
 *   - n: Maximum number of characters to be concatenated. If the length of
 *   the source string is
 *   less than n, all characters from the source string will be copied.
 *
 * Return:
 *   Pointer to the concatenated string (destination string).
 *
 */

char *_strncat(char *dest, char *src, int n)

{
	char *dest1 = dest;

	while (*dest != '\0')
	{
		dest++
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	dest = '\0';
	return (dest1);
}
