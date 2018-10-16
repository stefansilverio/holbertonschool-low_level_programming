#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - return a ptr to a new dog
 *
 * @name: name of new dog
 *
 * @owner: new owner
 *
 * @age: new age
 *
 * Return: ptr to new dog
 */
dog_t *new_dog(char *name, float age, char *owner) /* return ptr to new dog */
{
	int index_1;
	int index_2;
	int fill_1;
	int fill_2;
	char *new_name;
	char *new_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	for (index_1 = 0; name[index_1]; index_1++)
		;

	for (index_2 = 0; owner[index_2]; index_2++)
		;

	new_name = malloc((index_1 + 1) * sizeof(char));

	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_owner = malloc((index_2 + 1) * sizeof(char));

	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	for (fill_1 = 0; index_1 > fill_1; fill_1++)
		new_name[fill_1] = name[fill_1];

	new_name[fill_1] = '\0';

	for (fill_2 = 0; index_2 > fill_2; fill_2++)
		new_owner[fill_2] = owner[fill_2];

	new_owner[fill_2] = '\0';

	new_dog->name = new_name;
	new_dog->owner = new_owner;
	new_dog->age = age;

	return (new_dog);
}
