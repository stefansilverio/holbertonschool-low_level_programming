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
	int i = _strlen_recursion(s);
	char *a = s;
	char *b = s + (i - 1);

	if (i == 0)
		return (1);
	return (_str_check(a, b));
}

/**
 * _strlen_recursion - determine length of string
 *
 * @s: string to determine length of
 *
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
		return (0);
	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}

/**
 * _str_check - compare characters in string
 *
 * @a: first character in string
 *
 * @b: last character in string
 *
 * Return: Always 0
 */
int _str_check(char *a, char *b)
{
	if (*a != *b)
		return (0);
	if (a >= b)
		return (1);
	else
		return (_str_check(a + 1, b - 1));
}
