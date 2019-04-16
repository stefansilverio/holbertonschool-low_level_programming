#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - traverse list for value
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%u] = [%u]\n",
		       (unsigned int)idx, (unsigned int)array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
