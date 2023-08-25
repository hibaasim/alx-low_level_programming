#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array name
 * @n: number of elements
 *
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
