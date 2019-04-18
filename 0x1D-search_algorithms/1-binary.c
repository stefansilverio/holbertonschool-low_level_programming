#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int _split(int *array, size_t hi, size_t low, int value);

/**
 * binary_search - traverse list for value
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int hi = size - 1;
	int lo = 0;

	if (array == NULL)
		return (-1);
	return (_split(array, hi, lo, value));
}

/**
 * _split - traverse list for value
 * @array: array to be searched
 * @hi: end of list
 * @low: starting index of list
 * @value: value to search for
 * Return: first index where value is located
 */
int _split(int *array, size_t hi, size_t low, int value)
{
	size_t idx;
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
		return ((unsigned int)mid);

	if (hi == low && array[low] != value)
		return (-1);

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
