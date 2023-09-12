#include "main.h"
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
	struct dog *p;

	p = malloc(sizeof(dog));
	p->name = name;
	p->age = age;
	p->owner = owner;
}	
