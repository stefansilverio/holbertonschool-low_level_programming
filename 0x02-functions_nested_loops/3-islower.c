#include "holberton.h"

/**
 * _islower - 'c' checks for lowercase characters.
 *
 * @c: checks for lowercase characters.
 *
 * Return: either 0 or 1.
 */
int _islower(int c)
{
	if (('a' < c) && ('z' > c))
		return (1);
	else
		return (0);
}

