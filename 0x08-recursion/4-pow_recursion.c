#include "main.h"

/**
 * _pow_recursion - returns x raised to power y
 * @x: number to be raised
 * @y: power
 *
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	int i;

	i = x;
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	i = i * _pow_recursion(x, y - 1);
	return (i);
}
