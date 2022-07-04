#include "dog.h"

/**
 * new_dog - creates the dog dataset based on the type dog_t
 *
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 * Return: returns a dog_t*
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *buffer;

	buffer = malloc(sizeof(dog_t));
	if (!buffer)
		return (NULL);

	buffer->name = name;
	buffer->owner = owner;
	buffer->age = age;

	return (buffer);
}
