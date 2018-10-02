#include "holberton.h"

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
	int sum = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i == j) || (i == size - j - 1))
			{
				sum += a[i][j];
			}
		}
	}
	return (sum);
}
