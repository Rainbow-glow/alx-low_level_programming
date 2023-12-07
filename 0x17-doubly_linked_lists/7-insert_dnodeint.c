#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the integer.
 *
 * Return: NULL if its failed, otherwise the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *insrt = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		insrt = insrt->next;
		if (insrt == NULL)
			return (NULL);
	}

	if (insrt->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = insrt;
	new->next = insrt->next;
	insrt->next->prev = new;
	insrt->next = new;

	return (new);
}
