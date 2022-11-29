#include <string.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: pointer to list node
 * @n: number
 *
 * Return: pointer to newly created node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
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
		listint_t *tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
