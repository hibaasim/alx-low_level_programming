#include "main.h"

/**
 * _strstr - finds a substring and prints it
 * @haystack: string to be searched
 * @needle: substring to be found
 *
 * Return: substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*needle != '\0')
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (*needle == haystack[i])
				return (needle);
		}
		needle++;
	}
	return ('\0');
}
