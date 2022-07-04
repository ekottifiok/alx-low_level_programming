#include <stdio.h>
#include "dog.h"

/**
 * @brief 
 * 
 * @param d 
 * @param name 
 * @param age 
 * @param owner 
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d->age = age;
    d->name = name;
    d->owner = owner;
}