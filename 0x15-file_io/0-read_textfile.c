#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t b_read, b_written;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	/* open file */
	fd = open(filename, O_RDONLY);
	/* read file content into  buffer */
	b_read = read(fd, buffer, letters);
	/* write content into STDOUT */
	b_written = write(STDOUT_FILENO, buffer, b_read);
	/* check the amount of bytes */
	if (fd == -1 || b_read == -1 || b_written == -1 || b_written != b_read)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (b_written);
}
