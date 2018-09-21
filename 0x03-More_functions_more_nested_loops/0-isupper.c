#include "holberton.h"

/**
 * _isupper - function checks for uppercase char.
 *
 * @c: letter to be checked.
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (x == c)
			return (1);
		else if (x != c)
			return (0);
	}
	return (0);
}
