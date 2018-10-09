#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a ptr to duplicate string
 *
 * @str: string to duplicate and return
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
	char *buffer;
	int index;
	int size = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
		size++;

	buffer = malloc(size * sizeof(char));

	index = 0;

	if (buffer == NULL)
		return (NULL);

	else
		while (size > index)
		{
			*(buffer + index) = *(str + index);
			index++;
		}
	return (buffer);
}
