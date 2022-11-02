#include "main.h"

/**
 * root - Compute square root given guess and number
 * @n: number
 * @guess: guess
 *
 * Return: natural square root of a number
 */
int root(int n, int guess)
{
	int sqr = guess * guess;

	if (n < sqr)
		return (-1);
	if (n == sqr)
		return (guess);
	return (root(n, guess + 1));
}

/**
 * _sqrt_recursion - Compute the natural square root of a number
 * @n: number
 *
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (root(n, 1));
}
