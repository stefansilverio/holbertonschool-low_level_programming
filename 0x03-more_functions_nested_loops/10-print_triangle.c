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
	int height, space;

	if (size > 0)
	{

		for (height = 0; height < size; height++)
		{
			for (space = size - height - 1; space > 0; space--)
			{
				_putchar(' ');
			}
			space = size - height - 1;
			for (; space < size; space++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else 
		_putchar('\n');
}

