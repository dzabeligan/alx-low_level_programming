#include <stdio.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	long i;
	long number = 612852475143;

	for (i = 2; i * i <= number; i++)
		while (number % i == 0)
			number /= i;

	printf("%ld\n", number);

	return (0);
}
