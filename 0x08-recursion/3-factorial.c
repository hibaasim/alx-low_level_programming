#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number to give factorial of
 *
 * Return: n! or -1 for error
 */
int factorial(int n)
{
	if (n >= 0)
	{
		if (n == 0)
			return (1);
		return (n * factorial(n - 1));
	}
	else
		return (-1);
}
