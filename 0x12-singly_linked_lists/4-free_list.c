#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees linked list.
 * @head: beginning of list to be frees
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
