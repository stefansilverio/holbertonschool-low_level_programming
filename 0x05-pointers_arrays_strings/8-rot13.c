#include "holberton.h"

/**
 * rot13 - encode a string to rot-13
 *
 * @s: string to be encoded
 *
 * Return: Always 0.
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 65) && (s[i] <= 122))
		{
			if ((s[i] < 'N') || ((s[i] < 'n') && (s[i] >= 'a')))
			{
				s[i] = s[i] + 13;
				break;
			}
			s[i] = s[i] - 13;
			break;
		}
		i++;
	}
	return (s);
}
