#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - function to print all elements
 * in a linked list.
 * @h: pointer to head of list.
 *
 *Return: number of elements in list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
