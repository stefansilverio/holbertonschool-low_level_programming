#include "holberton.h"

/**
 * _strcmp - compare the length of two strings
 *
 * @s1: string of reference
 *
 * @s2: string to compare
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index]; index++)
	{
		if (s1[index] > s2[index])
			return (s1[index] - s2[index]);
		else if (s1[index] < s2[index])
			return (s1[index] - s2[index]);
		else
			return (s1[index] - s2[index]);
	}
	return (0);
}
