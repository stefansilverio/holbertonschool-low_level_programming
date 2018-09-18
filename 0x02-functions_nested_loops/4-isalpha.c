#include "holberton.h"

/**
 * _isalpha - check the code for upper or lowercase.
 *
 * @c: Checks for characters.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
		return (1);
	else
		return (0);
}
