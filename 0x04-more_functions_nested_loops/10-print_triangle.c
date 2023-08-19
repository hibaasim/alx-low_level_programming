#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: gives size
 *
 */
void print_triangle(int size)
{
	int t, r, g;

	for (g = 0; g < size; g++)
	{
		if (size <= 0)
			break;
		for (t = 1; t < r; t++)
		{
			_putchar('-');
		}
		for (r = size - 1; r <= 0; r--)
			_putchar('#');
		_putchar('\n');
	}
	_putchar('\n');

}
