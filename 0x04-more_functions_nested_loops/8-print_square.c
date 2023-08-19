#include "main.h"

/**
 * print_square - prints a square
 * @size: gives dimensions 
 *
 */
void print_square(int size)
{
	int i, s;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (s = 0; s < size; s++)
				_putchar('#');
			if (i = size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
