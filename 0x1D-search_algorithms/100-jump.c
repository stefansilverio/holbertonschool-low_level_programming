#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

int _search(int *array, size_t jump, size_t size, size_t hi, size_t low,
	    int value);

/**
 * jump_search - define jump call _search
 * @array: list of integers
 * @size: size of list
 * @value: value you're searching for
 * Return: idx of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t low = 0;
	size_t hi = jump;

	if (array == NULL)
		return (-1);

	return (_search(array, jump, size, hi, low, value));
}

/**
 * _search - define jump call _search
 * @array: list of integers
 * @jump: jump block
 * @size: size of list
 * @hi: end of sublist
 * @low: beginning of sublist
 * @value: value you're searching for
 * Return: idx of value
 */
int _search(int *array, size_t jump, size_t size, size_t hi, size_t low,
	    int value)
{
	printf("Value checked array [%lu] = [%d]\n", low, array[low]);
	if (array[hi] < value && hi < size)
	{
		low = hi;
		hi = hi + jump;
		return (_search(array, jump, size, hi, low, value));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", low, hi);
		if (hi >= size)
		{
			printf("Value checked array [%lu] = [%d]\n", low, array[low]);
			return (-1);
		}
		while (low <= hi)
		{
			printf("Value checked array [%lu] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			low++;
		}
	}
	return (-1);
}
