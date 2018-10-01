#include "holberton.h"
void print_number(int n);

/**
 * print_number - print an integer.
 *
 * @n: integer to be printed.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	if ((n > 9) || (n < -9))
	{
		print_number(n / 10);
		if (n < 0)
			n = (-n);
		_putchar((n % 10) + '0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = (-n);
		}
		_putchar(n + '0');
	}
}
