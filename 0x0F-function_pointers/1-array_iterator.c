#include <stdio.h>

/**
 * array_iterator: executes a function given as a parameter 
 * on each element of an array.
 * @array: array pointer
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t n;

	if (array == NULL || action == NULL)
		return; 
	for (n = 0; n < size; n++)
		action(array[n]);
}
