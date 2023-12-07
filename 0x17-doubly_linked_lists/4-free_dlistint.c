#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: the head pf the list.
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *init;

	while (head)
	{
		init = head->next;
		free(head);
		head = init;
	}
}
