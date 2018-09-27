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
	int index_s1 = 0;
	int index_s2 = 0;

	for (; s1[index_s1]; index_s1++)
		;
	for (; s2[index_s2]; index_s2++)
		;
	if (index_s1 > index_s2)
		return (15);
	else if (index_s1 < index_s2)
		return (-15);
	else
		return (0);
}
