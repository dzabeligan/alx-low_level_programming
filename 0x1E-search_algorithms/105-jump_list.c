#include "search_algos.h"

#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 *     using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located or NULL if value
 *     is not present in head or if head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i = 0, j = 0, m = 0;
	listint_t *head = list;

	if (list == NULL)
		return (NULL);

	j = sqrt(size);
	while (i < size && list->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, list->n);
		for (m = 0; m < j && list->next != NULL; m++)
			list = list->next;
		i += j;
	}
	m = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", m, i);
	i = i < size ? i : size - 1;
	while (m <= i)
	{
		printf("Value checked at index [%lu] = [%d]\n", m, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
		m++;
	}
	return (NULL);
}
