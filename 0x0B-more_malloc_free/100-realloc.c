#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - realloc a memory block
 *
 * @ptr: ptr to memory previously allocated
 *
 * @old_size: size of the allocated space for ptr
 *
 * @new_size: size of the new memory block
 *
 * Return: Always 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *buffer;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		buffer = malloc((new_size) * sizeof(char));

		if (buffer == NULL)
			return (NULL);

		buffer = (void *)buffer;
		return (buffer);
	}

	/* new_size > old_size) */

	buffer = malloc((new_size) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (index = 0; old_size > index; index++)
	{
		buffer[index] = *((char *)ptr + index);
	}

	free(ptr);
	buffer = (void *)buffer;

	return (buffer);
}
