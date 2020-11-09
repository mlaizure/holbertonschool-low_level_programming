#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: pointer to name of file to create
 * @text_content: NULL terminated string to wrtie to the file
 *
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		wrt = write(fd, text_content, len);
		if (wrt < 0)
			return (-1);
	}
	return (1);
}
