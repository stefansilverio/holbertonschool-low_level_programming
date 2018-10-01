#include "holberton.h"

/**
 * _strspn - get length of the prefix of sub-string
 *
 * @s: string to be scanned
 *
 * @accept: bytes to be scanned for
 *
 *  * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	int index_s, index_a;
	int count = 0;

	for (index_s = 0; s[index_s]; index_s++)
	{
		for (index_a = 0; accept[index_a]; index_a++)
		{
			if (s[index_s] == accept[index_a])
			{
				count++;
				break;
			}
		}
		if (accept[index_a] == '\0')
			break;
	}
	return (count);
}
