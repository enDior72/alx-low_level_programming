#include "main.h"
/**
 * create_file - reads a text file,
 * and prints it to the POSIX standard output
 *
 * @filename: the file to read
 * @text_content: the number of bytes to be read from the file
 *
 * Return: 1 onsuccess, otherwise, -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrm;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0000600);
	if (fd < 0)
	{
		close(fd);
		return (-1);
	}

	if (!text_content)
	{
		close(fd);
		return (1);
	}
	wrm = write(fd, text_content, _strlen(text_content));
	if (wrm < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
