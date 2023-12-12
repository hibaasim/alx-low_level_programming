#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks wether value is digit
 * @c: to be checked
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
