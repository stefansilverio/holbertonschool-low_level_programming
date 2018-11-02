#include <stdio.h>
#include "holberton.h"

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
