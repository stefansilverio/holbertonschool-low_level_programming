#include <stdio.h>
#include <stdlib.h>

int helper(char *string);
/**
 * main - iterate through words
 *
 * @argc: argument count
 *
 * @argv: pointer to arrary of char pointers
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int index;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		if (helper(argv[index]) == 0)
			continue;
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("Success\n");
	return (0);
}

/**
 * helper - iterate through value of each char ptr
 *
 * @string: address to char array
 *
 * Return: Always 0.
 */
int helper(char *string)
{
	int sub_index;

	for (sub_index = 0; string[sub_index] != '\0'; sub_index++)
	{
		if ((string[sub_index] >= 'a') && (string[sub_index] <= 'z'))
			printf("%c\n", string[sub_index]);
		else
			return (1);
	}
	return (0);
}
