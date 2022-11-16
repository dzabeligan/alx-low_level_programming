#include "function_pointers.h"

/**
 * print_name - Prints name using callback
 * @name: name
 * @f: callback
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
