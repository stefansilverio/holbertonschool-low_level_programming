#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long sum = 0;
	unsigned long int1 = 1;
	unsigned long int2 = 2;

	printf("1, ");
	printf("2, ");
	while (sum < 4000000)
	{
		sum = int1 + int2;
		if ((sum % 2) != 0)
		{
			if (int1 > int2)
				int2 = sum;
			else if (int2 > int1)
				int1 = sum;
			continue;
		}
		else if ((sum % 2) == 0)
		{
			if (sum < 2000000)
				printf("%lu, ", sum);
			else if (sum > 2000000)
				printf("%lu", sum);
			if (int1 > int2)
				int2 = sum;
			else if (int2 > int1)
				int1 = sum;
		}
	}
	putchar('\n');
	return (0);
}
