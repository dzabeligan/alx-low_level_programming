#include "lists.h"

/**
 * get_nodeint_at_index - get item at index
 * @head: list
 * @index: index of item in list
 *
 * Return: node at index, NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	while (index && head->next != NULL)
	{
		head = head->next;
		index--;
	}

	return (index ? NULL : head);
}
