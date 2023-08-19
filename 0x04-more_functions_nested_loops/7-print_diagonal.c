#include "main.h"

/**
 * print_diagonal - prints \ n times
 * @n: unmber of \ to be printed
 *
 */
void print_diagonal(int n)
{
	int d;
	
	for (d = 0; d < n; d++)
	{
		if (n <= 0)
			break;
		_putchar(92);
	}
	_putchar('\n');
}
