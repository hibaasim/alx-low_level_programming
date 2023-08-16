#include "main.h"

/**
 * _islower - Entry point
 *@c: the input character
 * Return: 1 if lowercse, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else 
	{
		return (0);
	}
}

