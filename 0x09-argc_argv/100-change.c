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
		coin_count = count_coins(value, coins[index], coin_count);
	}
	return (coin_count); /* return number of coins */
}

int count_coins(int value, int coin_value, int coin_count) /* divide value by each coin */
{
	if (value - coin_value > 0)
	{
		value = value - coins_value;
		count_coins(value, coin_value, coin_count + 1);
	}
	return (coin_count); /* return number of coins */
}
