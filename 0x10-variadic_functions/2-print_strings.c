#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Print strings
 * @separator: separator between strings
 * @n: number of strings to print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str = NULL;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(args, char *);
		printf("%s%s", str == NULL ? "(nil)" : str,
			separator == NULL ? "" : separator);
	}
	str = va_arg(args, char *);
	printf("%s\n", str == NULL ? "(nil)" : str);
	va_end(args);
}
