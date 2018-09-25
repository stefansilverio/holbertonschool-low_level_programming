#include "holberton.h"

/**
 * *_strcpy - copy string to another buffer.
 *
 * @src: points to a string.
 *
 * @dest: points to an empty array.
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] =  src[i];
		i++;
	}
	return (dest);
}
