#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars
 *
 * @size: size of memory to print
 *
 * @c: chars to print
 *
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	int buffer_size;
	int index = 0;

	if (size == 0)
		return (NULL);

	buffer = (char *)malloc(size * sizeof(char));
	buffer_size = size * sizeof(char);

	if (buffer == NULL)
	{
		return (NULL);
	}

	else
	{
		while (buffer_size > index)
		{
			*(buffer + index) = c;
			index++;
		}
			return (buffer);
	}

}
