#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to unit
 * @b: binary string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, prod;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	prod = 1;
	for (len = (len - 1); len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		i = i + (b[len] - '0') * prod;
		prod = prod * 2;
	}
	return (i);
}
