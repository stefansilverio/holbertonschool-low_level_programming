#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - traverse list for value
 * @array: array to be searched
 * @size: size of array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
/* what if number is not in list? */
int binary_search(int *array, size_t size, int value)
{
 	int mid;
	size_t idx;

 	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (idx = 0; idx < size; idx++)
	{
		printf("%d", array[idx]);
		if (idx + 1 != size)
			printf(", ");
	}
	if (size == 2)
	{
		if (array[0] == value)
			return (0);
		if (array[1] == value)
			return (1);
		else
			return (-1);
	}
	mid = size / 2;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
	{
		/* recursive call left */
		printf("\nrecursive call left\n");
		size = mid;
		return binary_search(array, size, value);
	}
	else
	{
		/* recursive call right */
		printf("\nrecursive call right\n");
		array = array + mid;
		printf("first element in array %d\n", array[0]);
		size = mid + 1;
		return binary_search(array, size, value);
	}
	return (-1);
}
