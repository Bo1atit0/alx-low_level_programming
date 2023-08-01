#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of data of a
 * linked list.
 * @head: pointer to head of list.
 *
 *Return: returns sum of node.
 */

int sum_listint(listint_t *head)
{
	listint_t *head2 = head;
	int sum = 0;

	while (head2 != NULL)
	{
		sum += head2->n;
		head2 = head2->next;
	}
	return (sum);
}
