#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print the members of a struct
 *
 * @d: ptr to struct
 *
 * Return: Always 0
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	if (d->name == NULL)
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
}
