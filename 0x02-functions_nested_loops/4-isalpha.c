#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks wether variable is an alphabet or not
 * @c: input variable
 *
 * Return: 1 if variable is an alphabet, 0 if not.
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
