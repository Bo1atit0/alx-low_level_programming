#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end a list_t list
 * @head: double pointer to the head of the linked list
 * @str: pointer to a string
 * Return: address on new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newN;
	list_t *temp;
	unsigned int lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}

	newN = (list_t *)malloc(sizeof(list_t));
	if (newN == NULL)
	{
		return (NULL);
	}
	newN->str = strdup(str);
	newN->len = lent;
	if (newN->str == NULL)
	{
		free(newN);
	}
	newN->next = NULL;
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
		temp->next = newN;
	}
	return (newN);
}
