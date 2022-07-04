#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print the dog information on the pointer
 *
 * @d: the pointer carrying the dog information
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
