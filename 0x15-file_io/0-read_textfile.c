#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>

#include "main.h"

/**
 * read_textfile - read text file and output to standard output
 * @filename: file name
 * @letters: number of characters to read and print
 *
 * Return: number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	n = read(fd, buffer, letters);
	n = write(STDOUT_FILENO, buffer, n);

	close(fd);
	free(buffer);

	return (n);
}
