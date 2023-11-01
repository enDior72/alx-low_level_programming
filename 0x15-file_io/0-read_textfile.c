#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: the file to be read
 * @letters: the number of bytes to be read from the file
 *
 * Return: count printed Onsuccess, otherwise, 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rdm, fd, wrm;

	if (!filename)
		return (0);

	buf = (char *)malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	rdm = read(fd, buf, letters);
	if (rdm < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	wrm = write(STDOUT_FILENO, buf, rdm);
	if (wrm < 0 || wrm != rdm)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (wrm);
}
