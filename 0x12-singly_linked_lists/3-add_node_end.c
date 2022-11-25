#include <string.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_node_end - add node to end of list
 * @head: pointer to list node
 * @str: string (value) of list node
 *
 * Return: pointer to newly created node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (head == NULL)
	{
		head = &new_node;
		return (*head);
	}
	else if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
