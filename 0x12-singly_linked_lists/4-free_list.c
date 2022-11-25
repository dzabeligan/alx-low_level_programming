#include "lists.h"

/**
 * free_list - free list
 * @head: list
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head->next;

		if (head->str)
			free(head->str);
		free(head);
		head = temp;
	}
}
