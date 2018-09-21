#include "holberton.h"

/**
 * print_triangle - print a triangle.
 *
 * @size: size of triangle.
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int hash, space;

	if (size > 0)
	{

		for (hash = 1; hash <= size; hash++)
		{
			for (space = size - hash; space > 0; space--)
			{
				_putchar(' ');
			}
			for (; space < hash; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

