#include "main.h"

/**
 * _strncpy - copies string
 * @dest: dsetination string
 * @src: source string
 * @n: values to be copied
 *
 * Return: concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int st;

	for (st = 0 ; st < n && src[st] != '\0'; st++)
		dest[st] = src[st];
	for (; st < n; st++)
		dest[st] = '\0';
	return (dest);
}
