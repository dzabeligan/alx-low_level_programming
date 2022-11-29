#include "lists.h"

/**
 * sum_listint - compute sum of list items
 * @head: list
 *
 * Return: sum of list items
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
