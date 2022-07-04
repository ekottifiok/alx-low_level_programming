#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *buffer;

    buffer = malloc(sizeof(dog_t));

    buffer->name = name;
    buffer->owner = owner;
    buffer->age = age;

    return (buffer);
}