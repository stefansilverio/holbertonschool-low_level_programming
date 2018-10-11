#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: number of elements in the array
 *
 * @size: size of each element
 *
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *buffer;
	int buffer_size;
	int index = 0;

	buffer_size = nmemb * size;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	buffer = malloc(nmemb * size);

	if (buffer == NULL)
		return (NULL);

	while (buffer_size--)
	{
		buffer[index] = 0;
		index++;
	}

	buffer = (void *)buffer;

	return (buffer);
}
