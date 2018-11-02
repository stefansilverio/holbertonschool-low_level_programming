#include <stdio.h>
#include "holberton.h"

/**
 * clear_bit - clear but at given index
 * @n: ptr to number
 * @index: clear bit at this index
 * Return: exit status
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long mask = 1;

	if (index > 64)
		return (-1);

	if (n == NULL)
		return (-1);

	mask = mask << index;
	mask = ~mask;
	*n = *n & mask;
	return (1);
}
