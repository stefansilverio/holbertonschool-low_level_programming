#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * argstostr - concatenate all arguments in program
 *
 * @ac: argument count
 *
 * @av: ptr to arguments
 *
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int row;
	int column;
	int index = 0;
	int len;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	for (row = 0; row < ac; row++)
	{
		column = 0;
		while (av[row][column])
		{
			column++;
			len++;
		}
	}

	str = malloc((len + ac + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (row = 0; row < ac; row++)
	{
		column = 0;
		while (av[row][column])
		{
			str[index] = av[row][column];
			column++;
			index++;
		}
		str[index] = '\n';
		index++;
	}
		str[index + 1] = '\0';
		return (str);
}
