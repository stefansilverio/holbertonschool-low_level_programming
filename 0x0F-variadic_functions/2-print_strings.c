#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a newline
 *
 * @separator: delimeter between strings
 *
 * @n: number of strings
 *
 * Return: Always 0
 */
void print_strings(const char *separator, const int n, ...)
{
	va_list valist;
	int i;
	char *string;

	va_start(valist, n); /* n is # of args */

	for (i = 0; i < n; i++)
	{

		string = va_arg(valist, char*);

		if (string == NULL)
		{
			printf("(nil)");
			if (i + 1 != n)
				printf("%s", separator);
			continue;
		}

		if ((i + 1 == n) || (separator == NULL))
		{
			printf("%s", string);
			continue;
		}

		printf("%s", string);
		printf("%s", separator);
	}

	va_end(valist);
	printf("\n");
}
