#include "main.h"

/**
 * factorial - gives factorial of a num
 * @n: number to give factorial of
 *
 * Return: factorial of n or -1 for error
 */
int factorial(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	i = i * factorial (n - 1);
	return (i);
}
