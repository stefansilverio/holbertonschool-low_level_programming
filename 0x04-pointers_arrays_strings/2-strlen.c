#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string.
 *
 * @s: a string.
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int str_length;

	while (*s != 0)
	{
		++s;
		++str_length;
	}
	return (str_length);
}
