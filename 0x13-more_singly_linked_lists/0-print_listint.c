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
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
