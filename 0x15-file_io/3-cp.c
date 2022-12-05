#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t n;
	char buffer[1024] = {'\0'};

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	n = read(from_fd, buffer, 1024);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_fd == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
			exit(98);
		}

		n = write(to_fd, buffer, n);
		if (to_fd == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from_fd);
			exit(99);
		}

		n = read(from_fd, buffer, 1024);
		to_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (n > 0);

	close_file(from_fd);
	close_file(to_fd);

	return (0);
}
