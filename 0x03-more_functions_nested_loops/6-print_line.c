#include "holberton.h"

/**
 * print_line - print a straight line across the terminal.
 *
 * @n: length of line.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}

