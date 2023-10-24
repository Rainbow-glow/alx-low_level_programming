#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to the head of the list.
 * @index: the index of the node starting at 0.
 *
 * Return: NULL if the node does not exist, otherwise the located node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int loc;

	for (loc = 0 ; loc < index; loc++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
