#include "holberton.h"

/**
 * times_table - print the 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int y, x, a;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			a = x * y;
			if (a >= 10)
				_putchar(a / 10 + '0');
			else if (x == 0)
				;
			else
				_putchar(' ');
			_putchar(a % 10 + '0');
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
