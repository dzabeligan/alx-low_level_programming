#include "lists.h"

/**
 * free_listint - free list
 * @head: list
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *temp = head->next;

		free(head);
		head = temp;
	}
}
