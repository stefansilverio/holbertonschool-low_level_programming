#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute on each element of array
 *
 * @array: array given
 *
 * @size: size of array
 *
 * @action: ptr to fn
 *
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	if ((size == 0) || (array  == NULL) || (action == NULL))
		return;

	while (size > index)
	{
		action(array[index]);
		index++;
	}
}
