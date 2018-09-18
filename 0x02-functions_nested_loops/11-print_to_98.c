#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print natural numbers.
 *
 * @n: natural number given.
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n <= 98)
		{
			printf("%d", n);
			n++;
		}
		else
		{
			printf("%d", n);
			n--;
		}

		putchar(',');
		putchar(' ');
	}
	if ((n == 98) || (n == 99) || (n == 97))
		printf("98");
	putchar('\n');
}

