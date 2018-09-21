#include "holberton.h"

/**
 * print_numbers - print numbers 0-9 followed by a newline.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
