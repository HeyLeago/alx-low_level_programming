#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 *read_textfile reads a text file and prints it to the POSIX standard output
 *@filename: the textfile to be read
 *@letters: the number of letters
 *
 *Return: number written or 0 if file failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buffer;
	ssize_t num_read;
	ssize_t num_written;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	num_read = read(fd, buffer, letters);
	num_written = write(STDOUT_FILENO, buffer, num_read);
	free(buffer);
	close(fd);
	return (num_written);
}
