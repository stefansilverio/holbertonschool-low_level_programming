#include "holberton.h"

/**
 * _strpbrk - search a string for a set of bytes
 *
 * @s: string to be searched
 *
 * @accept: bytes to search for
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int index_s, index_a;

	for (index_s = 0; s[index_s]; index_s++)
	{
		for (index_a = 0; accept[index_a]; index_a++)
		{
			if (s[index_s] == accept[index_a])
				return (s + index_s);
		}
	}
	return ('\0');
}
