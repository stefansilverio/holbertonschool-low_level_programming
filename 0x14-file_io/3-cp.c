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
	char *buffer = NULL;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
		no_read_f1(argv[1], buffer);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fd2 == -1)
		no_write_f2(argv[2], buffer);

	while (status_read > 0)
	{
		status_read = read(fd1, buffer, 1024);

		if (status_read == -1)
			no_read_f1(argv[1], buffer);

		if (status_read == 0)
			break;

		status_write = write(fd2, buffer, status_read);
		if (status_write == -1)
			no_write_f2(argv[2], buffer);
	}

	free(buffer);
	fd1 = close(fd1);
	if (fd1 == -1)
		close_fail(fd1, buffer);
	fd2 = close(fd2);
	if (fd2 == -1)
		close_fail(fd2, buffer);
	return (0);
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
/**
 * no_write_f2 - handle exit
 * @arg: filename
 * @buffer: to free
 * Return: nothing
 */
void no_write_f2(char *arg, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg);
	exit(99);
}
/**
 * no_read_f1 - exit if can't open file_from
 * @arg: name of file to print
 * @buffer: buffer to free
 * Return: Nothing
 */
void no_read_f1(char *arg, char *buffer)
{
	free(buffer);
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg);
	exit(98);
}
