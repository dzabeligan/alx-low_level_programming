#include "main.h"
/**
 * _puts - Print string
 * @str: pointer to char type (string)
 *
 */
void _puts(char *str)
{
	char c;

	while ((c = *(str++)) != '\0')
		_putchar(c);
	_putchar('\n');
}
