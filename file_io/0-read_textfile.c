#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: string to be used
 *@letters: amount of actual letters it could read and print
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	bytes = read(fd, buf, letters);

	write(STDOUT_FILENO, buf, bytes);

	buf[letters + 1] = '\0';

	free(buf);
	close(fd);

	return (bytes);
}
