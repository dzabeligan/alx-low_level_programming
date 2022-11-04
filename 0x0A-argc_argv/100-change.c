#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum number of coins to make change for an amount of
 * money
 * If program doesn't receive exactly 1 argument, print `Error` followed by a
 * new line
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
	}
	else
	{
		int num_of_coins = 0;
		const int coin_values[] = {25, 10, 5, 2, 1};
		int index = 0;

		while (cent > 0)
		{
			num_of_coins += cent / coin_values[index];
			cent %= coin_values[index++];
		}

		printf("%d\n", num_of_coins);
	}

	return (0);
}
