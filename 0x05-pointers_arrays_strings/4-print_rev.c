#include "main.h"

/**
 * print_rev - prints strins in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
	for (*s = '\0'; *s <= *s; *s--)
	       _putchar(*s);
	_putchar('\n');
}	
