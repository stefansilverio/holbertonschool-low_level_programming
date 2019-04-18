#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

int _search(int *array, short jump, int size, int hi, int low, int value);

/**
 * jump_search - define jump call _search
 * @array: list of integers
 * @size: size of list
 * @value: value you're searching for
 * Return: idx of value
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size);
	int low = 0;
	int hi = jump;

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
int _search(int *array, short jump, int size, int hi, int low, int value)
{
	printf("Value checked array [%d] = [%d]\n", low, array[low]);
	if (array[hi] < value && hi < size)
	{
		low = hi;
		hi = hi + jump;
		return (_search(array, jump, size, hi, low, value));
	}
	else
	{
		printf("Value found between indexes [%d] and [%d]\n", low, hi);
		if (hi >= size)
		{
			printf("Value checked array [%d] = [%d]\n", low, array[low]);
			return (-1);
		}
		while (low <= hi)
		{
			printf("Value checked array [%d] = [%d]\n", low, array[low]);
			if (array[low] == value)
				return (low);
			low++;
		}
	}
	return (-1);
}
