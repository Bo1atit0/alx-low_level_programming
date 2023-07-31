#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 *  of elements in a linked list.
 * @h: pointer to head of list.
 *
 *Return: number of elements in list.
 */


size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
