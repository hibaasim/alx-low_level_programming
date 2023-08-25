#include "stdio.h"

/**
 * leet -  encodes a string into 1337.
 * @l: string
 *
 * Return: encoded string
 */
char *leet(char *l)
{
	int i, j;

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; l[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (l[i] == s1[j])
			{
				l[i] = s2[j];
			}
		}
	}
	return (l);
}
