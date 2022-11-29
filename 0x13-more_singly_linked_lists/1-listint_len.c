#include "lists.h"

/**
 * listint_len - Compute length of list
 * @h: list
 *
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
