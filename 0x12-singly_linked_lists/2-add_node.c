#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: pointer to a string
 * Return: address on new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int lent = 0;

	while (str[lent] != '\0')
		lent++;

	newNode = (list_t *) malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = lent;
	if (newNode->str == NULL)
	{
		free(newNode);
	}
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
