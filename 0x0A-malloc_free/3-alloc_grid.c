#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - return ptr to a grid of numbers
 *
 * @width: width of the grid
 *
 * @height: height of the grid
 *
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **buffer;
	int index_s1 = 0;
	int index_s2 = 0;
	int freed = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	buffer = malloc(sizeof(int *) * height);

	if (buffer == NULL)
	{
		return (NULL);
	}

	while (index_s1 < height)
	{
		buffer[index_s1] = malloc(sizeof(int) * width);

		if (buffer[index_s1] == NULL)
		{
			for (freed = 0; freed < index_s1; freed++)
				free(buffer[freed]);

			free(buffer);

			return (NULL);
		}

		while (index_s2 < width)
		{
			buffer[index_s1][index_s2] = 0;
			index_s2++;
		}

		index_s1++;
	}
	return (buffer);
}
