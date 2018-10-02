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
	int principal = 0;
	int secondary = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				principal += a[i];
			if ((i + j) == (size - 1))
				secondary += a[i];
		}
	}
	printf("principal diagonal: %d\n", principal);
	printf("secondary diagonal: %d\n", secondary);
}
