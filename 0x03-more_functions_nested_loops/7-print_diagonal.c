#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *
 * @n: length of line.
 *
 * Return: Always 0.
 */
void print_diagonal(int size)
{
	int spaces;
	int slashes;

	if (size > 0)
	{
		for (spaces = 0; spaces < size; spaces++)
		{
			for (slashes = 0; slashes < spaces; slashes++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
