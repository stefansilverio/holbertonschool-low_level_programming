#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int helper(int value);

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
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[index]) < 0)
		printf("0\n");
	else
	{
		coins = helper(atoi(argv[index]));
		printf("%d\n", coins);
	}
	return (0);
}

/**
 * helper - count how many coins it take
 *
 * @value: number passed in
 *
 * Return: Always 0.
 */
int helper(int value)
{
	int coins[] = {25, 10, 5, 2, 1};
	int index;
	int coin_count = 0;

	for (index = 0; index <= 4; index++)
	{
		if (coins[index] == 1)
		{
			while (value--)
			{
				coin_count++;
			}
		}

		coin_count = coin_count(value, coins[index], coin_count);
	}
	return (coin_count); /* return number of coins */
}

int coin_count(value, coins[index], coin_count)
{
	if (value / coins[index] != 0)
	{
		return (coin_count);
	}

	else
	{
		value = value / coins[index];
		coin_count++;
	}

	return (coin_count);
}
