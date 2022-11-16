#include "function_pointers.h"

/**
 * int_index - compare values of (size) elements of an array using callbacks
 * @array: int array
 * @size: size of array elements
 * @cmp: callbacks used to compare values
 *
 * Return: index of first non zero callback return, -1 if none is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if (array[i] && cmp(array[i]))
			return (i);
	return (-1);
}
