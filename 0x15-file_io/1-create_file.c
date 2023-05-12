#include "main.h"

/**
  * create_file - a function that creates a file.
  * @filename: filename is the name of the file
  * @text_content: content to append
  * Return: 1 on success and -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int b_open, b_write, len = 0;

	if (filename == NULL)
		return (-1);

	/* get the length */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	b_open = open(filename, O_RDWR | O_TRUNC);
	if (b_open == -1)
		b_open = open(filename, O_CREAT | O_RDWR, 0600);
	b_write = write(b_open, text_content, len);

	if (b_open == -1 || b_write == -1)
		return (-1);

	close(b_open);

	return (1);
}
