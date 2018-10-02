#include "holberton.h"

/**
 * _strstr - locate a substring
 *
 * @haystack: string to be searched
 *
 * @needle: substring to search for
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int index_h, index_n;

	for (index_h = 0; haystack[index_h]; index_h++)
	{
		if (haystack[index_h] == needle[0])
		{
			for (index_n = 0; needle[index_n]; index_n++)
			{
				if (needle[index_n] == haystack[index_h + index_n])
					continue;

				else
					break;
			}
		}
		if (needle[index_n] == '\0')
			return (haystack + index_h);
	}
	return ('\0');
}
