#include "holberton.h"

/**
 * is_prime_number - determine if n is prime
 *
 * @n: determine if n is a prime number
 *
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	int test = 0;

	if ((n != 2) && ((n % 2) == 0))
		return (0);
	if (n < 2)
		return (0);
	return (helper(test + 1, n));
}

/**
 * helper - helper function
 *
 * @test: integer to divide
 *
 * @n: number to test
 *
 * Return: exit status
 */
int helper(int test, int n)
{
	if ((n % test) == 0)
		return (test);
	return (helper(test + 1, n));
}
