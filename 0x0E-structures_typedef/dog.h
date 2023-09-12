#ifndef DOG_H
#define DOG_H
/**
 * dog my_dog - talks about dog
 * @name: its name
 * @age: its age
 * @owner: owner's name
 *
 * Description - dog info
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
typedef struct dog dog_t;
#endif
