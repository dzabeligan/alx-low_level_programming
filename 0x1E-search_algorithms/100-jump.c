#include "search_algos.h"

#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 *     using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 if value is not present
 *     in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, m = 0;

	if (array == NULL)
		return (-1);

	j = sqrt(size);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += j;
	}
	m = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", m, i);
	i = i < size ? i : size - 1;
	while (m <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
		m++;
	}
	return (-1);
}
