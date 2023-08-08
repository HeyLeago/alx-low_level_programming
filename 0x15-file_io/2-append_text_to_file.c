#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Points to the name of the file.
 * @text_content: Points to the string added to the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 *         -1 if filename is NULL, file does not exist or no user permission.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int w = 0;
	int len = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (len <= text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
