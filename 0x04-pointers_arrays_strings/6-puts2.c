#include "holberton.h"

/**
 * puts2 - print one char out of two.
 *
 * @str: string passed to function.
 *
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

