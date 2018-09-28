#include "holberton.h"

/**
 * reverse_array - reverse an array of integers
 *
 * @a: an array of integers
 *
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int index = 0;
	int len = n;

	n--;
	while (index < (len / 2))
	{
		temp = a[n];
		a[n] = a[index];
		a[index] = temp;
		index++;
		n--;
	}
}
