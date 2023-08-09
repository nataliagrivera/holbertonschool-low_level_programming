#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 *read_textfile
 *filename
 *letters
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	char *buf = malloc(sizeof(char) * letters);
	
	if (buf == NULL)
		return(0);

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	
	if (fd == -1)
		return(0);

	bytes = read(fd, buf, letters);

	write(STDOUT_FILENO, buf, bytes);

	free(buf);
	close(fd);
	return(bytes);
}
