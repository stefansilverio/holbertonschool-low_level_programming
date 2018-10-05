#include "holberton.h"
#include <stdio.h>

/**
 * main - print all arguments passed to a function
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; argc > index; index++)
		printf("%s\n", argv[index]);
	return (0);
}
