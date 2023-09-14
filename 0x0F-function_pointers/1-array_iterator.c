#include "function_pointers.h"

/**
 * array_iterator - executes functions as parameters of an array
 * @array: the array used
 * @size: size of array
 * @action: the function pointer
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
