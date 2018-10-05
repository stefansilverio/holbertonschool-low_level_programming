#include "holberton.h"
#include <stdio.h>

/**
 * main - print a number followed by a number
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
