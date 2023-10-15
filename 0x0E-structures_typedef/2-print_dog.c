#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct
 *
 */
void print_dog(struct dog *d)
{
	char *name = (*d).name;
	float age = (*d).age;
	char *owner = (*d).owner;

	if (name == NULL)
		name = "(nil)";
	if (owner == NULL)
		owner = "(nil)";
	if (d != NULL)
	{
		printf("Name: %s\n", name);
		printf("Age: %f\n", age);
		printf("Owner: %s\n", owner);
	}
}
