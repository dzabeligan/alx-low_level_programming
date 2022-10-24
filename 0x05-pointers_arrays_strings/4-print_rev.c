#include "main.h"

/**
 * print_rev_helper - Helper function
 * @s: Pointer to char type (string)
 * @first_letter: Pointer to char, first letter
 *
 */
static void print_rev_helper(char *s, const char *first_letter)
{
	char c = *s;

	if (c != '\0')
	{
		print_rev_helper(s + 1, s);
		_putchar(c);
	}

	if (s == first_letter)
		_putchar('\n');
}

/**
 * print_rev - Print string in reverse
 * @s: pointer to char type (string)
 *
 */
void print_rev(char *s)
{
	print_rev_helper(s, s);
}
