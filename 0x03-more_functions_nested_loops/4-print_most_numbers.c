#include "holberton.h"

/**
 * print_most_numbers - print single digits except 2 & 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == '2' || x == '4')
			continue;
		_putchar(x);
	}
	_putchar('\n');
}
