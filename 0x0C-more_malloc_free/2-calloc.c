#include "main.h"
#include <stdlib.h>

char *cp(char *st, unsigned int size);
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array members
 * @size: size of each member
 *
 * Return: NULL or pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	cp(p, size * nmemb);
	return (p);
}
/**
 * cp - initializes the allocated memory
 * @st: pointer to memory
 * @size: size of memory
 *
 * Return: initialized pointer
 */
char *cp(char *st, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
		st[i] = 0;
	return (st);
}
