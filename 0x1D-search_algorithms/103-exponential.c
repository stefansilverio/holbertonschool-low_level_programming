#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

int _split(int *array, size_t hi, size_t low, int value);
/**
 * exponential_search - implement exponential search
 * @array: ptr to list
 * @size: size of list
 * @value: key you're looking for
 * Return: idx of key
 */
int exponential_search(int *array, size_t size, int value)
{
	int expo, hi, lo;
	size_t idx;

	if (array == NULL)
		return (-1);

	for (idx = 0; idx < size; idx++)
	{
		expo = pow(2, idx);
		if ((int)expo > value)
		{
			hi = expo;
			lo = pow(2, idx - 1);
			printf("lo: %d hi: %d\n", lo, hi);
			return (0);
			return (_split(array, hi, lo, value));
		}
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
