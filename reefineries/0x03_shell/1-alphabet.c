#include "holberton.h"
#include <stdio.h>

void main()
{

	char x;

	for (x = 'a'; x >= 'a' && x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
}
