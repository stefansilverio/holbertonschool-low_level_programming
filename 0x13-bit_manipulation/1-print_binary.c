#include <stdio.h>
#include "holberton.h"

/**
 * print_binary - print binary representation of a number
 * @n: number to represent in binary
 * Return: n in binary
 */
void helper1(unsigned long int n);

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else
		helper1(n);
}

/**
 * helper1 - recursive fn to print binary
 * @n: decimal number to represent in binary
 * Return: nothing
 */
void helper1(unsigned long int n)
{
	unsigned long int store = 0;

	store = n;

	if (n != 0)
	{
		store = n & 1;
		helper1(n >> 1);
		_putchar('0' + store);
	}
	else
		return;
}
