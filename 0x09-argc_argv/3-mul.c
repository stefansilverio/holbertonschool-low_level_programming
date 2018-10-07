#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

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
	int storage;

	if (argc < 3)
	{
		puts("Error\n");
		return (1);
	}
	storage = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
	printf("%d\n", storage);
	return (0);
}
