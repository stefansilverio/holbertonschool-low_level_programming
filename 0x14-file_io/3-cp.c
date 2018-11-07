#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
#include <unistd.h>

void closed(char *buffer, int status, int fd1, int fd2);

/**
 * main - cp file contents into other file
 * @argc: argument count
 * @argv: array of command line arguments
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	int fd1 = 0;
	int fd2 = 0;
	char *buffer = NULL;
	int status = 0;
	int count = 0;

	buffer = malloc(sizeof(char) * 1024); /* allocate buffer size */
	if (buffer == NULL)
		return (-1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY); /* read from f1 */
	if (fd1 == -1)
	{
		puts("1");
		dprintf(STDERR_FILENO, "Error: Can't read from file incitatous\n");
		exit(98);
	}
	count = read(fd1, buffer, 1024); /* read from first file into buffer */
	if (count == -1)
	{
		exit(98);
		puts("2");
		dprintf(STDERR_FILENO, "Error: Can't read from file incitatous\n");
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664); /* open second fi */
	if (fd2 == -1)
	{
		puts("4");
		dprintf(STDERR_FILENO, "Error: Can't read from file Incitatous\n");
		exit(98);
	}
	status = write(fd2, buffer, 1024); /* write from buffer to second file */
	write(fd2, "\n", 1);
	closed(buffer, status, fd1, fd2);
	return (0);
}

/**
 * closed - close file descriptors and free buffers
 * @buffer: buffer to free
 * @status: status of write call
 * @fd1: file descriptor 1
 * @fd2: file descriptor 2
 * Return: Nothing
 */
void closed(char *buffer, int status, int fd1, int fd2)
{
	if (status == -1)
	{
		puts("4");
		dprintf(STDERR_FILENO, "Error: Can't write to Incitatous\n");
		if (close(fd1) == -1)
		{
			exit(100);
			dprintf(STDERR_FILENO, "Error: Can't close fd fd1\n");
		}
		if (close(fd2) == -1)
		{
			exit(100);
			dprintf(STDERR_FILENO, "Error: Can't close fd fd2\n");
		}
		free(buffer);
		exit(99);
	}
	if (close(fd1) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd fd1\n");
	}
	if (close(fd2) == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd fd2\n");
	}
	free(buffer);
}
