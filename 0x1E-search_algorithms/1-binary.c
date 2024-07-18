#include "search_algos.h"

/**
 * binary_search - searches for a value using Binary Search
 *
 *@array: input array
 *@size: number of elements in array
 *@value: value to search in
 *
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, m, h = (size - 1);
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while(l <= h)
	{
		m = (l + h) / 2;
		
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			if (i == h)
				printf("%i\n", array[i]);
			else
				printf("%i%s", array[i],",");
		}
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}
	return (-1);
}
