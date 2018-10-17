#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - select correct function
 *
 * @s: operator passed into program
 *
 * Return: Always 0
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if ((*s == ops[i].op[0]) && (*(s + 1) == '\0'))
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
