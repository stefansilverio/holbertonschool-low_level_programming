#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - perform interpolation search on list
 * @array: ptr to list
 * @size: size of list
 * @value: value you're searching for
 * Return: idx of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	while (pos >= 0 && (size_t)pos < size) /*low < size && high > 0*/
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
	}
	return (-1);
}
