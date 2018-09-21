#include <stdio.h>
#include <stdlib.h>

/**
 * main - return greated common factor.
 *
 * Return: Always 0.
 */
int main(void)
{
	long factor;
	long n = 612852475143;

	for (factor = 2; factor < n / 2; factor++)
	{
		if ((n % factor) == 0)
		{
			n /= factor;
			factor = 2;
		}
	}
	printf("%lu\n", n);
	return (0);
}
