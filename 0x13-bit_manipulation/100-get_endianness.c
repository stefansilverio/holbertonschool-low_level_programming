#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - determine endianess of machine
 * Return: nothing
 */
int get_endianness(void)
{
	int test = 1;
	char *address = (char *) &test;

	if (*address) /* if value at first addr is not 0 */
		return (*address);
	else
		return (*address);
}
