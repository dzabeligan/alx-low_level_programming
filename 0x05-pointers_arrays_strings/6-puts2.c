#include "main.h"

/**
 * puts2 - Print string (odd characters alone)
 * @str: pointer to char type (string)
 *
 */
void puts2(char *str)
{
	char c;
	char *str_copy = str;

	while ((c = *(str_copy++)) != '\0')
		if ((str_copy - str) % 2 != 0)
			_putchar(c);
	_putchar('\n');
}
