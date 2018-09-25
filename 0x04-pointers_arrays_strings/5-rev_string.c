#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - function to reverse a string.
 *
 * @s: string to be reversed.
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int index, temp;
	int n = 0;
	char element1;

	while (s[index])
		index++;
	while (n < index)
	{
		element1 = s[n];
		temp = s[index - 1];
		s[n] = temp;
		s[index - 1] = element1;
		index--;
		n++;
	}

}
