#include "holberton.h"

/**
 * _pow_recursion - return the value of x raised to y
 *
 * @x: base value
 *
 * @y: power
 *
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
