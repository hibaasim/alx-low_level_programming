#include "main.h"

/**
 * _memcpy -  function copies n bytes from
 * memory area src to memory area dest
 * @dest: destination memory area
 * @src: source
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, t = n;

	for (i = 0; i < t; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
