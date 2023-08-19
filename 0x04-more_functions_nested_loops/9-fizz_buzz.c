#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz for x3 buzz for x5 and fizzbuzzz for both
 *
 * Return: 0
 */
int main(void)
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
		if (n==100)
			continue;
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
