#include "holberton.h"

/**
 * _strlen_recursion - return the length of string
 *
 * @s: string input
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
		count = 1 + _strlen_recursion(s + 1);
	return (count);
}
