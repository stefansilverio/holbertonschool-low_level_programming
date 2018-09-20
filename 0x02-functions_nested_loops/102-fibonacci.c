#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 0;
	unsigned long b;
	int x = 1;
	int y = 2;

	printf("1\n");
	printf("2\n");
	while (a < 50)
	{
		b = x + y;
		printf("%lu\n", b);
		if (x > y)
			y = b;
		else if (x < y)
			x = b;
		a++;
	}
	return (0);
}
