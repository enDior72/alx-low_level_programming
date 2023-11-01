#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the file to append text to
 * @text_content: the text to append
 *
 * Return: 1 on success,
 * otherwise, -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_w;
	ssize_t len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	while (text_content[len])
	{
		len++;
	}
	fd_w = write(fd, text_content, len);
	if (fd_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
