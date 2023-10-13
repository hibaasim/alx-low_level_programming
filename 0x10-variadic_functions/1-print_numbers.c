#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * @separator: separates the numbers
 * @n: number of numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;

	va_start(ls, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ls, int));
			if (i < n - 1)
				printf("%s", separator);
		}
		va_end(ls);
		printf("\n");
	}
}
