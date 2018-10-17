#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 */
char **strtow(char *str)
{
	int index_1 = 0;
	int count = 0;
	char *buffer[];

	if ((str == NULL) || (str == ""))
		return (NULL);

	while (str[index_1] != '\0') /* block counts char ptrs */
	{
		if ((str[index_1] >= 'A') && (str[index_1] <= 'z'))
		{
			while (str[index_2] != ' ')
				index_2++;
			count++;
			index_1++;
		}

		else
			index_1++;
	}

	*buffer = malloc((count) * (sizeof(char*)));

	if (buffer == NULL)
		return(NULL);


	*buffer = malloc((index_2) * (sizeof(char)));

	index_1 = 0;

	while (str[index_1] != '\0') /* block allocates space for characters */
	{
		if ((str[index_1] >= 'A') && (str[index_1] <= 'z'))
		{
			while (str[index_2] != ' ')
				index_2++;

			*buffer = malloc((index_2) * sizeof(char));

				if (buffer == NULL)
				{
					while (index_2 > freed)
						free(buffer[index_2]);
					free(buffer);
				}
		}
		index_1++;
	}

	while (str[index_1] != '\0') /* block moves characters into buffer */
	{
		if ((str[index_1] >= 'A') && (str[index_1] <= 'z'))
		{
			while (str[index_2] != ' ')
				index_2++;

			while (index_2 > 0)
			{
buffer[
