#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to the list_t list to print
 *
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t lent = 0;

	while (h != NULL)
	{
		h = h->next;
		lent++;
	}
	return (lent);
}
