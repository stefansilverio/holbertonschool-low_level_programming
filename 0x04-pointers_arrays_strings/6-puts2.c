#include "holberton.h"

/**
 * puts2 - print one char out of two
 *
 * @str: string passed to function.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
			_putchar('\n');
}

