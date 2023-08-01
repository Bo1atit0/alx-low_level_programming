#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts node at
 * an index in a linked list.
 * @head: pointer to head of list.
 * @idx: position to insert node.
 * @n: value of new node
 *Return: returns address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newN;
	listint_t *head2 = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
	{
		return (NULL);
	}
	newN->n = n;

	if (idx == 0)
	{
		newN->next = *head;
		*head = newN;
		return (newN);
	}
	head2 = *head;
	if (head2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < idx - 1; i++)

		head2 = head2->next;
	newN->next = head2->next;
	head2->next = newN;
	return (newN);

}
