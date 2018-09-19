#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - print n times tables.
 *
 * @n: times table to be printed.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int x, y, a, b;

	for (x = 0; x <= n; x++)
	{
		if ((n > 15) || (n < 0))
			break;
		for (y = 0; y <= n; y++)
		{
			a = x * y;
			if (y == 0)
				_putchar('0');
			else if (a < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(a % 10 + '0');
			}
			else if (a < 100)
			{
				_putchar(' ');
				_putchar(a / 10 + '0');
				_putchar(a % 10 + '0');
			}
			else
			{
				_putchar(a / 100 + '0');
				b = a % 100;
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}
