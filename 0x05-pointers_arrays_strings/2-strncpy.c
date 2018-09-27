#include "holberton.h"

/**
 * _strncpy - copy n characters to a buffer
 *
 * @dest: destination buffer
 *
 * @src: string to be appended
 *
 * @n: number of characters to be copied
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (src[index] && n > index)
	{
		dest[index] = src[index];
		index++;
	}
	while (n > index)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
