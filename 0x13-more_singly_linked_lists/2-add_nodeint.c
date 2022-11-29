#include <string.h>
#include <stdlib.h>

#include "lists.h"

/**
 * add_nodeint - add node
 * @head: pointer to list node
 * @n: number
 *
 * Return: pointer to newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

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
