#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of dlistint_t.
 * @head: the head of the list.
 * @index: the index of the node starting from 0.
 *
 * Return: - 1 if its failed, otherwise 1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	 dlistint_t *insrt = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (insrt == NULL)
			return (-1);
		insrt = insrt->next;
	}

	if (insrt == *head)
	{
		*head = insrt->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		insrt->prev->next = insrt->next;
		if (insrt->next != NULL)
			insrt->next->prev = insrt->prev;
	}

	free(insrt);
	return (1);

}

