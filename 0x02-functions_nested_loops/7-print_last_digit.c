#include "holberton.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @a: digit passed to function.
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a = (a % 10);
	if (a <= 0)
		a = (a * (-1));
	_putchar(a + '0');
	return (a);
}

