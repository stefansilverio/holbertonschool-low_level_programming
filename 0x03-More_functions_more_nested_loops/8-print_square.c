#include "holberton.h"

/**
 * print_square - print a square.
 *
 * @size: size of the square.
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
