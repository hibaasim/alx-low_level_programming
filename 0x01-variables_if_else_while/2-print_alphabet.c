#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		putchar ('\n');
		i++;
	}
	return (0);
}

