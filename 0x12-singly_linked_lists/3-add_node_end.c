#include "lists.h"
#include <string.h>

/**
* add_node_end - Adds a new node at the end
* of a list_t list.
* @head: A pointer the head of the list_t list.
* @str: The string to be added to the list_t list.
*
* Return: NULL If the function fails, Otherwise the address of the new element.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *mine;
	int len;
	list_t *yours, *ours;

	yours = malloc(sizeof(list_t));
	if (yours == NULL)
		return (NULL);

	mine = strdup(str);
	if (str == NULL)
	{
		free(yours);
		return (NULL);
	}

	for (len = 0; str[len];)
	len++;

	yours->str = mine;
	yours->len = len;
	yours->next = NULL;

	if (*head == NULL)
	*head = yours;

	else
	{
	ours = *head;
	while (ours->next != NULL)
	ours = ours->next;
	ours->next = yours;
	}

	return (*head);
}
