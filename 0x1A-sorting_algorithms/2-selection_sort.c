#include <stdio.h>
#include "sort.h"

/**
 *selection_sort - sort an array using a selection algorithm
 *@array: array to be sorted
 *@size: size of array
 *
 *Return: Void.
 */
void selection_sort(int *array, size_t size)
{
	int i = 0, flag, k;
	int min_value, new_min_pos = 0;

	while (array[i])
	{
		min_value = array[i]; /* compare each k with cur position*/
		flag = 0;

		for (k = i; array[k]; k++) /*k = i so we dont starting over*/
		{
			if (array[k] <= min_value)
			{
				if (array[k] < min_value)
					flag = 1;
				min_value = array[k]; /*set new min*/
				new_min_pos = k; /*save position of new min*/
			}
		}

		array[new_min_pos] = array[i]; /*set found position to cur*/
		array[i] = min_value;  /*set current to new min*/

		if (flag == 1)
			print_array(array, size);
		i++;
	}
}
