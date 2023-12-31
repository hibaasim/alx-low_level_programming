#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: destination string
 * @src: string to be concatenated
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int d = 0, i;

	while (dest[d] != '\0')
		d++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[d] = src[i];
		d++;
	}
	dest[d] = '\0';

	return (dest);
}
