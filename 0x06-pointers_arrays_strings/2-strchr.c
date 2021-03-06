#include "holberton.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to search
 *
 * @c: character to search for
 *
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
