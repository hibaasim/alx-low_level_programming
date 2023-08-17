#include "main.h"

/**
 * _isupper - checks wether letter is uppercase or not
 * @c: letter to be checked
 *
 * Return: 1 if upper, 0 if not.
 */
int _isupper(int c)
{
	if ('A' <= c <= 'Z')
		return (1);
	else
		return (0);
}
