#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print the name
 *
 * @name: users name
 *
 * @f: function ptr
 *
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
