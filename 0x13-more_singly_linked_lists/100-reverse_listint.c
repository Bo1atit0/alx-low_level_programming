#include "lists.h"

/**
 * reverse_listint - reverses  a linked list.
 * @head: pointer to the first element in the list.
 *
 *
 * Return: address of new head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = 0;
	next = (*head)->next;

	if (!*head || !(*head)->next)
	{
		return (*head);
	}
	while (*head != 0)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
