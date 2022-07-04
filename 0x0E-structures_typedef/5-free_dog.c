#include "dog.h"

/**
 * free_dog - frees a memory location for the dog pointer
 *
 * @d: carries the dog pointer
 */
void free_dog(dog_t *d)
{
	free(d);
}
