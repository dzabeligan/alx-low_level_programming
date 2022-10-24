#include "main.h"
/**
 * swap_int - Swap numbers
 * @a: pointer to int type
 * @b: pointer to int type
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
