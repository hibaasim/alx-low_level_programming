#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes taken from second string
 *
 * Return: NULL or pointer to new space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j = 0, len = 0;

	if (s1 == 0 || s2 == 0 || n == 0)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	p = malloc(len + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[j++] = s1[i];
	if (n > sizeof(s2))
		n = sizeof(s2);
	for (i = 0; i < n; i++)
		p[j++] = s2[i];
	p[j] = '\0';
	return (p);
}
