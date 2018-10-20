#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers followed by a newline
 *
 * @separator: separate numbers
 *
 * @n: number of args
 *
 * Return: Always 0
 */
void print_numbers(const char *separator, const int n, ...)
{
	va_list valist;
	int i;

	va_start(valist, n); /* n is # of args */

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(valist, int));
		if ((i + 1 == n) || (separator == NULL))
			continue;
		printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
