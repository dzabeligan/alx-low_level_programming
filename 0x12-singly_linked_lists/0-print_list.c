#include <stdio.h>

#include "lists.h"

/**
 * print_list - Sum arguments passed to function
 * @h: list
 *
 * Return: Sum of numbers
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("[%u] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		h = h->next;
		len++;
	}

	return (len);
}
