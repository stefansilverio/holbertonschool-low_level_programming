#include "holberton.h"

/**
 * print_number - print an integer.
 *
 * @n: integer to be printed.
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	int INT_MIN = -2147483648;

	if ((n > 9) || (n < -9))
	{
		print_number(n / 10);
		if (n < 0)
		{
			if (n == INT_MIN)
			{
				n++;
				n = (-n);
				_putchar((n % 10) + 1 + '0');
				return;
			}
			else
			{
				n = (-n);
				_putchar((n % 10) + '0');
				return;
			}
		}
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
