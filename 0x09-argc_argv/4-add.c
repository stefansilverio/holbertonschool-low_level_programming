#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum of two numbers
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int storage = 0;
	int index;
	int sub_index;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	printf("hi ");

	for (index = 1; index < argc - 1; index++)
	{
		if (atoi(argv[index]) < 0)
		{
			printf("Error\n");
			return (1);
		}
		printf("hi ");
		for (sub_index = 1; *argv[sub_index] != '\0'; sub_index++)
		{
			if ((**argv++ > '9') || (**argv++ < '0'))
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("hi ");
	}

	for (index = 1; index < argc - 1; index++)
		storage += atoi(argv[index]);

	printf("hi");
	printf("%d\n", storage);
	return (0);

}
