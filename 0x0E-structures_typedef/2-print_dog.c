#include "dog.h"
#ifndef NULL_CHECKER
#define NULL_CHECKER(val) ((!val) ? ("(nil)") : (val))
#endif

/**
 * print_dog - print the dog information on the pointer
 *
 * @d: the pointer carrying the dog information
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", NULL_CHECKER(d->name));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", NULL_CHECKER(d->owner));
}
