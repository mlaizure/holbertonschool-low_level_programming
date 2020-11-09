#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to name of file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
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
