#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 *create_file - creates a file
 *@filename: the file to create
 *@text_content: string to write to the file
 *
 * Returns: 1 on success and -1 on failure
*/
int create_file(const char *filename, char *text_content);
{
	if (filename == NULL)
	{
		return (-1);
	}

	int fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	size_t len = (text_content != NULL) ? strlen(text_content) : 0;
	size_t w = write(fd, text_content, len);

	if (w != (ssize_t)len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
