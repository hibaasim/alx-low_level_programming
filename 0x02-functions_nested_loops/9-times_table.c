#include "main.h"

/**
 * times_table - prints all times tables from 0 to 9
 *
 */
void times_table(void)
{
	int m, n, t;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			t = m * n;
			if (t <= 9)
			{
				_putchar(' ');
			}
			_putchar(t + '0');
		}
		putchar('\n');
	}
}
