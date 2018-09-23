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
	unsigned long sum;
	unsigned long int1 = 1;
	unsigned long int2 = 2;

	printf("1, ");
	printf("2, ");
	while (a < 47)
	{
		sum = int1 + int2;
		if (a != 46)
			printf("%lu, ", sum);
		else if (a == 46)
			printf("%lu", sum);
		if (int1 > int2)
			int2 = sum;
		else
			int1 = sum;
		a++;
	}
	putchar('\n');
	return (0);
}
