#include "main.h"

/**
 * cap_string - capitalizes all words
 * @c: string
 *
 * Return: new string
 */
char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		while (!(c[i] >= 'a' && c[i] <= 'z'))
			i++;

		if (c[i--] == ' ' ||
			c[i--] == '\t' ||
			c[i--] == '\n' ||
			c[i--] == ',' ||
			c[i--] == ';' ||
			c[i--] == '.' ||
			c[i--] == '!' ||
			c[i--] == '?' ||
			c[i--] == '"' ||
			c[i--] == '(' ||
			c[i--] == ')' ||
			c[i--] == '{' ||
			c[i--] == '}')
			c[i] = c[i] - 32;
	}
	return (c);
}
