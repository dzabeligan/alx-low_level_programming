#include "main.h"

/**
 * print_chessboard - print chess board
 * @a: chess board
 *
 */
void print_chessboard(char (*a)[8])
{
	unsigned long i = 0;

	for (i = 0; i < sizeof(a[0]); i++)
	{
		unsigned long j = 0;

		for (j = 0; j < sizeof(a[0]); j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
