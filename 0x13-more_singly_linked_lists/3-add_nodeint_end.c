#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to the address of the head of the list.
 * @n: the integer contained in the new nodes
 *
 * Return: NULL if the function fail, otherwise the address of the new element.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *end;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = NULL;

	if (*head == NULL)
		*head = add;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = add;
	}

	return (*head);
}

