#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format_t - Format
 * @specifier: character
 * @print: print function for specifier
 *
 */
typedef struct format_t
{
	char specifier;
	void (*print)(va_list arg);
} format_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
