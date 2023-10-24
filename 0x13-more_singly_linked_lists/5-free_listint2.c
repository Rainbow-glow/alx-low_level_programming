#include "lists.h"

/**
 * free_listint2 - frees listint_t list.
 * @head: a pointer to the address of the head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *fre;

	if (head == NULL)
		return;

	while (*head)
	{
		fre = (*head)->next;
		free(*head);
		*head = fre;
	}
	head = NULL;
}

