#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print anything
 *
 * @format: list of args passed to fn
 *
 * Return: Always 0
 */
void print_all(const char * const format, ...)
{
	va_list valist;

	int index = 0;
	char c;
	int i;
	float f;
	char *s;

	while (format[index] != '\0')
		index++; /* get length of string of args */

	va_start(valist, index);

	index = 0;

	while (format[index] != '\0')
	{
		if ((format[index] == 'c') || (format[index] == 'i') || (format[index] == 'f') || (format[index] == 's'))
		{
			switch (format[index])
			{
			case 'c':
				printf("%c", va_arg(valist, char));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, float));
				break;
			case 's':
				printf("%s", va_arg(valist, char *));
				break;
			}
		}
	}
	printf("\n");
	va_end(valist);
}
