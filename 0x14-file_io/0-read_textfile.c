#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - return number of bytes
 * @filename: name of file to read from
 * @letters: number of bytes to read
 * Return: number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int count = 0;
	char *buffer = NULL;
	int file_des = 0;
	int status = 0;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
		return (0);

	file_des = open(filename, O_RDONLY);

	if (file_des == -1)
		return (0);

	count = read(file_des, buffer, letters);

	buffer[count] = '\0';

	if (count == -1)
		return (0);

	status = write(STDOUT_FILENO, buffer, letters);

	if (status == -1)
		return (0);

	close(file_des);

	return (count);
}
