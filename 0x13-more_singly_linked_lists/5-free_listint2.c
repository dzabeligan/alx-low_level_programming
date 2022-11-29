#include "lists.h"

/**
 * free_listint2 - free list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	while (*head != NULL)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
	}
	*head = NULL;
}
