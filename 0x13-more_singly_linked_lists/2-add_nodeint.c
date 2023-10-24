#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: a pointer to the address of the head of the list.
 * @n: the integer contained in the new nodes
 *
 * Return: NULL if the function fail, otherwise the address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);
}
