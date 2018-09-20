#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check for digit 0 - 9.
 *
 * @c: check this digit.
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
