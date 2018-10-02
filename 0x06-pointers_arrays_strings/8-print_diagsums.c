#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - function that prints diagonal sums
 *
 * @a: diagonal to sum
 *
 * @size: size of diagonal
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int index = 0;
	int sum = 0;

	while (index < (size * size))
	{
		sum += a[index];
		index += size + 1;
	}
	printf("%d, ", sum);

	index = size - 1;
	sum = 0;

	while (index < size * size - 1)
	{
		sum += a[index];
		index += size - 1;
	}
	printf("%d\n", sum);
}
