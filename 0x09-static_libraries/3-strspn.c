#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to be compared
 * @accept: string to be compared to
 *
 * Return: number of bytes that aree similar to accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len = 0, j;

	for (j = 0; s[j]; j++)
	{
		if (s[j] == ',')
			break;

		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
				len += 1;
			else
				continue;
		}
	}
	return (len);
}
