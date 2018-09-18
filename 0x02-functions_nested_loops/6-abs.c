#include "holberton.h"

/**
 * _abs - convert to absolute value.
 *
 * @i: compute absolute value.
 *
 * Return: Always 0.
 */
int _abs(int i)
{
	if (i >= 0)
		return (i);

	i = i * (-1);
	return (i);


}




