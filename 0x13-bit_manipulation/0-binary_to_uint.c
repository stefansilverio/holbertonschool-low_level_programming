#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to unsigned int
 * @b: pointer to binary string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int num = 0; /* number to return */
	int idx = 0; /* index to walk through str */

	if (b == NULL)
		return (0);

	while (b[idx])
	{
		if ((b[idx] != '0') && (b[idx] != '1'))
			return (0);
		if (b[idx] == '0')
			num <<= 1;
		else
		{
			num <<= 1;
			num++;
		}
		idx++;
	}
	return (num);
}
