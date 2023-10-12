#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located or NULL if value
 *     is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = list, *tail = NULL;

	if (list == NULL)
		return (NULL);

	while (list->express != NULL && list->n < value)
	{
		tail = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}
	if (list->n >= value)
		printf("Value found between indexes [%lu] and [%lu]\n", tail->index,
			list->index);
	else
	{
		tail = list;
		while (list->next != NULL)
			list = list->next;
		printf("Value found between indexes [%lu] and [%lu]\n", tail->index,
			list->index);
	}
	while (tail != NULL && tail->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", tail->index, tail->n);
		tail = tail->next;
	}
	if (tail == NULL)
		return (NULL);
	printf("Value checked at index [%lu] = [%d]\n", tail->index, tail->n);
	return (tail);
}
