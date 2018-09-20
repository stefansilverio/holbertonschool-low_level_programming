#include <stdio.h>
#include <stdlib.h>

/**
 * main - determine sum of multiples.
 *
 * Return: Always 0.
 */
void main(void)
{
	int x = 0;
	int sum = 0;

	while (x < 1024)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum = sum + x;
		x++;
	}
	printf("%d\n", sum);
}
