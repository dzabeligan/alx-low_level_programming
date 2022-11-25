#include "lists.h"

/**
 * list_len - Compute length of list
 * @h: list
 *
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}

	return (len);
}
