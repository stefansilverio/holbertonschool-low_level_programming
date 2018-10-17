#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 *
 * @array: array of integers
 *
 * @size: size of array
 *
 * @cmp: fn that compares integers
 *
 * Return: first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if ((array == NULL) || (size == 0) || (cmp ==  NULL))
		return (-1);

	if (size <= 0)
		return (-1);

	while (size--)
	{
		if (cmp(array[index]))
			return (index);
		index++;
	}
	return (-1);
}
