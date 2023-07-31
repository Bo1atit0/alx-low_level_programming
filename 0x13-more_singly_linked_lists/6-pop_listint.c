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
	listint_t *head2;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		data = (*head)->n;

		head2 = (*head)->next;
		free(*head);
		*head = head2;
	}
	return (data);
}
