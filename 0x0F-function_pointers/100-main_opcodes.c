#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Print the opcodes of itself
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: 0 if successful, exit with status code 1 or 2 if failed
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *address = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		unsigned char opcode = *address;

		printf("%.2x", opcode);

		if (i != bytes - 1)
			printf(" ");
		address++;
	}
	printf("\n");

	return (0);
}
