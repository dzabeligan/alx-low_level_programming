#include <stdio.h>
#include "main.h"

/**
 * main - Print numbers 1 - 100
 * multiples of 3 should print 'Fizz'
 * multiples of 5 should print 'Buzz'
 * multiples of 3 and 5 should print 'FizzBuzz'
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 1;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
