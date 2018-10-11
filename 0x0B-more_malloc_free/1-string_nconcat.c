#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate n bytes from src to dest
 *
 * @s2: source string
 *
 * @s1: destination string
 *
 * @n: number of bytes
 *
 * Return: Always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index_1 = 0;
	unsigned int index_2 = 0;
	char *buffer;

	if (s2 == NULL)
		s2 = "";

	while (s1[index_1] != '\0') /* space for dest */
		index_1++;

	while (s2[index_2] != '\0') /* space for src */
		index_2++;

	if (n > index_2)
		n = index_2;

	buffer = malloc((index_1 + n + 1) * sizeof(char));

	if (buffer == NULL)
		return (NULL);

	for (index_1 = 0; s1[index_1] != '\0'; index_1++) /* fill buffer with s1 */
		buffer[index_1] = s1[index_1];

	index_2 = 0;

	while (n > index_2)  /* fill buffer with s2 */
	{
		buffer[index_1] = s2[index_2];
		index_1++;
		index_2++;
	}
	buffer[index_1] = '\0';
	return (buffer);
}
