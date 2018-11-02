#include <stdio.h>
#include "holberton.h"
#include <limits.h>

/**
 * get_bit - return value of bit at given index
 * @n: number given by user
 * @index: index to get bit
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	else if (n == 0)
		return (0);

	else if (index == 0)
		return (n & 1);
	n = n >> index;
	return (n & 1);
}
