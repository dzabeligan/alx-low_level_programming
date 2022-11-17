#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Calc program
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 if successful, exit with status code 98, 99, or 100 if failed
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int) = NULL;
	int num1 = 0;
	int num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(num1, num2));

	return (0);
}
