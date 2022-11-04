#include <stdio.h>

/**
 * main - prints name of program followed by a new line
 * @argc: number of command line arguments
 * @argv: array of strings containing command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
