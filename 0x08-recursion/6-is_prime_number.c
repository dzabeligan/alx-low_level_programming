#include "main.h"

/**
 * is_prime_helper - Checks if a number is prime
 * @num: number
 * @f: factor
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int num, int f)
{
	if (num % f == 0)
		return (0);

	if (f * f >= num)
		return (1);

	return (is_prime_helper(num, f + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: number
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}
