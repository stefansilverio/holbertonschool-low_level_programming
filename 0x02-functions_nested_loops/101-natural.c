#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print natural numbers.
 *
 * @n: natural number given.
 *
 * Return: Always 0.
 */
void main(void)
{
	int sum, five, three, multiple;

	for (multiple = 0; multiple < 1024; multiple++)
	{
		five = multiple * 5;
		three = multiple * 3;
		sum = five + three;
	}
	printf("%d", sum);
	putchar('\n');
}
