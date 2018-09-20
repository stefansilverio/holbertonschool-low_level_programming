#include <stdio.h>
#include <stdlib.h>

/**
 * main - determine sum of multiples.
 *
 * Return: Always 0.
 */
void main(void)
{
	int sum;
	int five, three, multiple;

	for (multiple = 1; multiple < 1024; multiple++)
	{
		five = multiple * 5;
		three = multiple * 3;
		if ((five % multiple) == 0)
			sum = five + five;
		else if ((three % multiple) == 0)
			sum = sum + three;
	}
	printf("%d", sum);
	putchar('\n');
}
