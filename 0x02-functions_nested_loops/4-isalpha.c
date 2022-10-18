#include "main.h"

/**
 * _isalpha - Check if character is alphabet
 * @c: The character to check
 *
 * Return: 1 if character is alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
