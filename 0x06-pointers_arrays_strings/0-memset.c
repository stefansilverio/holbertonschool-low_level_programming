#include "holberton.h"

/**
 * _memset - set a constant byte
 *
 * @b: character to be placed in memory
 *
 * @n: number of characters to print
 *
 * @s: pointer in memory
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int index = 0;

	while (n > 0)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
