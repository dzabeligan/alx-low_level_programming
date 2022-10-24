#include "main.h"

/**
 * puts_half - Print last half of string
 * @str: pointer to char type (string)
 *
 */
void puts_half(char *str)
{
	char c;
	int len = 0;

	while (*(str++) != '\0')
		len++;

	str -= (len + 2) / 2;
	while ((c = *(str++)) != '\0')
		_putchar(c);
	_putchar('\n');
}
