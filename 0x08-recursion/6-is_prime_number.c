#include "main.h"

int is_prime_number(int n);
int prime_calc(int n, int i);

/**
 * is_prime_number - returns 1 if the input is a prime
 * number or return 0 i not
 * @n: number to be evaluated
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_calc(n, 2));
}

/**
 * prime_calc - finds prime number
 * @n: number
 * @i: iteration
 *
 * Return: 1 for prime, 0 for not
 */
int prime_calc(int n, int i)
{
	if (i < n)
	{
		if (n % i == 0)
			return (0);
	}
	if (n / i == 1)
		return (1);
	return (prime_calc(n, i + 1));
}
