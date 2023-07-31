#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list and points head to NULL.
 * @head: head of listint_t list to be freed.
 */

void free_listint2(listint_t **head)
{
	listint_t *head2, *temp;

	if (*head == NULL)
	{
		return;
	}
	head2 = *head;
	while (head2 != NULL)
	{
		temp = head2->next;
		free(head2);
		head2 = temp;
	}
	*head = NULL;
}
