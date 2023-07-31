#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add a new node to the beginning
 * of a linked list.
 * @head: pointer to head of list.
 * @n: value of new node
 *
 *Return: address of new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN;

	newN = (listint_t *)malloc(sizeof(listint_t));
	if (newN != NULL)
	{
		newN->n = n;
		newN->next = *head;
		*head = newN;
	}
	return (*head);

