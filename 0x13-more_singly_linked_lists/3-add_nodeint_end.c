#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end
 * of a linked list.
 * @head: pointer to head of list.
 * @n: value of new node
 *
 *Return: address of new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newN;
	listint_t *temp;


	newN = (listint_t *)malloc(sizeof(listint_t));
	if (newN == NULL)
	{
		return (NULL);
	}

	newN->n = n;
	if (*head == NULL)
	{
		*head = newN;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		newN->next = NULL;
		temp->next = newN;
	}

	return (newN);
}
