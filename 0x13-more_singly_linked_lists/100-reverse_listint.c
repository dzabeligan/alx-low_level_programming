#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: list
 *
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head && (*head)->next)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	if (*head)
		(*head)->next = prev_node;
	return (*head);
}
