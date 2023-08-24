#include "main.h"

/**
 * _strncat - concatenates n values from string
 * @dest: destionation string
 * @src: source string
 *
 * Return: cocatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, s;

	while (dest[d] != 0)
		d++;
	for (s = 0; src[s] != '\0' && s < n; s++, d++)
	{
		dest[d] = src [s];
	}
	dest[d] = '\0';

	return (dest);

}
