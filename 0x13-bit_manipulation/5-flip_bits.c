#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - return number of bits you must flip for match
 * @n: number whose bits to flip
 * @m: number to match
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int mask = 1;

	n = n ^ m;
	while (n)
	{
		mask = 1;
		mask = mask & n;
		if (mask == 1)
			i++;
		n = n >> 1;
	}
	return (i);
}
