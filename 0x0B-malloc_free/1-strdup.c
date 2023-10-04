#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 *
 * Return: pointer to duplicate or null
 */
char *_strdup(char *str)
{
	int len, i = 0;
	char *st;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		len += 1;
	st = malloc(sizeof(char) * (len - 1));
	for  (i = 0; i < len; i++)
		st[i] = str[i];
	if (st == NULL)
		return (NULL);
	return (st);
}
