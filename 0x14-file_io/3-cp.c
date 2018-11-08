#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

void no_read_f1(char *arg, char *buffer);
void no_write_f2(char *arg, char *buffer);
void close_fail(int fd1, char *buffer);
/**
 * main - copy content to another file
 * @argc: argument count
 * @argv: number of command line arguments
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	int status_read = 1;
	int status_write = 0;
	int close1 = 0;
	int close2 = 0;
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
		no_read_f1(argv[1], buffer);

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd2 == -1)
		no_write_f2(argv[2], buffer);

	while (status_read >= 0)
	{
		status_read = read(fd1, buffer, 1024);

		if (status_read == -1)
			no_read_f1(argv[1], buffer);

		if (status_read == 0)
			break;

		status_write = write(fd2, buffer, status_read);

		if (status_read != status_write)
			no_write_f2(argv[2], buffer);

		if (status_write == -1)
			no_write_f2(argv[2], buffer);
	}

	free(buffer);
	close1 = close(fd1);
	if (close1 == -1)
		close_fail(fd1, buffer);
	close(fd1);
	close2 = close(fd2);
	if (close2 == -1)
		close_fail(fd2, buffer);
	close(fd2);
	return (0);
}

/**
 * no_read_f1 - exit if can't open file_from
 * @buffer: buffer to free
 * @arg: name of file to print
 * Return: Nothing
 */
void no_read_f1(char *arg, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	exit(98);
}

/**
 * no_write_f2 - exit if can't write
 * @arg: filename
 * @buffer: buffer to free
 * Return: nothing
 */
void no_write_f2(char *arg, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
	exit(99);
}

/**
 * close_fail - check for failures on close
 * @fd1: file descriptor
 * @buffer: buffer to free
 * Return: Nothing
 */
void close_fail(int fd1, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
	exit(100);
}
