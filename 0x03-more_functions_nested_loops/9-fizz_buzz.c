#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - FizzBuzz test.
 *
 * Return: Always 0.
 */
int main(void)
{
	int range;

	for (range = 1; range <= 100; range++)
	{
		if (range % 3 == 0 && range % 5 == 0)
			printf("FizzBuzz ");
		else if (range % 3 == 0)
			printf("Fizz ");
		else if (range % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", range);
	}
	putchar('\n');
	return (0);
}
