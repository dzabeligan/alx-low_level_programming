#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers
 * @separator: separator between numbers
 * @n: number to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s", va_arg(args, int), separator == NULL ? "" : separator);
	}
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
