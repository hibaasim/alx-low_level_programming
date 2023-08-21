#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: string
 *
 */
void _puts(char *str)
{
	int rin = *str;

	while (*str != '\0')
	{ 
		_putchar(rin);
		rin++;
	}
}
