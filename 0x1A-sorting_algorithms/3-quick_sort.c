#include "sort.h"
#include <stdio.h>

/**
 * quick_sort - wrapper for _qsort
 * @array: ptr to array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	int lo = 0, hi = size - 1;
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (array[0] == array[i])
			continue;
		else
			break;
	}
	if (i == size)
		return;
	_qsort(array, lo, hi, size);
}

/**
 * _qsort - recursive calls
 * @array: ptr to array
 * @lo: lower bound
 * @hi: upper bound
 * @size: size of array
 */
void _qsort(int *array, int lo, int hi, size_t size)
{
	int piv;

	if (lo < hi)
	{
		piv = partition(array, lo, hi, size);
		_qsort(array, lo, piv - 1, size);
		_qsort(array, piv + 1, hi, size);
	}
}

/**
 * partition - generate partitions
 * @array: ptr to array
 * @lo: lower bound
 * @hi: upper bound
 * @size: size of array
 * Return: nothing
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int piv, i, j, tmp;

	piv = array[hi];
	i = lo;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < piv)
		{
			if (j > i) /* swap & print if j & i differ */
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++; /* increment anyways */

		}
	}
	if (i < hi)
	{
		tmp = array[i]; /* swap array[i] and array[hi] */
		array[i] = array[hi];
		array[hi] = tmp;
		print_array(array, size);
	}
	return (i); /* returning new partition boundary */
}
