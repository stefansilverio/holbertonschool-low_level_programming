#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int helper(int value);
int count_coins(int value, int coin_value, int coin_count);

/**
 * main - return least number of coins needed for change
 *
 * @argc: argument count
 *
 * @argv: pointer to arrary of char pointers
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index = 1;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[index]) < 0)
		printf("0\n");
	else
	{
		cents = helper(atoi(argv[index]));
		printf("%d\n", cents);
	}
	return (0);
}

/**
 * helper - call recursive function
 *
 * @value: number passed in
 *
 * Return: Always 0.
 */
int helper(int value)
{
	int index = 0;
	int coin_count = 0;

	coin_count = count_coins(value, index, coin_count);

	return (coin_count); /* return number of coins */
}

/**
 * count_coins - make change
 *
 * @value: value to make change for
 *
 * @index: array indexer
 *
 * @coin_count: variable to count coins
 *
 * Return: number of coins
 */
int count_coins(int value, int index, int coin_count) /* subtract by coin */
{
	int coins[] = {25, 10, 5, 2, 1};

	if (value - coins[index] >= 0)
	{
		value = value - coins[index];
		coin_count = count_coins(value, index, coin_count + 1);
	}

	else if ((value - coins[index] < 0) && (index <= 4))
	{
		coin_count = count_coins(value, index + 1, coin_count);
	}

	else
	{
		if ((index == 4) && (value - coins[index] < 0))
			return (coin_count);
	}

	return (coin_count); /* return number of coins */
}
