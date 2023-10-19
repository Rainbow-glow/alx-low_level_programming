#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the head of the list.
 * @str: the new string to be added to the node.
 *
 * Return: NULL if function fails, otherwise the address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *mine;
	int len;
	list_t *yours;

	yours = malloc(sizeof(list_t));
	if (yours == NULL)
		return (NULL);

	mine = strdup(str);
	if (mine == NULL)
	{
		free(yours);
		return (NULL);
	}

	for (len = 0 ; str[len];)
		len++;

	yours->str = mine;
	yours->len = len;
	yours->next = *head;

	*head = yours;

	return (yours);
}
