#include "holberton.h"

/**
 * string_toupper - return a string in uppercase
 *
 * @s: string to be put in uppercase
 *
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int index = 0;

	while (s[index])
	{
		if (s[index] < 97)
		{
			index++;
			continue;
		}
		s[index] = s[index] - 32;
		index++;
	}
	return (s);
}
