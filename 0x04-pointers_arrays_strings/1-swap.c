#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap two integers
 *
 * @a: ptr1
 *
 * @b: ptr2
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

