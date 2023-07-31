#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes a node at the beginning
 * of a linked list.
 * @head: pointer to head of list.
 *
 *
 *Return: head nodes data.
 */

int pop_listint(listint_t **head)
{
	listint_t *delnode;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		delnode = *head;
		*head = (*head)->next;
		free(delnode);
	}
	return ((*head)->n);
}
