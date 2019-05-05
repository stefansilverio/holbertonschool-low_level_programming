#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int _split(int *array, int hi, int low, int value);
/**
 * exponential_search - implement exponential search
 * @array: ptr to list
 * @size: size of list
 * @value: key you're looking for
 * Return: idx of key
 */
int exponential_search(int *array, size_t size, int value)
{
	int hi = 1, lo = 0;

	while (array[hi] < value && (unsigned int) hi < size)
	{
		printf("Value checked array[%d] = [%d]\n", hi, array[hi]);
		lo = hi;
		hi *= 2;
	}

	if (array[hi] > value)
	{
		printf("Value found between indexes [%d] and [%d]\n", lo, hi);
		return (_split(array, hi, lo, value));
	}

	else
	{
		hi = size - 1;
		printf("Value found between indexes [%d] and [%d]\n", lo, hi);
		return (_split(array, hi, lo, value));
	}

	return (-1);
}

/**
 * _split - traverse list for value
 * @array: array to be searched
 * @hi: end of list
 * @low: starting index of list
 * @value: value to search for
 * Return: first index where value is located
 */
int _split(int *array, int hi, int low, int value)
{
	int idx;
	int mid = (hi + low) / 2;

	printf("Searching in array: ");
	for (idx = low; idx <= hi; idx++)
	{
		printf("%d", array[idx]);
		if (idx + 1 <= hi)
			printf(", ");
		else
			printf("\n");
	}

	if (array[mid] == value)
		return (mid);

	if (hi == low && array[low] != value)
		return (-1); /* value not in list */

	else if (value > array[mid])
	{
		low = mid + 1;
		return (_split(array, hi, low, value));
	}
	else
	{
		hi = mid - 1;
		return (_split(array, hi, low, value));
	}
}

