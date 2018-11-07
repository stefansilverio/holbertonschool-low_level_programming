#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"

/**
* append_text_to_file - append text at end of file
* @filename: name of file to append stuff in
* @text_content: string to be appended in file
* Return: exit status
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int status = 0;
	int cnt = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[cnt])
		cnt++;

	status = write(fd, text_content, cnt);

	if (status == -1)
		return (-1);

	close(fd);
	return (1);
}
