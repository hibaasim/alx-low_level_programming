#include "main.h"

/**
 * jack_bauer - prints the minutes of a 24 hour day
 *
 */
void jack_bauer(void)
{
	int h, r, m, n;

	for (h = 0; h <= 2; h++)
	{
		for (r = 0; r <= 3; r++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					_putchar(h + '0');
					_putchar(r + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
				}
			}
		}
	}
}
