#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_error - print error to stderr
 * @file: file
 * @msg: exit message
 * @code: exit code
 * Return: Nothing
 */

void print_error(char *file, char *msg, int code)
{
	if (file)
		dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	else
		dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}


/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * check - checks for errors
 *
 * @value: flag
 * @filename: filename to print in error message
 * @error_code: error code
 * Return: void
 */
void check(int value, char *filename, int error_code)
{
	char *msg;

	if (value != -1)
		return;

	if (error_code == 98)
	{
		msg = "Error: Can't read from file";
		print_error(filename, msg, error_code);

	}
	else if (error_code == 99)
	{
		msg = "Error: Can't write to";
		print_error(filename, msg, error_code);
	}
}


/**
 * copy_file - copy file_from content to file_to
 *
 * @file_from: filename of original file
 * @file_to: filename of new file
 *
 * Return: void
 */
void copy_file(char *file_from, char *file_to)
{
	char *buffer;
	int fd_from, fd_to, max_size = 1024, w, r;
	mode_t file_perm;

	/* create buffer */
	buffer = (char *)malloc(sizeof(char) * max_size);
	if (buffer == NULL)
	{
		char *msg = "Error: Can't write to";

		print_error(file_to, msg, 99);
	}
	/* open the input and output files */
	fd_from = open(file_from, O_RDONLY);
	check(fd_from, file_from, 98);

	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check(fd_to, file_to, 99);

	/* read from file */
	r = read(fd_from, buffer, max_size);
	check(r, file_from, 98);

	while (r > 0)
	{
		/* write to output file */
		w = write(fd_to, buffer, r);
		check(w, file_to, 99);

		/* read again from_file if content size > max_zise */
		r = read(fd_from, buffer, max_size);
		check(r, file_from, 98);
		/* open the file to  append content */
		fd_to = open(file_to, O_WRONLY | O_APPEND);
		check(fd_to, file_to, 99);
	}
	free(buffer);
	close_file(fd_from);
	close_file(fd_to);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error(NULL, "Usage: cp file_from file_to", 97);
	copy_file(argv[1], argv[2]);

	return (0);
}
