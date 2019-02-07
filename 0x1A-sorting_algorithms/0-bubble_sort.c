#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 *bubble_sort - sorting algorithm that swaps two elements at a time
 *@array: array to be sorted
 *@size: size of the array
 *
 *Return: Void.
 */
void bubble_sort(int *array, size_t size)
{
	int flag, idx, tmp;
	int size_i = size - 1;

	flag = 0;
	while (!flag)
	{
		flag = 1;
		for (idx = 0; idx < size_i; idx++)
			if (array[idx] > array[idx + 1])
			{
				flag = 0;
				tmp = array[idx];
				array[idx] = array[idx + 1]; /* swap */
				array[idx + 1] = tmp;
				print_array(array, size);
		}
		size_i--;
	}
}
