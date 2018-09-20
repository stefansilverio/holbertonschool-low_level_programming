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

	for (x = 0; x <= n; x++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}
 
