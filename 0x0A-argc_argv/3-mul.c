#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers prints result followed by a new line
 * If program doesn't receive 2 arguments, print `Error` followed by a new line
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
