#include "lists.h"

/**
 * pop_listint - pop item from list
 * @head: list
 *
 * Return: value of first node
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	value = temp->n;

	*head = (*head)->next;
	free(temp);

	return (value);
}
