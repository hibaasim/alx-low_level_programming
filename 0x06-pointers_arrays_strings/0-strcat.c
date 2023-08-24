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
	int d = 0, s = 0, i;

	while (*dest++)
		d++;
	while (*src++)
		s++;

	for (i = 0; i <= s; i++)
	{
		dest[d++] = src[i];
	}
	return (dest);
}
