#include "holberton.h"

/**
 * puts_half - print half of a string.
 *
 * @str: string to be cut.
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;
	int check = 0;

	while (str[i])
		i++;
	check = i / 2;
	if ((i % 2) == 0)
	{
		while (check <= i - 1)
		{
			_putchar(str[check]);
			check++;

		}
	}
	else
	{
		check += 1;

		while (check <= (i - 1))
		{
			_putchar(str[check]);
			check++;
		}
	}
	_putchar('\n');
}
