#include "holberton.h"

/**
 * _strncat - concatenate a string
 *
 * @dest: destination string
 *
 * @src: string to append
 *
 * @n: only this many bytes
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index_dest = 0;
	int index_src = 0;

	while (dest[index_dest])
		index_dest++;
	while (src[index_src] && n > index_src)
	{
		dest[index_dest++] = src[index_src];
		index_src++;
	}
	return (dest);
}
