#include "holberton.h"

void print_diagonal(int num)
{
	int lines = 0;
	int spaces;

	while (lines < num)
	{
		for (spaces = 0; spaces < lines; spaces++)
			_putchar(' ');
		++lines;
		_putchar('\\');
		_putchar('\n');
	}
}
