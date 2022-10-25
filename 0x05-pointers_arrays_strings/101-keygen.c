#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int total = 2772;

	srand(time(NULL));
	while (total > 122)
	{
		int rand_int = (rand() % 125) + 1;

		printf("%c", rand_int);
		total -= rand_int;
	}
	printf("%c", total);

	return (0);
}
