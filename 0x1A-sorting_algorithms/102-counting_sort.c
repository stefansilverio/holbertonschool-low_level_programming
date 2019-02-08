#include <stdio.h>
#include "sort.h"

/**
 *counting_sort - sort array of ints using counting algorithm
 *@array: array to be sorted
 *@size: size of array
 *
 *Return: Void.
 */
void counting_sort(int *array, size_t size)
{
	int *counter, *output;
	size_t i, largest = 0;

	if (size <= 2)
		return;
	for (i = 0; i < size; i++)
	{
		if (array[i] > (int)largest)
			largest = array[i];
	}
	largest++;
	counter = malloc((largest + 1) * sizeof(int));
	for (i = 0; i < size; i++)
		counter[array[i]] += 1;
	for (i = 1; i <= largest; i++)
		counter[i] = counter[i - 1] + counter[i];
	print_array(counter, largest);
	output = malloc(size * sizeof(int));
	for (i = 0; i < size; i++)
	{
		output[counter[array[i]] - 1] = array[i];
		counter[array[i]] -= 1;
	}
	for (i = 0; i < size; i++)
		array[i] = output[i];
	free(counter);
	free(output);
}
