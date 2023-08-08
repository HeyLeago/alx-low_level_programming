#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 *read_textfile reads a text file and prints it to the POSIX standard output
 *@filename: the textfile to be read
 *@letters: the number of letters
 *Return: number written or 0 if file failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}

	int fd = fopen(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	char *buffer = (char *)malloc(letters);

	if (buffer == NULL)
	{
		fclose(fd);
		return (0);
	}

	ssize_t num_read = fread(fd, buffer, letters);

	if (num_read == -1)
	{
		free(buffer);
		fclose(fd);
		return (0);

	}

	ssize_t num_written = fwrite(STDOUT_FILENO, buffer, num_read);

	if (num_written == -1 || num_written != num_read)
	{
		free(buffer);
		fclose(fd);
		return (0);
	}

	free(buffer);
	fclose(fd);

	return (num_written);
}

