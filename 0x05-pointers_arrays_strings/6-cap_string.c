#include "holberton.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: string to be capitalized
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	char test[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'};
	int index_s = 1;
	int index_t;

	while (s[index_s])
	{
		for (index_t = 0; test[index_t] > 0; index_t++)
		{
			if (s[index_s - 1] == test[index_t])
			{
				if ((s[index_s] >= 97) && (s[index_s] <= 122))
					s[index_s] = s[index_s] - 32;
			}
		}
		index_s++;
	}
	return (s);
}
