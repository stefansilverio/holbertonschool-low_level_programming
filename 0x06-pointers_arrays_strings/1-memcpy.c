#include "holberton.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: memory area destination
 *
 * @src: copy from src
 *
 * @n: number of bytes to copy
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index = 0;

	while (n)
	{
		dest[index] = src[index];
		index++;
		n--;
	}
	return (dest);
}
