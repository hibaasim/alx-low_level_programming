#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings only
 * @separator: separates strings
 * @n: number of input variables
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	char *string;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(st, char *);
		if (string == NULL)
			string = "nil";
		printf("%s", string);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(st);
}
