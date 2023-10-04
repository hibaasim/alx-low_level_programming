#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates a copy of two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: the pointer to the string or NULL if failed
 */
char *str_concat(char *s1, char *s2)
{
	char *st;
	int i = 0, len = 0, g = 0, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		len++;
		i++;
	}
	while (s2[i])
	{
		g++;
		i++;
	}
	size = len + g;
	st = malloc(sizeof(char) * (size + 1));
	if (st == NULL)
		return (NULL);
	g = 0, i = 0;
	for (i = 0; s1[i] != '\0'; i++, g++)
		st[g] = s1[i];
	for (i = 0; s2[i] != '\0'; i++, g++)
		st[g] = s2[i];
	st[g] = '\0';
	return (st);
}
