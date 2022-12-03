#include "lists.h"

/**
 * find_listint_loop - find loop in list
 * @head: list
 *
 * Return: NULL if there is no loop, address of the node otherwise
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = head->next->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		if (hare->next == NULL)
			return (NULL);
		hare = hare->next->next;
	}

	return (NULL);
}
