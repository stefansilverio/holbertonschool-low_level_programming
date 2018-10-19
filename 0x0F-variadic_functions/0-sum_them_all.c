#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all args
 *
 * @n: number of args passed in
 *
 * Return: Always 0
 */
int sum_them_all(const int n, ...)
{
	va_list valist;
	int sum = 0;
	int i;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
