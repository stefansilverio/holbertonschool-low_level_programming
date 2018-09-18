#include "holberton.h"

/**
 * print_sign - check sign of number.
 *
 * @n: determine sign of number.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}
	else
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}

	_putchar('\n');
	return (0);
}

