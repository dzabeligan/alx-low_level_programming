#include "main.h"

/**
 * reverse_array - reverse array
 * @a: integer array
 * @n: number of elements in array
 *
 */
void reverse_array(int *a, int n)
{
	int left = 0;
	int right = n - 1;

	while (left < right)
	{
		int temp = a[left];

		a[left++] = a[right];
		a[right--] = temp;
	}
}
