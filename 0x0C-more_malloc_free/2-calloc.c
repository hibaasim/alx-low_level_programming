#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory fro an array using malloc
 * @nmemb: number of elements
 * @size: type of variables
 *
 * Return: pointer to array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; s[i]; i++)
		s[i] = 0;
	return (s);
}
