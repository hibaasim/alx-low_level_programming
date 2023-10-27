#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian or 1 if small
 */
int get_endianness(void)
{
	int i = 1;
	char *end;

	end = (char *)&i;
	if (*end == 1)
		return (1);
	else
		return (0);
}
