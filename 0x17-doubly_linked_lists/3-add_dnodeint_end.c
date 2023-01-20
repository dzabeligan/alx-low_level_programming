#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_list, *last;

	new_list = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_list == NULL)
		return (NULL);

	new_list->n = n;
	new_list->next = NULL;

	if (*head == NULL)
	{
		new_list->prev = NULL;
		*head = new_list;
		return (new_list);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = new_list;
	new_list->prev = last;

	return (new_list);
}
