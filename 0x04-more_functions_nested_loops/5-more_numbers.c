#include "main.h"

/**
 * more_numbers - prints from 0 to 14 x10
 *
 */
void more_numbers(void)
{
	int j, c;

	for (j = 0; j < 10; j++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar(c / 10 + 48);
			_putchar((c % 10) + 48);
		}
		_putchar('\n');
	}
}
