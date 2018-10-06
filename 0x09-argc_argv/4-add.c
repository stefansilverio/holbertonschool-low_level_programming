#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int checker(char *string);
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

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	printf("hi ");

	for (index = 1; index < argc; index++)
	{

		printf("hi ");
		if (checker(argv[index]) == 0)
			continue;
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("hi ");
	}

	for (index = 1; index < argc; index++)
		storage += atoi(argv[index]);

	printf("hi");
	printf("%d\n", storage);
	return (0);

}

int checker(char *string)
{
	int sub_index;

	for (sub_index = 0; (string[sub_index]) != '\0'; sub_index++)
	{

		if (((string[sub_index]) <= '9') && ((string[sub_index]) >= '0'))
		{
			continue;
		}
		else
			return (1);

	}
	return (0);
}
