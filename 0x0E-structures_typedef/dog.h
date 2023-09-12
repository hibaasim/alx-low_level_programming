#ifndef DOG_H
#define DOG_H
/**
 * struct dog - talks about dog
 * my_dog - tupedef1
 * dog_t - typedef2
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
