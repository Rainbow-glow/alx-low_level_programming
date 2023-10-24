#include "lists.h"

/**
 * free_listint - frees listint_t list.
 * @head: a pointer to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *fre;

	while (head)
	{
		fre = head->next;
		free(head);
		head = fre;
	}
}
