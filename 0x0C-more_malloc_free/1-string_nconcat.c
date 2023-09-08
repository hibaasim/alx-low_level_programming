#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to be taken from second string
 *
 * Return: new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	len += n + 1;

	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		s[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		s[len++] = s2[i];
	s[len] = '\0';
	return (s);
}
