#include "main.h"
#include <stdlib.h>

/**
 * array_range - makes  ray
 * @min: minimum value
 * @max: max value
 *
 * Return: null or ptr
 */
int *array_range(int min, int max)
{
	int *pt;
	int i;

	if (min > max)
		return (NULL);
	pt = malloc(sizeof(int) * ((max - min) + 1));
	if (pt == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		pt[i] = min++;
	return (pt);
}
