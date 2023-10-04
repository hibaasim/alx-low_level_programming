#include "main.h"
#include <stdlib.h>

/**
 * strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate or null
 */
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *st;

	if (str == NULL)
		return (NULL);
	while (str[i])
	{
		len += 1;
		i++;
	}
	st = malloc(sizeof(char) * (len + 1));
	if (st == NULL)
		return (NULL);
	for  (i = 0; str[i]; i++)
		st[i] = str[i];
	st[len] = '\0';
	return (st);
}
