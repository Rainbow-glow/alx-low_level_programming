#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: a pointer to the head of the dlistint_t list.
 * @n: the integer for the new node to contain.
 *
 * Return: NULL if its failed, otherwise the address of the new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_ele, *last_ele;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->next = NULL;
	if (*head == NULL)
	{
		new_ele->prev = NULL;
		*head = new_ele;
		return (new_ele);
	}

	last_ele = *head;
	while (last_ele->next != NULL)
		last_ele = last_ele->next;
	last_ele->next = new_ele;
	new_ele->prev = last_ele;

	return (new_ele);
}
