#include "holberton.h"

/**
 * print_rev - print a string in reverse.
 *
 * @s: string to be reversed.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		++s;
		count++;
	}
	while (count > 0)
	{
		--s;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
