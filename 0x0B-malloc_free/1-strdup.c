#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to dupe or NULL
 */
char *_strdup(char *str)
{
	char *st;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	st = malloc(sizeof(char) * (len + 1));

	if (st == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		st[i] = str[i];
	st[len] = '\0';
	return (st);
}
