#include "holberton.h"

/**
 * is_palindrome - determine if a string is a palindrome
 *
 * @s: string to test for palindrome
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int len = 1;

	if (*(s + 0) == '\0')
		return (1);
	return (helper_1(s, len));
}

int helper_1(char *s, int len)
{
	int start = 0;
	int half;

	if (*s)
	{
		len += helper_1(s++, len + 1);
		half = len / 2;
	}
	if ((*s == s[start]) && (start < half))
	    return (helper_2(s--, start + 1, half + 1));
	else
		return (0);
}

int helper_2(char *s, int start, int half)
{
	return (helper_2(s--, start + 1, half + 1));
}
