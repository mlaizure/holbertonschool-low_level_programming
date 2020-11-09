#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to file name
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print, 0 if file cannot
 * be opened or read, filename is NULL, or if write fails or does not write the
 * expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	unsigned int wrt;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	rd = read(fd, buf, letters);
	if (rd < 0)
		return (0);

	buf[letters] = '\0';

	wrt = write(STDOUT_FILENO, buf, letters);
	if (wrt != letters)
		return (0);

	close(fd);
	free(buf);

	return (wrt);
}
