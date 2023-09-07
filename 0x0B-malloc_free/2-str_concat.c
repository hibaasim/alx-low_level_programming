#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer or null
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, len1 = 0, len2 = 0;

	for (i = 0; s1[i]; i++)
		len1++;
	for (i = 0; s2[i]; i++)
		len2++;
	s = malloc (sizeof(char) * (len1 + len2));

	for (k = 0;  
