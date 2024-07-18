#include "search_algos.h"

/**
 *linear_search - searches for a value using Linear Search
 *
 *@array: input array
 *@size: size of the array
 *@value: value to search in
 *Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
	{
		return (-1);
	}
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%li] = [%i]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
