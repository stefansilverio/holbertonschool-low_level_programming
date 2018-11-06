#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - create a file
 * @filename: name of newfile
 * @text_content: string to be written in file
 * Return: exit status
 */
int create_file(const char *filename, char *text_content)
{
	int file_des = 0;
	int cnt = 0;
	int status = 0;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
		if (file_des == -1)
			return (-1);
		close(file_des);
		return (1);
	}

	while (text_content[cnt])
		cnt++;

	file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);

	if (file_des == -1)
		return (-1);

	status = write(file_des, text_content, cnt);

	if (status == -1)
		return (-1);

	close(file_des);
	return (1);
}
