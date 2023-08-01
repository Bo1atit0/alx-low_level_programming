#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a
 * linked list.
 * @head: pointer to head of list.
 * @index: index of node you want to retrieve starting at 0
 *
 *Return: returns nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *head2 = head;
	unsigned int count = 0;


	while (head2 != NULL)
	{
		if (count == index)
			return (head2);
		head2 = head2->next;
		count++;
	}
	return (NULL);
}
