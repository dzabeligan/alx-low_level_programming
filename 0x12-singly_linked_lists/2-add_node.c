#include <string.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_node - Print strings
 * @head: pointer to list node
 * @str: string (value) of list node
 *
 * Return: pointer to newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (head == NULL)
	{
		new_node->next = NULL;
		head = &new_node;
		return (*head);
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}

	return (new_node);
}
