#include <stdio.h>
#include "holberton.h"

/**
 * set_bit - set a bit at a given index
 * @n: input string
 * @index: index to set bit
 * Return: exit status
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long mask = 1;

	if (index > 64)
		return (-1);
	if (n == NULL)
		return (-1);
	if (index == 0)
	{
		*n += 1;
		return (1);
	}
	mask = mask << index;
	*n = *n | mask;
	return (1);
}
