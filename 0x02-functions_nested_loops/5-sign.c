#include "main.h"

/**
 * print_sign - shows the sign of the given number
 * @n: input number
 *
 * Return: 1 if +ve, 0 if zero and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else
	{
		_putchar('0');
	}
}
