#include <stdio.h>
#include "dog.h"

/**
 * init_dog - creates a new dog entry
 *
 * @d: a pointer to the dog information
 * @name: the dog name
 * @age: the age of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->age = age;
	d->name = name;
	d->owner = owner;
}
