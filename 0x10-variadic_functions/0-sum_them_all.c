#include "variadic_functions.h"

/**
 * sum_them_all - sums all input numbers
 * @n: number of input
 *
 * Return: 0 if n is 0, the sum if not.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(num, int);
		va_end(num);
		return (sum);
	}
	return (0);
}
