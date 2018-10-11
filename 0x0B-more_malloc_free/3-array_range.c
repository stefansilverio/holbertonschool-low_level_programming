#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: first element in arrary
 *
 * @max: last element in array
 *
 * Return: Always 0
 */
int *array_range(int min, int max)
{
	int index;
	int *buffer;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	buffer = malloc((size) * sizeof(int));

	if (buffer == NULL)
		return (NULL);

	for (index = 0; min <= max; min++)
	{
		buffer[index] = min;
		index++;
	}

	return (buffer);
}
