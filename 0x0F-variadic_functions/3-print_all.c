#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: list of args passed to fn
 *
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int index = 0;
	int check = 1;
	char *string;

	va_start(valist, format);
	while ((format != NULL) && (format[index] != '\0'))
	{
		check = 1;

		switch (format[index])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			string = va_arg(valist, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s", string);
			break;
		default:
			check = 0;
			break;
		}
		index++;
		while ((format[index] != '\0') && (check != 0))
		{
			printf(", ");
			break;
		}
	}
	printf("\n");
	va_end(valist);
}
