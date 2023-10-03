#include "main.h"

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to character or null if no character is present
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
