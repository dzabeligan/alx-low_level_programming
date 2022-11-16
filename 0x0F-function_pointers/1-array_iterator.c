#include "function_pointers.h"

/**
 * array_iterator - call function on (size) elements of an array
 * @array: int array
 * @size: size of array elements
 * @action: callback
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	for (i = 0; i < size; i++)
		if (array[i])
			action(array[i]);
}
