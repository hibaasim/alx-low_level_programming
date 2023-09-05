#include "main.h"

/**
 * _strcpy - copies the string pointed to
 * @dest: destination string
 * @src: copied string
 *
 * Return: destiantion string(the copy made)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	return (dest);
}
