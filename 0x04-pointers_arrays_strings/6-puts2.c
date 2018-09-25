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
	int index = 0;
	int count = 0;

	while (str[index])
		index++;
	while (index >= count + 2)
	{
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}

