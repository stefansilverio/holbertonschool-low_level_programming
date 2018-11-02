#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clears
 * @n: clear
 * @index: clear
 * Return: clear
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long mask = 1;

	if (index > 64)
		return (-1);

	if (n == NULL)
		return (-1);
	if (index == 0)
	{
		*n = *n << 1;
		return (1);
	}

	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
