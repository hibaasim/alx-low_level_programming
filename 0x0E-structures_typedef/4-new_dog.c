#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int length(char *s);
char copy(char *dest, char *src);
/**
 * length - gives string length
 * @s: string
 *
 * Return: length
 */
int length(char *s)
{
	int i, len;

	for (i = 0; s[i]; i++)
		len++;
	return (len);
}
char copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0'
	return (dest);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner= malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = copy(dog->name, name);
	dog->age = age;
	dog->owner = copy(dog->owner, owner);
	return (dog);
}
