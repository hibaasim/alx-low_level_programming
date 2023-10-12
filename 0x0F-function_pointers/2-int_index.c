#include "function_pointers.h"

/**
 * int_index - compares two integers
 * @array: array of integers to be compared
 * @size: size of array
 * @cmp: comparision function pointer
 *
 * Return: the index if the integers are the same and 1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return(-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if(cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
