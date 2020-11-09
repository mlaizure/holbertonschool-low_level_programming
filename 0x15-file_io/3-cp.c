#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments from command line
 * @av: pointer to array of command line arguments
 *
 * Return: Always 0.
 */

int main(int ac, char *av[])
{
	int fd_from, fd_to, rd, wrt, cl_from, cl_to;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	rd = read(fd_from, buf, 1024);
	if (fd_from < 0 || rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	wrt = write(fd_to, buf, rd);
	if (fd_to < 0 || wrt < 0)
	{       dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

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
