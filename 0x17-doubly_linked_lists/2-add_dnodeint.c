#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a pointer to the head of the list.
 * @n: the number of integer the new node contains.
 *
 * Return: NULL if its failed, otherwise the address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_ele;

	new_ele = malloc(sizeof(dlistint_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->n = n;
	new_ele->prev = NULL;
	new_ele->next = *head;
	if (*head != NULL)
		(*head)->prev = new_ele;
	*head = new_ele;

	return (new_ele);
}
