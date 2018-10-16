#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize struct dog
 *
 * @d: pointer to a struct
 *
 * @name: pointer to a name
 *
 * @age: age of dog
 *
 * @owner: pointer to owner of dog
 *
 * Return: Always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	if (name != NULL)
		d->name = name;
	if (owner != NULL)
		d->owner = owner;
	if (age >= 0)
		d->age = age;
}
