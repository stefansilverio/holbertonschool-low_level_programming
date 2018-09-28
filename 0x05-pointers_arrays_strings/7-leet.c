#include "holberton.h"
#include <stdio.h>

/**
 * leet - function converts to leet
 *
 * @s: string to convert
 *
 * Return: Always 0.
 */
char *leet(char *s)
{
	char *nums = "4433007711";
	char *chars = "AaEeOoTtLl";
	int num = 0;
	int car = 0;
	int string = 0;

	for (string = 0; s[string] != 0; ++string)
	{
		for (car = 0, num = 0; chars[car] != 0; ++car, ++num)
		{
			if (s[string] == chars[car])
				s[string] = nums[num];
		}
	}
	return (s);
}
