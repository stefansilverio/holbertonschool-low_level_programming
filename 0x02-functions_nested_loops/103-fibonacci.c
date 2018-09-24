#include <stdlib.h>
#include <stdio.h>
#define MAX_TERM 3524578 /* max term value */

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

	while ((int1 <= MAX_TERM) && (int2 <= MAX_TERM))
	{
		sum = int1 + int2;
		if (int1 > int2)
			int2 = sum;
		else if (int1 < int2)
			int1 = sum;
		if ((int1 % 2) == 0)
			print_sum += int1;
		else if ((int2 % 2) == 0)
			print_sum += int2;
	}
	printf("%lu", print_sum);
	putchar('\n');
	return (0);
}
