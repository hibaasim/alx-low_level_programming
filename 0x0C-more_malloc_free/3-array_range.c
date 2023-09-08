#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints array from min to max
 * @min: smallest number in range
 * @max: largest number in range
 *
 * Return: pointer to array or NULL
 */
int *array_range(int min, int max)
{
	int *s, i, m;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max + 1));
	if (s == NULL)
		return (NULL);
	m = 0;
	for (i = min; i <= max; m++, i++)
		s[m] = i;
	return (s);
}
