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
	int count = 0;
	int i = 0;

	while (str[i])
		i++;
	while (count < i)
	{
		_putchar(str[count]);
			count += 2;
	}
	_putchar('\n');
}

