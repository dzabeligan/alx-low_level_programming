#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: list
 * @index: index
 * @n: value
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node = NULL;
	listint_t *head_copy = NULL;

	if (head == NULL)
		return (NULL);

	head_copy = *head;
	while (index > 1 && head_copy->next != NULL)
	{
		head_copy = head_copy->next;
		index--;
	}
	if (index > 1)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (index == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = head_copy->next;
	head_copy->next = node;

	return (node);
}
