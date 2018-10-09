#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - concatenate two strings
 *
 * @s1: destination string
 *
 * @s2: source string
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int index_1;
	int index_2 = 0;
	int size_1 = 0;
	int size_2 = 0;
	char *buffer;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index_1 = 0; s1[index_1] != '\0'; index_1++)
		size_1++;

	for (index_1 = 0; s2[index_1] != '\0'; index_1++)
		size_2++;

	buffer = malloc(((size_1 + size_2) + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (index_1 = 0; size_1 > index_1; index_1++)
	{
		buffer[index_1] = s1[index_1];
	}

	for (; size_2 >= index_2; index_2++)
	{
		buffer[index_1] = s2[index_2];
		index_1++;
	}

	return (buffer);
}
