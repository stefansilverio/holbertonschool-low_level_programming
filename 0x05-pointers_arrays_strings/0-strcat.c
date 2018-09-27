#include "holberton.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int index_dest = 0;
	int index_src;

	while (dest[index_dest])
		index_dest++;
	index_src = 0;
	while (src[index_src])
	{
		dest[index_dest] = src[index_src];
		index_src++;
		index_dest++;
	}
	return (dest);
}
