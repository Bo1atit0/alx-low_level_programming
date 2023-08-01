#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked
 * list at a certain position
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prevnode = *head;
	listint_t *delnode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prevnode);
		return (1);
	}

	while (i < index - 1)
	{
		if (!prevnode || !prevnode->next)
			return (-1);

		prevnode = prevnode->next;
		i++;
	}

	delnode = prevnode->next;
	prevnode->next = delnode->next;
	free(delnode);
	return (1);

}

