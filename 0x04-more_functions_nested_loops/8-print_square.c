#include "main.h"

/**
 * print_square - prints a square
 * @size: gives dimensions 
 *
 */
void print_square(int size)
{
	int i, s;

	for (i = 0; i < size; i++)
	{
		for (s = 0; s< size; s++)
		{
			if (size <= 0)
				break;
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
