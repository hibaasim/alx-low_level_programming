#include "main.h"

int _sqrt(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - finds suqare root of value
 * @n: value of number
 *
 * Return: square root of value or -1 if no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
/**
 * _sqrt - actually does the calculation
 * @n: value for sqrt to be ound
 * @i: iterator/root
 *
 * Return: i
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}
