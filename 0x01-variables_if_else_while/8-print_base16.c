#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for  (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
