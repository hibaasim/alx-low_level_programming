#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints fizz for x3 buzz for x5 and fizzbuzzz for both
 * main - entry point
 *
 * Return: 0
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d",i);
		putchar(' ');
	}
	putchar('\n');
}
int main(void)
{
	fizz_buzz();
	return (0);
}
