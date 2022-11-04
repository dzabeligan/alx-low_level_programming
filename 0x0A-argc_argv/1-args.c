#include <stdio.h>

/**
 * main - prints number of arguments passed followed by a new line
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
