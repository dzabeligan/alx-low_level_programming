#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print char
 * @arg: pointer to arguments to be printed
 */
void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}

/**
 * print_int - print int
 * @arg: pointer to arguments to be printed
 */
void print_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @arg: pointer to arguments to be printed
 */
void print_float(va_list arg)
{
	float num = va_arg(arg, double);

	printf("%f", num);
}

/**
 * print_string - Prints a string.
 * @arg: pointer to arguments to be printed
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - Print all formats
 * @format: format string
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char separator[3] = "";

	format_t f[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
	};

	va_start(args, format);

	while (format && *(format + i))
	{
		int j = 0;
		int format_t_len = sizeof(f) / sizeof(f[0]);

		while (j < format_t_len && *(format + i) != f[j].specifier)
			j++;
		if (j < format_t_len)
		{
			printf("%s", separator);
			f[j].print(args);
			separator[0] = ',';
			separator[1] = ' ';
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
