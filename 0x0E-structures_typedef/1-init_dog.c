#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes variable
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 * Return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}	
