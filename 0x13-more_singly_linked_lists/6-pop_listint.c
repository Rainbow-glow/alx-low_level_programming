#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to the address of the head of the list.
 *
 * Return: 0 if the linked list is empty, otherwise the head node's data.
 */

int pop_listint(listint_t **head)
{
	int del;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	tmp = *head;
	del = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (del);
}
