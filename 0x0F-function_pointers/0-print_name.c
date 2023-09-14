#include "function_pointers.h"

/**
 * print_name - prints th names in funcions
 * @name: pointer to name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
