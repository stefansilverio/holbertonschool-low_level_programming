#include <stdlib.h>
#include <stdio.h>

/**
 * main - print fibonacci digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long print_sum = 0;
	unsigned long sum = 0;
	unsigned long int1 = 1;
	unsigned long int2 = 2;

	while ((int1 < 4000000) && (int2 < 4000000))
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
			print_sum += sum;
			if (int1 > int2)
				int2 = sum;
			else if (int2 > int1)
				int1 = sum;
		}
		if ((int1 < 3524578) && (int2 < 3524578))
			printf("%lu, ", print_sum);
		else
			printf("%lu", print_sum);
	}
	putchar('\n');
	return (0);
}
