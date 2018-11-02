#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - print binary representation of a number
 * @n: number to represent in binary
 * Return: n in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int store = 0;

	store = n;

	if (n != 0)
	{
		store = n & 1;
		print_binary(n >> 1);
		printf("%lu", store);
	}
	else
		return;
}
