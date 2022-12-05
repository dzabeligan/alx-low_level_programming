#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: file name
 * @text_content: text content
 *
 * Return: 1 if successful, -1 if otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
