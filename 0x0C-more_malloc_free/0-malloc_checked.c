#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
