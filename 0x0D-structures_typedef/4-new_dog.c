#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *
 *
 *
 */

dog_t *new_dog(char *name, float age, char *owner) /* return ptr to new dog */
{
	int index_1;
	int index_2;
	int fill_1 = 0;
	int fill_2 = 0;
	char *new_name;
	char *new_owner;
	float new_age;
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog_t));

	if (new_dog == NULL)
		return (NULL);

	for (index_1 = 0; name[index_1]; index_1++)
	{
		new_name = malloc((index_1) * sizeof(char));

		if (new_name == NULL)
		{
			new_name = '\0';
			return (NULL);
		}
	}

	for (index_2 = 0; owner[index_2]; index_2++)
	{
		new_owner = malloc((index_2) * sizeof(char));

		if (new_owner == NULL)
		{
			new_owner = '\0';
			return (NULL);
		}
	}

	while (index_1 < fill_1)
	{
		new_name[fill_1] = name[fill_1];
		fill_1++;
	}

	while (index_2 < fill_2)
	{
		new_owner[fill_2] = owner[fill_2];
		fill_2++;
	}

	new_age = age;

	return (new_dog);
}
