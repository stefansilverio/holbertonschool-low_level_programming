#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - call 3-get_op_func
 *
 * @argc: argument count
 *
 * @argv: argument array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if ((num2 == 0) && ((*op == '/') || (*op == '%')))
	{
		printf("Error\n");
		exit(100);
	}

	if ((get_op_func(op)) && (*(argv[2] + 1) == '\0'))
	{
		result = get_op_func(op)(num1, num2);
		printf("%d\n", result);
		return (0);
	}

	printf("Error\n");
	exit(99);
	return (0);
}
