#include "holberton.h"

void err_from(char *filename);
void err_to(char *filename);

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments from command line
 * @av: pointer to array of command line arguments
 *
 * Return: Always 0.
 */

int main(int ac, char *av[])
{
	int fd_from, fd_to, rd, wrt = 0, cl_from, cl_to;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
		err_from(av[1]);

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (fd_to < 0)
		err_to(av[2]);

	while ((rd = read(fd_from, buf, 1024)) && rd > 0 && wrt >= 0)
		wrt = write(fd_to, buf, rd);

	if (rd < 0)
		err_from(av[1]);
	else if (wrt < 0)
		err_to(av[2]);

	cl_from = close(fd_from);
	if (cl_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	cl_to = close(fd_to);
	if (cl_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}


/**
 * err_from - error message and exit on open or read failure
 * @filename: name of file that couldn't be opened or read
 *
 * Return: none
 */

void err_from(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}


/**
 * err_to - error message and exit on open or write failure
 * @filename: name of file that couldn't be opened or written to
 *
 * Return: none
 */

void err_to(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}
