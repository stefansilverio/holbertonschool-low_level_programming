#include "holberton.h"

/**
 * _sqrt_recursion - return the sqrt of a number
 *
 * @n: number to take square root of
 *
 * helper - helper function
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	int test = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (helper(test + 1, n));
}

/**
 * helper - helper function
 *
 * @test: numbers to test
 *
 * @n: number to take sqrt of
 *
 * Return: exit status.
 */
int helper(int test, int n)
{
	if ((test * test) == n)
		return (test);
	if ((test * test) > n)
		return (-1);
	return (helper(test + 1, n));
}
