#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isValidNumber - Checks if number is valid
 * @s: String to check
 *
 * Return: 1 if is valid number, 0 otherwise
 */
static int isValidNumber(char *s)
{
	while (*s)
		if (!isdigit(*s++))
			return (0);
	return (1);
}

/**
 * main - adds numbers, prints result followed by a new line
 * If program contains arguments that is not a number, print `Error` followed
 * by a new line
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isValidNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
