#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: the number to be evaluated.
 *
 * Return: i
 */
int print_last_digit(int n)
{
	int i = n % 10;

	_putchar(i);
	return (i);
}
