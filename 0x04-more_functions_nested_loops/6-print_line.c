#include "main.h"

/**
 * print_line - prints line
 * @n: number of lines
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n <= 0)
			break;
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
