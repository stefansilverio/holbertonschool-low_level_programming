#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse followed by newline
 *
 * @s: string to be printed
 *
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else if (*s == '\0')
		return;
	_putchar(*s);
}
