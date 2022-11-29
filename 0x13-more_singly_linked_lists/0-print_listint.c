#include <stdio.h>

#include "lists.h"

/**
 * print_listint - print int list
 * @h: list
 *
 * Return: Length of list
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}

	return (len);
}
