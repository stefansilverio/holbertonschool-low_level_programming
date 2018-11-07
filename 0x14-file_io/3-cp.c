#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
#include <unistd.h>

int main(int argc, char *argv[])
{
	int fd1 = 0;
	int fd2 = 0;
	char *buffer = NULL;
	int status = 0;
	int count = 0;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
		return (-1);

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to");
		exit(97);
	}

	fd1 = open(argv[1], O_WRONLY | O_TRUNC, 0664);

	if (fd1 == -1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}

	count = read(fd1, buffer, 1024);

	if (count == -1)
	{
		exit(98);
		printf("Error: Can't read from file NAME_OF_THE_FILE");
	}

	fd2 = open(argv[2], O_WRONLY | O_TRUNC);

	if (fd2 == -1)
	{
		printf("Error: Can't read from file NAME_OF_THE_FILE");
		exit(98);
	}

	status = write(fd2, buffer, 1024);

	if (status == -1)
	{
		printf("Error: Can't write to NAME_OF_THE_FILE");
		close(fd1);
		close(fd2);
		exit(99);
	}
		close(fd1);
		close(fd2);
		return (0);
}
