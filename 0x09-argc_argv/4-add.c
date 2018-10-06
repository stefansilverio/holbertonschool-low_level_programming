#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the multiple of two numbers
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int empty = 0;
	int storage = 0;
	int index;

	if (argc < 2)
	{
		printf("%d\n", empty);
		return (0);
	}

	for (index = 1; argv[index] != '\0'; index++)
	{
		if (atoi(argv[index]) <= 0)
		{
			puts("Error");
			return (1);
		}
	}

	for (index = 1; argv[index] != '\0'; index++)
		storage += atoi(argv[index]);

	printf("%d\n", storage);
	return (0);
}
