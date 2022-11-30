#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: list
 * @index: index
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = NULL;
	listint_t *head_copy = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	head_copy = *head;
	while (index > 1 && head_copy->next != NULL)
	{
		head_copy = head_copy->next;
		index--;
	}
	if (index > 1)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = head_copy->next;
	head_copy->next = head_copy->next->next;
	free(temp);

	return (1);
}
