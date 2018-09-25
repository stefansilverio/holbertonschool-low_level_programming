#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print number of elements in array.
 *
 * @a: array passed to function.
 *
 * @n: number of elements to be printed in array.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int index = 0;

while (index < n)
{
printf("%d", a[index]);
if (index != n - 1)
	printf(", ");
index++;
}

putchar('\n');

}

